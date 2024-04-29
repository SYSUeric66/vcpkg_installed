// Created on: 1992-03-26
// Created by: Herve LEGRAND
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _GeomLProp_CLProps_HeaderFile
#define _GeomLProp_CLProps_HeaderFile

#include "Standard.hxx"
#include "Standard_DefineAlloc.hxx"
#include "Standard_Handle.hxx"

#include "Standard_Real.hxx"
#include "Standard_Integer.hxx"
#include "gp_Pnt.hxx"
#include "gp_Vec.hxx"
#include "gp_Dir.hxx"
#include "LProp_Status.hxx"
#include "Standard_Boolean.hxx"
class Geom_Curve;
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class gp_Vec;
class gp_Pnt;
class gp_Dir;
class GeomLProp_CurveTool;



class GeomLProp_CLProps 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Initializes the local properties of the curve <C>
  //! The current point and the derivatives are
  //! computed at the same time, which allows an
  //! optimization of the computation time.
  //! <N> indicates the maximum number of derivations to
  //! be done (0, 1, 2 or 3). For example, to compute
  //! only the tangent, N should be equal to 1.
  //! <Resolution> is the linear tolerance (it is used to test
  //! if a vector is null).
  Standard_EXPORT GeomLProp_CLProps(const Handle(Geom_Curve)& C, const Standard_Integer N, const Standard_Real Resolution);
  
  //! Same as previous constructor but here the parameter is
  //! set to the value <U>.
  //! All the computations done will be related to <C> and <U>.
  Standard_EXPORT GeomLProp_CLProps(const Handle(Geom_Curve)& C, const Standard_Real U, const Standard_Integer N, const Standard_Real Resolution);
  
  //! Same as previous constructor but here the parameter is
  //! set to the value <U> and the curve is set
  //! with SetCurve.
  //! the curve can have a empty constructor
  //! All the computations done will be related to <C> and <U>
  //! when the functions "set" will be done.
  Standard_EXPORT GeomLProp_CLProps(const Standard_Integer N, const Standard_Real Resolution);
  
  //! Initializes the local properties of the curve
  //! for the parameter value <U>.
  Standard_EXPORT void SetParameter (const Standard_Real U);
  
  //! Initializes the local properties of the curve
  //! for the new curve.
  Standard_EXPORT void SetCurve (const Handle(Geom_Curve)& C);
  
  //! Returns the Point.
  Standard_EXPORT const gp_Pnt& Value() const;
  
  //! Returns the first derivative.
  //! The derivative is computed if it has not been yet.
  Standard_EXPORT const gp_Vec& D1();
  
  //! Returns the second derivative.
  //! The derivative is computed if it has not been yet.
  Standard_EXPORT const gp_Vec& D2();
  
  //! Returns the third derivative.
  //! The derivative is computed if it has not been yet.
  Standard_EXPORT const gp_Vec& D3();
  
  //! Returns True if the tangent is defined.
  //! For example, the tangent is not defined if the
  //! three first derivatives are all null.
  Standard_EXPORT Standard_Boolean IsTangentDefined();
  
  //! output  the tangent direction <D>
  Standard_EXPORT void Tangent (gp_Dir& D);
  
  //! Returns the curvature.
  Standard_EXPORT Standard_Real Curvature();
  
  //! Returns the normal direction <N>.
  Standard_EXPORT void Normal (gp_Dir& N);
  
  //! Returns the centre of curvature <P>.
  Standard_EXPORT void CentreOfCurvature (gp_Pnt& P);




protected:





private:



  Handle(Geom_Curve) myCurve;
  Standard_Real myU;
  Standard_Integer myDerOrder;
  Standard_Real myCN;
  Standard_Real myLinTol;
  gp_Pnt myPnt;
  gp_Vec myDerivArr[3];
  gp_Dir myTangent;
  Standard_Real myCurvature;
  LProp_Status myTangentStatus;
  Standard_Integer mySignificantFirstDerivativeOrder;


};







#endif // _GeomLProp_CLProps_HeaderFile