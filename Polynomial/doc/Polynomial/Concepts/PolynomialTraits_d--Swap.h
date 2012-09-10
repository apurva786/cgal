
/*!
\ingroup PkgPolynomialConcepts
\cgalconcept

This `AdaptableFunctor` swaps two variables of a multivariate polynomial. 

\refines ::AdaptableFunctor 
\refines ::CopyConstructible 
\refines ::DefaultConstructible 

\sa  \ref ::Polynomial_d 
\sa  \ref ::PolynomialTraits_d 

*/

class PolynomialTraits_d::Swap {
public:

/// \name Types 
/// @{

/*! 

*/ 
typedef PolynomialTraits_d::Polynomial_d result_type; 

/// @} 

/// \name Operations 
/// @{

/*! 
Returns polynomial \f$ p\f$ with interchanged variables \f$ x_i\f$,\f$ x_j\f$. 
\pre \f$ 0 \leq i < d\f$. 
\pre \f$ 0 \leq j < d\f$. 

*/ 
result_type operator()(PolynomialTraits_d::Polynomial_d p, 
int i, int j); 

/// @}

}; /* end PolynomialTraits_d::Swap */

