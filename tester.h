/**
 * \file tester.h
 *
 * \ingroup Testing
 *
 * \brief Class def header for a class tester
 *
 * @author mdeltutt
 */

/** \addtogroup Testing

    @{*/

#ifndef GALLERY_FMWK_TESTER_H
#define GALLERY_FMWK_TESTER_H

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


  const int MU_MINUS = 13;
  const int PI_PLUS  = 211;
  const int PROTON   = 2212;   
  const int K_PLUS   = 321;
  const int E_MINUS  = 11;
  const int PHOTON   = 22; 

/**
   \class tester
   User custom analysis class made by SHELL_USER_NAME
 */
class tester : galleryfmwk::ana_base {

public:

  /// Default constructor
  tester() {_verbose = false;}

  /// Default destructor
  // ~example_ana() {}


  bool initialize();


  bool analyze(gallery::Event * ev);


  bool finalize();


  void setFlashProducer(std::string s) {_flash_producer = s;}
  void setPfpProducer(std::string s) {_pfp_producer = s;}
  void setVerbose(bool b){_verbose = b;}

protected:

  std::string _flash_producer;
  std::string _pfp_producer;
  bool _verbose;

  TH1D * _fls_pe = new TH1D("fls_pe", "fls_pe", 80, 0, 250);
  TH1D * _npfp = new TH1D("npfp", "npfp", 30, 0, 40);
  TH1D * _npfp_track  = new TH1D("npfp_track",  "npfp_track",  30, 0, 40);
  TH1D * _npfp_shower = new TH1D("npfp_shower", "npfp_shower", 30, 0, 40);
  TH1D * _npfp_trk_shw_ratio = new TH1D("npfp_trk_shw_ratio", "npfp_trk_shw_ratio", 100, 0, 5);
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
