#ifndef RANGE_LIB_H
#define RANGE_LIB_H

#include <iterator> // distance
#include <algorithm> // swap

std::string print( const int* first, const int* last );

namespace ir {
    using value_type = int;

    /// Negate all integer values in [first;last).
    void negate( value_type * first, value_type * last );
    /*!
     * \brief Copy the content of the range `[first;last)` to another range beginning at `d_first`.
     * \return An iterator point to the element past the last element copied from the source range.
     */
    value_type * copy( const value_type * , const value_type *, value_type* );

    /// Returns a pointer to the first occurrency of the smallest element the range.
    const value_type * min( const value_type *, const value_type * );

    /// Reverse the order of the elements in range `[first;last)`.
    void reverse( value_type *first, value_type*last );

    /// Multiplies the vector content for a scalar
    void scalar_multiplication ( int *first, int *last, int scalar);

    /// Returns an escalar result of the multiplication on 2 vectors   
    int dot_product ( const int * a_first , const int * a_last , const int * b_first );

    /// Compacts the vector puting the non null and positives number in the beginning of the vector 
    /// and returns a pointer to the new last valid position on the vector
    int * compact (int * first, int * last);

    int * copy ( const int * first , const int * last , int * d_first );

    void unique ( int * first , int * last );
}
#endif
