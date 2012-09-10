
/*!
\ingroup PkgPolynomialConcepts
\cgalconcept

This `AdaptableFunctor` returns whether a 
`PolynomialTraits_d::Polynomial_d` \f$ p\f$ is zero at a given Cartesian point, 
which is represented as an iterator range. 

\refines ::AdaptableFunctor 
\refines ::CopyConstructible 
\refines ::DefaultConstructible 

\sa  \ref ::Polynomial_d 
\sa  \ref ::PolynomialTraits_d 

*/

class PolynomialTraits_d::IsZeroAt {
public:

/// \name Types 
/// @{

/*! 

*/ 
typedef bool result_type; 

/// @} 

/// \name Operations 
/// @{

/*! 

Computes whether \f$ p\f$ is zero at the Cartesian point given by the iterator range, 
where \f$ begin\f$ is referring to the innermost variable. 

\pre (end-begin == `PolynomialTraits_d::d`) 
\pre `std::iterator_traits< InputIterator >::value_type` is `ExplicitInteroperable` with `PolynomialTraits_d::Innermost_coefficient_type`. 

*/ 
template <class InputIterator> 
result_type operator()(PolynomialTraits_d::Polynomial_d p, 
InputIterator begin, 
InputIterator end ); 

/// @}

}; /* end PolynomialTraits_d::IsZeroAt */

