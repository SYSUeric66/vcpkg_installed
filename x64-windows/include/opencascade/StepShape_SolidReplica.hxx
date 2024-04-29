// Created on: 1995-12-01
// Created by: EXPRESS->CDL V0.2 Translator
// Copyright (c) 1995-1999 Matra Datavision
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

#ifndef _StepShape_SolidReplica_HeaderFile
#define _StepShape_SolidReplica_HeaderFile

#include "Standard.hxx"
#include "Standard_Type.hxx"

#include "StepShape_SolidModel.hxx"
class StepGeom_CartesianTransformationOperator3d;
class TCollection_HAsciiString;


class StepShape_SolidReplica;
DEFINE_STANDARD_HANDLE(StepShape_SolidReplica, StepShape_SolidModel)


class StepShape_SolidReplica : public StepShape_SolidModel
{

public:

  
  //! Returns a SolidReplica
  Standard_EXPORT StepShape_SolidReplica();
  
  Standard_EXPORT void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_SolidModel)& aParentSolid, const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation);
  
  Standard_EXPORT void SetParentSolid (const Handle(StepShape_SolidModel)& aParentSolid);
  
  Standard_EXPORT Handle(StepShape_SolidModel) ParentSolid() const;
  
  Standard_EXPORT void SetTransformation (const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation);
  
  Standard_EXPORT Handle(StepGeom_CartesianTransformationOperator3d) Transformation() const;




  DEFINE_STANDARD_RTTIEXT(StepShape_SolidReplica,StepShape_SolidModel)

protected:




private:


  Handle(StepShape_SolidModel) parentSolid;
  Handle(StepGeom_CartesianTransformationOperator3d) transformation;


};







#endif // _StepShape_SolidReplica_HeaderFile
