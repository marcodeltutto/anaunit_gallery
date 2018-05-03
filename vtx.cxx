#ifndef GALLERY_FMWK_vtx_CXX
#define GALLERY_FMWK_vtx_CXX

#include "vtx.h"


namespace galleryfmwk {

bool vtx::initialize() {

    //
    // This function is called in the beggining of event loop
    // Do all variable initialization you wish to do here.
    // If you have a histogram to fill in the event loop, for vtx,
    // here is a good place to create one on the heap (i.e. "new TH1D").
    //


    return true;
}


bool vtx::analyze(gallery::Event * ev) {


//  std::cout << "Event " <<  ev->eventAuxiliary().event() << std::endl;

  // For each file, loop over all events.
    //
    // Determine criteria for rejecting muon like events
    // Save metadata for each event (neutrino pdg, energy, vertex)
    // as well as filter results.


    // Get all of the tracks from the event:
    art::InputTag vtx_tag(_vtx_producer);
    auto const & vtxes = ev -> getValidHandle<std::vector <recob::Vertex> >(vtx_tag);

    
    if (vtxes->size() == 0) {
        if (_verbose)
            std::cout << "No vtxes found." << std::endl;
        return false;
    }

    if (_verbose) {
        std::cout << "Number of vtxes by " << _vtx_producer
                  << ": " << vtxes->size() << std::endl;
    }


    for (auto v : *vtxes){
      double xyz[3];
      v.XYZ(xyz);
      _vtx_x->Fill(xyz[0]);
    }
    

    return true;
}


bool vtx::finalize() {

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
      _vtx_x->Write();
    }

    return true;
}


}
#endif
