/**
 * \file vtx.h
 *
 * \ingroup Testing
 *
 * \brief Class def header for a class vtx
 *
 * @author mdeltutt
 */

/** \addtogroup Testing

    @{*/

#ifndef GALLERY_FMWK_vtx_H
#define GALLERY_FMWK_vtx_H

#include "TTree.h"

#include "canvas/Utilities/InputTag.h"
#include "gallery/Event.h"
#include "canvas/Persistency/Common/FindMany.h"

#include "Analysis/ana_base.h"

#include "lardataobj/RecoBase/Vertex.h"
#include "lardataobj/RecoBase/Hit.h"
#include "lardataobj/RecoBase/PFParticle.h"

#include "TH1D.h"

namespace galleryfmwk {


/**
   \class vtx
   User custom analysis class made by SHELL_USER_NAME
 */
class vtx : galleryfmwk::ana_base {

public:

  /// Default constructor
  vtx() {_verbose = false;}

  /// Default destructor
  // ~example_ana() {}


  bool initialize();


  bool analyze(gallery::Event * ev);


  bool finalize();


  void setvtxProducer(std::string s) {_vtx_producer = s;}
  void setVerbose(bool b){_verbose = b;}

protected:

  std::string _vtx_producer;
  bool _verbose;

  TH1D * _vtx_x = new TH1D("vtx_x", "vtx_x", 40, 0, 275);
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
