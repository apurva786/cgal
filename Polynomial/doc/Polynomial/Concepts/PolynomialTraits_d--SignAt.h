
/*!
\ingroup PkgPolynomialConcepts
\cgalconcept

This `AdaptableFunctor` returns the sign of a 
`PolynomialTraits_d::Polynomial_d` \f$ p\f$ at given Cartesian point represented 
as an iterator range. 

This functor is well defined if `PolynomialTraits_d::Innermost_coefficient_type` is 
`RealEmbeddable`. 

\refines ::AdaptableFunctor 
\refines ::CopyConstructible 
\refines ::DefaultConstructible 

\sa  \ref ::Polynomial_d 
\sa  \ref ::PolynomialTraits_d 

*/

class PolynomialTraits_d::SignAt {
public:

/// \name Types 
/// @{

/*! 

*/ 
typedef CGAL::Sign result_type; 

/// @} 

/// \name Operations 
/// @{

/*! 

Returns the sign of \f$ p\f$ at the given Cartesian point, where \f$ begin\f$ is referring 
to the innermost variable. 
\pre (end-begin == `PolynomialTraits_d::d`) 
\pre `std::iterator_traits< InputIterator >::value_type` is `ExplicitInteroperable` with `PolynomialTraits_d::Innermost_coefficient_type`. 

*/ 
template <class InputIterator> 
result_type operator()(PolynomialTraits_d::Polynomial_d p, 
InputIterator begin, 
InputIterator end ); 

/// @}

}; /* end PolynomialTraits_d::SignAt */

