// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PointRepresentation_HeaderFile
#define _PBRep_PointRepresentation_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PBRep_PointRepresentation_HeaderFile
#include <Handle_PBRep_PointRepresentation.hxx>
#endif

#ifndef _PTopLoc_Location_HeaderFile
#include <PTopLoc_Location.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PBRep_PointRepresentation_HeaderFile
#include <Handle_PBRep_PointRepresentation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
class PTopLoc_Location;


class PBRep_PointRepresentation : public Standard_Persistent {

public:

  
  Standard_EXPORT     PTopLoc_Location Location() const;
  
  Standard_EXPORT     Standard_Real Parameter() const;
  
  Standard_EXPORT     void Parameter(const Standard_Real P) ;
  
  Standard_EXPORT     Handle_PBRep_PointRepresentation Next() const;
  
  Standard_EXPORT     void Next(const Handle(PBRep_PointRepresentation)& N) ;
  //! A point on a 3d curve. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnCurve() const;
  //! A point on a 2d curve on a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnCurveOnSurface() const;
  //! A point on a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnSurface() const;

  PBRep_PointRepresentation( )
{
  
}
PBRep_PointRepresentation(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const PTopLoc_Location& _CSFDB_GetPBRep_PointRepresentationmyLocation() const { return myLocation; }
    Standard_Real _CSFDB_GetPBRep_PointRepresentationmyParameter() const { return myParameter; }
    void _CSFDB_SetPBRep_PointRepresentationmyParameter(const Standard_Real p) { myParameter = p; }
    Handle(PBRep_PointRepresentation) _CSFDB_GetPBRep_PointRepresentationmyNext() const { return myNext; }
    void _CSFDB_SetPBRep_PointRepresentationmyNext(const Handle(PBRep_PointRepresentation)& p) { myNext = p; }



  DEFINE_STANDARD_RTTI(PBRep_PointRepresentation)

protected:

  
  Standard_EXPORT   PBRep_PointRepresentation(const Standard_Real P,const PTopLoc_Location& L);



private: 


PTopLoc_Location myLocation;
Standard_Real myParameter;
Handle_PBRep_PointRepresentation myNext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif