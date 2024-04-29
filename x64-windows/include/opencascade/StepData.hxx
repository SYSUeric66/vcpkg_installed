// Created on: 1992-02-11
// Created by: Christian CAILLET
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

#ifndef _StepData_HeaderFile
#define _StepData_HeaderFile

#include "Standard.hxx"
#include "Standard_DefineAlloc.hxx"
#include "Standard_Handle.hxx"

class StepData_Protocol;


//! Gives basic data definition for Step Interface.
//! Any class of a data model described in EXPRESS Language
//! is candidate to be managed by a Step Interface
class StepData 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the recorded HeaderProtocol, which can be :
  //! - a Null Handle if no Header Protocol was yet defined
  //! - a simple Protocol if only one was defined
  //! - a FileProtocol if more than one Protocol was yet defined
  Standard_EXPORT static Handle(StepData_Protocol) HeaderProtocol();
  
  //! Adds a new Header Protocol to the Header Definition
  Standard_EXPORT static void AddHeaderProtocol (const Handle(StepData_Protocol)& headerproto);
  
  //! Prepares General Data required to work with this package,
  //! which are the Protocol and Modules to be loaded into Libraries
  Standard_EXPORT static void Init();
  
  //! Returns a Protocol from StepData (avoids to create it)
  Standard_EXPORT static Handle(StepData_Protocol) Protocol();

};

#endif // _StepData_HeaderFile
