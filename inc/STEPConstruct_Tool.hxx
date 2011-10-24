// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_Tool_HeaderFile
#define _STEPConstruct_Tool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_XSControl_WorkSession_HeaderFile
#include <Handle_XSControl_WorkSession.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif
#ifndef _Handle_Interface_HGraph_HeaderFile
#include <Handle_Interface_HGraph.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class XSControl_WorkSession;
class Transfer_FinderProcess;
class Transfer_TransientProcess;
class Interface_HGraph;
class Interface_InterfaceModel;
class Interface_Graph;


//! Provides basic functionalities for tools which are intended <br>
//!          for encoding/decoding specific STEP constructs <br>
class STEPConstruct_Tool  {
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

  //! Creates an empty tool <br>
  Standard_EXPORT   STEPConstruct_Tool();
  //! Creates a tool and loads it with worksession <br>
  Standard_EXPORT   STEPConstruct_Tool(const Handle(XSControl_WorkSession)& WS);
  //! Returns currently loaded WorkSession <br>
       const Handle_XSControl_WorkSession& WS() const;
  //! Returns current model (Null if not loaded) <br>
        Handle_Interface_InterfaceModel Model() const;
  //! Returns current graph (recomputing if necessary) <br>
       const Interface_Graph& Graph(const Standard_Boolean recompute = Standard_False) const;
  //! Returns TransientProcess (reading; Null if not loaded) <br>
       const Handle_Transfer_TransientProcess& TransientProcess() const;
  //! Returns FinderProcess (writing; Null if not loaded) <br>
       const Handle_Transfer_FinderProcess& FinderProcess() const;





protected:

  //! Load worksession; returns True if succeeded <br>
//!          Returns False if either FinderProcess of TransientProcess <br>
//!          cannot be obtained or are Null <br>
  Standard_EXPORT     Standard_Boolean SetWS(const Handle(XSControl_WorkSession)& WS) ;




private:



Handle_XSControl_WorkSession myWS;
Handle_Transfer_FinderProcess myFinderProcess;
Handle_Transfer_TransientProcess myTransientProcess;
Handle_Interface_HGraph myHGraph;


};


#include <STEPConstruct_Tool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif