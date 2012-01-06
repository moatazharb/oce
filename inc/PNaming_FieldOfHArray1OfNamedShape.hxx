// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_FieldOfHArray1OfNamedShape_HeaderFile
#define _PNaming_FieldOfHArray1OfNamedShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PNaming_NamedShape_HeaderFile
#include <Handle_PNaming_NamedShape.hxx>
#endif
#ifndef _Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape_HeaderFile
#include <Handle_PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PNaming_NamedShape;
class PNaming_VArrayNodeOfFieldOfHArray1OfNamedShape;
class PNaming_VArrayTNodeOfFieldOfHArray1OfNamedShape;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PNaming_FieldOfHArray1OfNamedShape);


class PNaming_FieldOfHArray1OfNamedShape  : public DBC_BaseArray {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   PNaming_FieldOfHArray1OfNamedShape();
  
  Standard_EXPORT   PNaming_FieldOfHArray1OfNamedShape(const Standard_Integer Size);
  
  Standard_EXPORT   PNaming_FieldOfHArray1OfNamedShape(const PNaming_FieldOfHArray1OfNamedShape& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PNaming_FieldOfHArray1OfNamedShape& Other) ;
    void operator =(const PNaming_FieldOfHArray1OfNamedShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PNaming_NamedShape)& Value) ;
  
  Standard_EXPORT     Handle_PNaming_NamedShape& Value(const Standard_Integer Index) const;
    Handle_PNaming_NamedShape& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PNaming_FieldOfHArray1OfNamedShape()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif