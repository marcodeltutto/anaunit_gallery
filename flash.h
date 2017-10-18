/**
 * \file flash.h
 *
 * \ingroup Testing
 *
 * \brief Class def header for a class flash
 *
 * @author mdeltutt
 */

/** \addtogroup Testing

    @{*/

#ifndef GALLERY_FMWK_flash_H
#define GALLERY_FMWK_flash_H

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
   \class flash
   User custom analysis class made by SHELL_USER_NAME
 */
class flash : galleryfmwk::ana_base {

public:

  /// Default constructor
  flash() {_verbose = false;}

  /// Default destructor
  // ~example_ana() {}


  bool initialize();


  bool analyze(gallery::Event * ev);


  bool finalize();


  void setFlashProducer(std::string s) {_flash_producer = s;}
  void setVerbose(bool b){_verbose = b;}

protected:

  std::string _flash_producer;
  bool _verbose;

  TH1D * _fls_time = new TH1D("fls_time", "fls_time", 500, 0, 25);
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
