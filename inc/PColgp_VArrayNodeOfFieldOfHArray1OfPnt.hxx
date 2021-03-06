// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfPnt_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfPnt_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfPnt.hxx>

#include <Standard_Address.hxx>
#include <gp_Pnt.hxx>
#include <PStandard_ArrayNode.hxx>
class gp_Pnt;
class PColgp_FieldOfHArray1OfPnt;
class PColgp_VArrayTNodeOfFieldOfHArray1OfPnt;


class PColgp_VArrayNodeOfFieldOfHArray1OfPnt : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfPnt();
  
  Standard_EXPORT PColgp_VArrayNodeOfFieldOfHArray1OfPnt(const gp_Pnt& aValue);
  
  Standard_EXPORT   void SetValue (const gp_Pnt& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

PColgp_VArrayNodeOfFieldOfHArray1OfPnt(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Pnt& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfPntmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfPnt)

protected:




private: 


  gp_Pnt myValue;


};







#endif // _PColgp_VArrayNodeOfFieldOfHArray1OfPnt_HeaderFile
