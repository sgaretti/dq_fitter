/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

// Your description goes here...

#include "Riostream.h"

#include "RatioPol1Pol2Pdf.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
#include <math.h>
#include "TMath.h"

ClassImp(RatioPol1Pol2Pdf);

 RatioPol1Pol2Pdf::RatioPol1Pol2Pdf(const char *name, const char *title,
                        RooAbsReal& _x,
                        RooAbsReal& _P0,
                	      RooAbsReal& _P1,
                        RooAbsReal& _P2) :
   RooAbsPdf(name,title),
   x("x","x",this,_x),
   P0("P0","P0",this,_P0),
   P1("P1","P1",this,_P1),
   P2("P2","P2",this,_P2)
 {
 }


 RatioPol1Pol2Pdf::RatioPol1Pol2Pdf(const RatioPol1Pol2Pdf& other, const char* name) :
   RooAbsPdf(other,name),
   x("x",this,other.x),
   P0("P0",this,other.P0),
   P1("P1",this,other.P1),
   P2("P2",this,other.P2)
 {
 }



 Double_t RatioPol1Pol2Pdf::evaluate() const
 {
   return (1 + P0*x) / (1 + P1*x + P2*x*x);
 }