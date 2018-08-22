#include <iostream> // cout, endl
#include <iterator> // begin, end
#include <sstream>  // ostringstream
#include <algorithm> // for_each

#include "int_ranges.h"

std::string print( const int* first, const int* last )
{
    std::ostringstream oss;

    oss << "[ ";
    std::for_each(first, last, [&](const int & a){ oss << a << " ";} );
    oss << "]";
    return oss.str();
}

int main (void)
{
    int A[]{1,2,3,4,5,6};
    int B[]{1,2,3,4,5,6};

    std::cout << ">>> A: " << print( std::begin(A), std::end(A) ) << std::endl;
    ir::negate( std::begin(A), std::end(A) );
    std::cout << ">>> A (negate): " << print( std::begin(A), std::end(A) ) << std::endl;

    auto menor = ir::min( std::begin(A), std::end(A) );
    std::cout << ">>> Menor valor de A: " << *menor << std::endl;

    ir::reverse(std::begin(A), std::end(A));
    std::cout << ">>> A (reverse): " << print( std::begin(A), std::end(A) ) << std::endl;

    int scalar = 3;

    ir::scalar_multiplication (std::begin(A), std::end(A), scalar);

    std::cout << ">>> A(multiplicated by scalar " << scalar << ": " << print( std::begin(A), std::end(A) ) << std::endl;

    std::cout << ">>> A: " << print( std::begin(A), std::end(A) ) << std::endl;
    std::cout << ">>> B: " << print( std::begin(B), std::end(B) ) << std::endl;
    int product = ir::dot_product(std::begin(A), std::end(A), std::begin(B));

    std::cout << "Producto escalar de A.B: " << product << std::endl;







    return EXIT_SUCCESS;
}
