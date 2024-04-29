// Created on : Thu Mar 24 18:30:12 2022 
// Created by: snn
// Generator: Express (EXPRESS -> CASCADE/XSTEP Translator) V2.0
// Copyright (c) Open CASCADE 2022
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

#ifndef _RWStepVisual_RWTessellatedShapeRepresentation_HeaderFile_
#define _RWStepVisual_RWTessellatedShapeRepresentation_HeaderFile_

#include "Standard.hxx"
#include "Standard_DefineAlloc.hxx"
#include "Standard_Handle.hxx"

class StepData_StepReaderData;
class Interface_Check;
class StepData_StepWriter;
class Interface_EntityIterator;
class StepVisual_TessellatedShapeRepresentation;

//! Read & Write tool for TessellatedShapeRepresentation
class RWStepVisual_RWTessellatedShapeRepresentation
{

public:

  DEFINE_STANDARD_ALLOC

  Standard_EXPORT RWStepVisual_RWTessellatedShapeRepresentation();

  Standard_EXPORT void ReadStep(const Handle(StepData_StepReaderData)& theData,
                                const Standard_Integer theNum,
                                Handle(Interface_Check)& theCheck,
                                const Handle(StepVisual_TessellatedShapeRepresentation)& theEnt) const;

  Standard_EXPORT void WriteStep(StepData_StepWriter& theSW,
                                 const Handle(StepVisual_TessellatedShapeRepresentation)& theEnt) const;

  Standard_EXPORT void Share(const Handle(StepVisual_TessellatedShapeRepresentation)& theEnt,
                             Interface_EntityIterator& theIter) const;

};

#endif // _RWStepVisual_RWTessellatedShapeRepresentation_HeaderFile_
