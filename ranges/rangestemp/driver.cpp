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
    int A[]{1,1,1,1,1,1};

    std::cout << ">>> A: " << print( std::begin(A), std::end(A) ) << std::endl;
    ir::negate( std::begin(A), std::end(A) );
    std::cout << ">>> A: " << print( std::begin(A), std::end(A) ) << std::endl;

    int B[]{2,2,2,2,2,2};
    std::cout << ">>> B: " << print( std::begin(B), std::end(B) ) << std::endl;

    std::cout << "Produto escalar A.B : " << ir::dot_product(std::begin(A), std::end(A), std::begin(B)) << std::endl;

    return EXIT_SUCCESS;
}
