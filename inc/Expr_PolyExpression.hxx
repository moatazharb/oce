// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_PolyExpression_HeaderFile
#define _Expr_PolyExpression_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_PolyExpression_HeaderFile
#include <Handle_Expr_PolyExpression.hxx>
#endif

#ifndef _Expr_SequenceOfGeneralExpression_HeaderFile
#include <Expr_SequenceOfGeneralExpression.hxx>
#endif
#ifndef _Expr_GeneralExpression_HeaderFile
#include <Expr_GeneralExpression.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
class Standard_OutOfRange;
class Standard_NumericError;
class Expr_InvalidOperand;
class Expr_GeneralExpression;
class Expr_NamedUnknown;



class Expr_PolyExpression : public Expr_GeneralExpression {

public:

  //! returns the number of operands contained in <me> <br>
  Standard_EXPORT     Standard_Integer NbOperands() const;
  //! Returns the <index>-th operand used in <me>. <br>
//!          An exception is raised if index is out of range <br>
       const Handle_Expr_GeneralExpression& Operand(const Standard_Integer index) const;
  //! Sets the <index>-th operand used in <me>. <br>
//!          An exception is raised if <index> is out of range <br>
//!          Raises InvalidOperand if <exp> contains <me>. <br>
  Standard_EXPORT     void SetOperand(const Handle(Expr_GeneralExpression)& exp,const Standard_Integer index) ;
  //! returns the number of sub-expressions contained <br>
//!          in <me> ( >= 2) <br>
  Standard_EXPORT     Standard_Integer NbSubExpressions() const;
  //! Returns the sub-expression denoted by <I> in <me> <br>
//!          Raises OutOfRange if <I> > NbSubExpressions(me) <br>
  Standard_EXPORT    const Handle_Expr_GeneralExpression& SubExpression(const Standard_Integer I) const;
  //! Does <me> contains NamedUnknown ? <br>
  Standard_EXPORT     Standard_Boolean ContainsUnknowns() const;
  //! Tests if <exp> is contained in <me>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Expr_GeneralExpression)& exp) const;
  //! Replaces all occurences of <var> with <with> in <me> <br>
//!          Raises InvalidOperand if <with> contains <me>. <br>
  Standard_EXPORT     void Replace(const Handle(Expr_NamedUnknown)& var,const Handle(Expr_GeneralExpression)& with) ;
  //! Returns a GeneralExpression after replacement of <br>
//!          NamedUnknowns by an associated expression and after <br>
//!          values computation. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Simplified() const;




  DEFINE_STANDARD_RTTI(Expr_PolyExpression)

protected:

  //! initialize an empty list of operands. <br>
  Standard_EXPORT   Expr_PolyExpression();
  //! Adds an operand to the list of <me>. <br>
  Standard_EXPORT     void AddOperand(const Handle(Expr_GeneralExpression)& exp) ;
  //! Remove the operand denoted by <index> from the list of <br>
//!          <me>. <br>
//!          Raises exception if <index> is out of range or if <br>
//!          removing operand intend to leave only one or no <br>
//!          operand. <br>
  Standard_EXPORT     void RemoveOperand(const Standard_Integer index) ;



private: 


Expr_SequenceOfGeneralExpression myOperands;


};


#include <Expr_PolyExpression.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif