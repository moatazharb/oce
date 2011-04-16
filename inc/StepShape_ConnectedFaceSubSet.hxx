// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ConnectedFaceSubSet_HeaderFile
#define _StepShape_ConnectedFaceSubSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_ConnectedFaceSubSet_HeaderFile
#include <Handle_StepShape_ConnectedFaceSubSet.hxx>
#endif

#ifndef _Handle_StepShape_ConnectedFaceSet_HeaderFile
#include <Handle_StepShape_ConnectedFaceSet.hxx>
#endif
#ifndef _StepShape_ConnectedFaceSet_HeaderFile
#include <StepShape_ConnectedFaceSet.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepShape_HArray1OfFace_HeaderFile
#include <Handle_StepShape_HArray1OfFace.hxx>
#endif
class StepShape_ConnectedFaceSet;
class TCollection_HAsciiString;
class StepShape_HArray1OfFace;


//! Representation of STEP entity ConnectedFaceSubSet <br>
class StepShape_ConnectedFaceSubSet : public StepShape_ConnectedFaceSet {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_ConnectedFaceSubSet();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepShape_HArray1OfFace)& aConnectedFaceSet_CfsFaces,const Handle(StepShape_ConnectedFaceSet)& aParentFaceSet) ;
  //! Returns field ParentFaceSet <br>
  Standard_EXPORT     Handle_StepShape_ConnectedFaceSet ParentFaceSet() const;
  //! Set field ParentFaceSet <br>
  Standard_EXPORT     void SetParentFaceSet(const Handle(StepShape_ConnectedFaceSet)& ParentFaceSet) ;




  DEFINE_STANDARD_RTTI(StepShape_ConnectedFaceSubSet)

protected:




private: 


Handle_StepShape_ConnectedFaceSet theParentFaceSet;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif