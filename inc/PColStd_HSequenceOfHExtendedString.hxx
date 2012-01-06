// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HSequenceOfHExtendedString_HeaderFile
#define _PColStd_HSequenceOfHExtendedString_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfHExtendedString_HeaderFile
#include <Handle_PColStd_HSequenceOfHExtendedString.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PCollection_HExtendedString_HeaderFile
#include <Handle_PCollection_HExtendedString.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfHExtendedString_HeaderFile
#include <Handle_PColStd_HSequenceOfHExtendedString.hxx>
#endif
#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PCollection_HExtendedString;
class PColStd_SeqNodeOfHSequenceOfHExtendedString;
class Standard_Persistent;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PColStd_SeqExplorerOfHSequenceOfHExtendedString;


class PColStd_HSequenceOfHExtendedString : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColStd_HSequenceOfHExtendedString();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString First() const;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString Last() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(PCollection_HExtendedString)& T) ;
  
  Standard_EXPORT     void Append(const Handle(PColStd_HSequenceOfHExtendedString)& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(PCollection_HExtendedString)& T) ;
  
  Standard_EXPORT     void Prepend(const Handle(PColStd_HSequenceOfHExtendedString)& S) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& T) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Handle(PColStd_HSequenceOfHExtendedString)& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& T) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(PColStd_HSequenceOfHExtendedString)& S) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer I,const Standard_Integer J) ;
  
  Standard_EXPORT     Handle_PColStd_HSequenceOfHExtendedString SubSequence(const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Handle_PColStd_HSequenceOfHExtendedString Split(const Standard_Integer Index) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& T) ;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString Value(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(PCollection_HExtendedString)& T) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PCollection_HExtendedString)& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PCollection_HExtendedString)& T) const;
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     void Destroy() ;
~PColStd_HSequenceOfHExtendedString()
{
  Destroy();
}
PColStd_HSequenceOfHExtendedString(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PColStd_SeqNodeOfHSequenceOfHExtendedString) _CSFDB_GetPColStd_HSequenceOfHExtendedStringFirstItem() const { return FirstItem; }
    void _CSFDB_SetPColStd_HSequenceOfHExtendedStringFirstItem(const Handle(PColStd_SeqNodeOfHSequenceOfHExtendedString)& p) { FirstItem = p; }
    Handle(PColStd_SeqNodeOfHSequenceOfHExtendedString) _CSFDB_GetPColStd_HSequenceOfHExtendedStringLastItem() const { return LastItem; }
    void _CSFDB_SetPColStd_HSequenceOfHExtendedStringLastItem(const Handle(PColStd_SeqNodeOfHSequenceOfHExtendedString)& p) { LastItem = p; }
    Standard_Integer _CSFDB_GetPColStd_HSequenceOfHExtendedStringSize() const { return Size; }
    void _CSFDB_SetPColStd_HSequenceOfHExtendedStringSize(const Standard_Integer p) { Size = p; }

friend class PColStd_SeqExplorerOfHSequenceOfHExtendedString;


  DEFINE_STANDARD_RTTI(PColStd_HSequenceOfHExtendedString)

protected:




private: 

  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString GetFirst() const;
  
  Standard_EXPORT     Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString GetLast() const;

Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString FirstItem;
Handle_PColStd_SeqNodeOfHSequenceOfHExtendedString LastItem;
Standard_Integer Size;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HSequenceOfHExtendedString& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HSequenceOfHExtendedString& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif