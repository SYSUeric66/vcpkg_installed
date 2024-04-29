// Created on: 2016-11-14
// Created by: Irina KRYLOVA
// Copyright (c) 2016 OPEN CASCADE SAS
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

#ifndef _RWStepVisual_RWCameraModelD3MultiClippingUnion_HeaderFile
#define _RWStepVisual_RWCameraModelD3MultiClippingUnion_HeaderFile

#include "Standard.hxx"
#include "Standard_DefineAlloc.hxx"
#include "Standard_Handle.hxx"

#include "Standard_Integer.hxx"
class StepData_StepReaderData;
class Interface_Check;
class StepVisual_CameraModelD3MultiClippingUnion;
class StepData_StepWriter;
class Interface_EntityIterator;

//! Read & Write Module for CameraModelD3MultiClippingUnion
class RWStepVisual_RWCameraModelD3MultiClippingUnion
{
public:

  DEFINE_STANDARD_ALLOC
  
  Standard_EXPORT RWStepVisual_RWCameraModelD3MultiClippingUnion();
  
  Standard_EXPORT void ReadStep (const Handle(StepData_StepReaderData)& data,
                                 const Standard_Integer num,
                                 Handle(Interface_Check)& ach,
                                 const Handle(StepVisual_CameraModelD3MultiClippingUnion)& ent) const;
  
  Standard_EXPORT void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_CameraModelD3MultiClippingUnion)& ent) const;
  
  Standard_EXPORT void Share(const Handle(StepVisual_CameraModelD3MultiClippingUnion)& ent, Interface_EntityIterator& iter) const;
};
#endif // _RWStepVisual_RWCameraModelD3MultiClippingUnion_HeaderFile
