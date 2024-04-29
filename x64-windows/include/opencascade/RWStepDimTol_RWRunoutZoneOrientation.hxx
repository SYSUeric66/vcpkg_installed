// Created on: 2015-07-13
// Created by: Irina KRYLOVA
// Copyright (c) 2015 OPEN CASCADE SAS
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

#ifndef _RWStepDimTol_RWRunoutZoneOrientation_HeaderFile
#define _RWStepDimTol_RWRunoutZoneOrientation_HeaderFile

#include "Standard.hxx"
#include "Standard_DefineAlloc.hxx"
#include "Standard_Handle.hxx"

#include "Standard_Integer.hxx"

class StepData_StepReaderData;
class Interface_Check;
class StepDimTol_RunoutZoneOrientation;
class StepData_StepWriter;


//! Read & Write tool for RunoutZoneOrientation
class RWStepDimTol_RWRunoutZoneOrientation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepDimTol_RWRunoutZoneOrientation();
  
  //! Reads RunoutZoneOrientation
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepDimTol_RunoutZoneOrientation)& ent)  const;
  
  //! Writes RunoutZoneOrientation
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepDimTol_RunoutZoneOrientation)& ent)  const;
  
};
#endif // _RWStepDimTol_RWRunoutZoneOrientation_HeaderFile
