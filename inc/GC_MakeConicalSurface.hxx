// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeConicalSurface_HeaderFile
#define _GC_MakeConicalSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_ConicalSurface.hxx>
#include <GC_Root.hxx>
#include <Standard_Real.hxx>
class Geom_ConicalSurface;
class StdFail_NotDone;
class gp_Ax2;
class gp_Cone;
class gp_Pnt;
class gp_Ax1;
class gp_Lin;


//! This class implements the following algorithms used
//! to create a ConicalSurface from Geom.
//! * Create a ConicalSurface parallel to another and passing
//! through a point.
//! * Create a ConicalSurface parallel to another at a distance
//! <Dist>.
//! * Create a ConicalSurface by 4 points.
//! * Create a ConicalSurface by its axis and 2 points.
//! * Create a ConicalSurface by 2 points and 2 radius.
//! The local coordinate system of the ConicalSurface is defined
//! with an axis placement (see class ElementarySurface).
//!
//! The "ZAxis" is the symmetry axis of the ConicalSurface,
//! it gives the direction of increasing parametric value V.
//! The apex of the surface is on the negative side of this axis.
//!
//! The parametrization range is  :
//! U [0, 2*PI],  V ]-infinite, + infinite[
//!
//! The "XAxis" and the "YAxis" define the placement plane of the
//! surface (Z = 0, and parametric value V = 0)  perpendicular to
//! the symmetry axis. The "XAxis" defines the origin of the
//! parameter U = 0.  The trigonometric sense gives the positive
//! orientation for the parameter U.
//!
//! When you create a ConicalSurface the U and V directions of
//! parametrization are such that at each point of the surface the
//! normal is oriented towards the "outside region".
class GC_MakeConicalSurface  : public GC_Root
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! A2 defines the local coordinate system of the conical surface.
  //! Ang is the conical surface semi-angle ]0, PI/2[.
  //! Radius is the radius of the circle Viso in the placement plane
  //! of the conical surface defined with "XAxis" and "YAxis".
  //! The "ZDirection" of A2 defines the direction of the surface's
  //! axis of symmetry.
  //! If the location point of A2 is the apex of the surface
  //! Radius = 0 .
  //! At the creation the parametrization of the surface is defined
  //! such that the normal Vector (N = D1U ^ D1V) is oriented towards
  //! the "outside region" of the surface.
  //! Status is "NegativeRadius" if Radius < 0.0 or "BadAngle" if
  //! Ang < Resolution from gp or Ang >= PI/ - Resolution
  Standard_EXPORT GC_MakeConicalSurface(const gp_Ax2& A2, const Standard_Real Ang, const Standard_Real Radius);
  
  //! Creates a ConicalSurface from a non persistent Cone from package gp.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Cone& C);
  
  //! Make a ConicalSurface from Geom <TheCone> parallel to another
  //! ConicalSurface <Cone> and passing through a Pnt <Point>.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Cone& Cone, const gp_Pnt& Point);
  
  //! Make a ConicalSurface from Geom <TheCone> parallel to another
  //! ConicalSurface <Cone> at the distance <Dist> which can
  //! be greater or lower than zero.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Cone& Cone, const Standard_Real Dist);
  
  //! Make a ConicalSurface from Geom <TheCone> passing through 3
  //! Pnt <P1>,<P2>,<P3>.
  //! Its axis is <P1P2> and the radius of its base is
  //! the distance between <P3> and <P1P2>.
  //! The distance between <P4> and <P1P2> is the radius of
  //! the section passing through <P4>.
  //! An error iss raised if <P1>,<P2>,<P3>,<P4> are
  //! colinear or if <P3P4> is perpendicular to <P1P2> or
  //! <P3P4> is colinear to <P1P2>.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Pnt& P1, const gp_Pnt& P2, const gp_Pnt& P3, const gp_Pnt& P4);
  
  //! Make a ConicalSurface by its axis <Axis> and and two points.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Ax1& Axis, const gp_Pnt& P1, const gp_Pnt& P2);
  
  //! Make a ConicalSurface by its axis <Axis> and and two points.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Lin& Axis, const gp_Pnt& P1, const gp_Pnt& P2);
  
  //! Make a ConicalSurface with two points and two radius.
  //! The axis of the solution is the line passing through
  //! <P1> and <P2>.
  //! <R1> is the radius of the section passing through <P1>
  //! and <R2> the radius of the section passing through <P2>.
  Standard_EXPORT GC_MakeConicalSurface(const gp_Pnt& P1, const gp_Pnt& P2, const Standard_Real R1, const Standard_Real R2);
  
  //! Returns the constructed cone.
  //! Exceptions
  //! StdFail_NotDone if no cone is constructed.
  Standard_EXPORT  const  Handle(Geom_ConicalSurface)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom_ConicalSurface)& Operator()  const;
Standard_EXPORT operator Handle_Geom_ConicalSurface() const;




protected:





private:



  Handle(Geom_ConicalSurface) TheCone;


};







#endif // _GC_MakeConicalSurface_HeaderFile
