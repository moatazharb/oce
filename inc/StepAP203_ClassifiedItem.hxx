// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_ClassifiedItem_HeaderFile
#define _StepAP203_ClassifiedItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#include <Handle_StepRepr_AssemblyComponentUsage.hxx>
class Standard_Transient;
class StepBasic_ProductDefinitionFormation;
class StepRepr_AssemblyComponentUsage;


//! Representation of STEP SELECT type ClassifiedItem
class StepAP203_ClassifiedItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT StepAP203_ClassifiedItem();
  
  //! Recognizes a kind of ClassifiedItem select type
  //! 1 -> ProductDefinitionFormation from StepBasic
  //! 2 -> AssemblyComponentUsage from StepRepr
  //! 0 else
  Standard_EXPORT   Standard_Integer CaseNum (const Handle(Standard_Transient)& ent)  const;
  
  //! Returns Value as ProductDefinitionFormation (or Null if another type)
  Standard_EXPORT   Handle(StepBasic_ProductDefinitionFormation) ProductDefinitionFormation()  const;
  
  //! Returns Value as AssemblyComponentUsage (or Null if another type)
  Standard_EXPORT   Handle(StepRepr_AssemblyComponentUsage) AssemblyComponentUsage()  const;




protected:





private:





};







#endif // _StepAP203_ClassifiedItem_HeaderFile
