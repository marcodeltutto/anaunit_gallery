#ifndef GALLERY_FMWK_EVENT_CXX
#define GALLERY_FMWK_EVENT_CXX

#include "event.h"


namespace galleryfmwk {

bool event::initialize() {

    //
    // This function is called in the beggining of event loop
    // Do all variable initialization you wish to do here.
    // If you have a histogram to fill in the event loop, for event,
    // here is a good place to create one on the heap (i.e. "new TH1D").
    //


    return true;
}


bool event::analyze(gallery::Event * ev) {


  std::cout << "Event " <<  ev->eventAuxiliary().event() << std::endl;

  return true;
}


bool event::finalize() {

    // This function is called at the end of event loop.
    // Do all variable finalization you wish to do here.
    // If you need, you can store your ROOT class instance in the output
    // file. You have an access to the output file through "_fout" pointer.
    //
    // Say you made a histogram pointer h1 to store. You can do this:
    //
    // if (_fout) { _fout->cd(); _tree->Write(); }

    if (_fout) { 
    }

    return true;
}


}
#endif
