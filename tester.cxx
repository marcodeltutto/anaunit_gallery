#ifndef GALLERY_FMWK_TESTER_CXX
#define GALLERY_FMWK_TESTER_CXX

#include "tester.h"


namespace galleryfmwk {

bool tester::initialize() {

    //
    // This function is called in the beggining of event loop
    // Do all variable initialization you wish to do here.
    // If you have a histogram to fill in the event loop, for tester,
    // here is a good place to create one on the heap (i.e. "new TH1D").
    //


    return true;
}


bool tester::analyze(gallery::Event * ev) {


  std::cout << "Event " <<  ev->eventAuxiliary().event() << std::endl;

  // For each file, loop over all events.
    //
    // Determine criteria for rejecting muon like events
    // Save metadata for each event (neutrino pdg, energy, vertex)
    // as well as filter results.


    // Get all of the tracks from the event:
//    art::InputTag flash_tag(_flash_producer);
//    auto const & flashes = ev -> getValidHandle<std::vector <recob::OpFlash> >(flash_tag);

    art::InputTag pfp_tag(_pfp_producer);
    auto const & pfps = ev -> getValidHandle<std::vector <recob::PFParticle> >(pfp_tag);

    /*
    if (flashes->size() == 0) {
        if (_verbose)
            std::cout << "No flashes found." << std::endl;
        return false;
    }

    if (_verbose) {
        std::cout << "Number of flashes by " << _flash_producer
                  << ": " << flashes->size() << std::endl;
    }


    for (auto f : *flashes){
      _fls_pe->Fill(f.TotalPE());
    }
    */

    int npfp = 0;
    int ntrack = 0;
    int nshower = 0;

    for (auto p : *pfps){

      npfp++;

      int pdg = p.PdgCode();

      bool is_track = ((MU_MINUS == std::abs(pdg)) 
                    || (PI_PLUS == std::abs(pdg)) 
                    || (PROTON == std::abs(pdg)) 
                    || (K_PLUS == std::abs(pdg)));

      bool is_shower = ((E_MINUS == std::abs(pdg))
                     || (PHOTON == std::abs(pdg)));

      if (is_track) 
        ntrack++;
      if (is_shower)
        nshower++;
    }

    _npfp->Fill(npfp);
    _npfp_track->Fill(ntrack);
    _npfp_shower->Fill(nshower);
    double ratio = -1;
    if (nshower != 0) 
      ratio = (double)ntrack/(double)nshower;
    else ratio = -1;
    _npfp_trk_shw_ratio->Fill(ratio);

    if (ratio > 0.9 && ratio < 1.1) {
      std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Ratio is " << ratio << "npfp = " << npfp << "  ntrack = " << ntrack << "  nshower = " << nshower << std::endl;
    }
    //std::cout << "ntrack " << ntrack << "  nshower " << nshower << "  ratio " << ratio << std::endl;

    return true;
}


bool tester::finalize() {

    // This function is called at the end of event loop.
    // Do all variable finalization you wish to do here.
    // If you need, you can store your ROOT class instance in the output
    // file. You have an access to the output file through "_fout" pointer.
    //
    // Say you made a histogram pointer h1 to store. You can do this:
    //
    // if (_fout) { _fout->cd(); _tree->Write(); }

    if (_fout) { 
      _fout->cd(); 
      _fls_pe->Write();
      _npfp->Write();
      _npfp_track->Write();
      _npfp_shower->Write();
      _npfp_trk_shw_ratio->Write();
    }

    return true;
}


}
#endif
