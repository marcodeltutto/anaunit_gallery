/**
 * \file event.h
 *
 * \ingroup Testing
 *
 * \brief Class def header for a class event
 *
 * @author mdeltutt
 */

/** \addtogroup Testing

    @{*/

#ifndef GALLERY_FMWK_EVENT_H
#define GALLERY_FMWK_EVENT_H

#include "TTree.h"

#include "canvas/Utilities/InputTag.h"
#include "gallery/Event.h"
#include "canvas/Persistency/Common/FindMany.h"

#include "Analysis/ana_base.h"

#include "lardataobj/RecoBase/OpFlash.h"
#include "lardataobj/RecoBase/Hit.h"
#include "lardataobj/RecoBase/PFParticle.h"

#include "TH1D.h"

namespace galleryfmwk {



/**
   \class event
   User custom analysis class made by SHELL_USER_NAME
 */
class event : galleryfmwk::ana_base {

public:

  /// Default constructor
  event() {_verbose = false;}

  /// Default destructor
  // ~example_ana() {}


  bool initialize();


  bool analyze(gallery::Event * ev);


  bool finalize();


  void setVerbose(bool b){_verbose = b;}

protected:

   bool _verbose;

};

}

#endif

//**************************************************************************
//
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group
