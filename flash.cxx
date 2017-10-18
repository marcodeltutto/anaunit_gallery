#ifndef GALLERY_FMWK_FLASH_CXX
#define GALLERY_FMWK_FLASH_CXX

#include "flash.h"


namespace galleryfmwk {

bool flash::initialize() {

    //
    // This function is called in the beggining of event loop
    // Do all variable initialization you wish to do here.
    // If you have a histogram to fill in the event loop, for flash,
    // here is a good place to create one on the heap (i.e. "new TH1D").
    //


    return true;
}


bool flash::analyze(gallery::Event * ev) {


//  std::cout << "Event " <<  ev->eventAuxiliary().event() << std::endl;

  // For each file, loop over all events.
    //
    // Determine criteria for rejecting muon like events
    // Save metadata for each event (neutrino pdg, energy, vertex)
    // as well as filter results.


    // Get all of the tracks from the event:
    art::InputTag flash_tag(_flash_producer);
    auto const & flashes = ev -> getValidHandle<std::vector <recob::OpFlash> >(flash_tag);

    
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
      _fls_time->Fill(f.Time());
    }
    

    return true;
}


bool flash::finalize() {

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
      _fls_time->Write();
    }

    return true;
}


}
#endif
