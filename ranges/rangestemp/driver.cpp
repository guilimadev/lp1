#include <iostream> // cout, endl
#include <iterator> // begin, end
#include <sstream>  // ostringstream
#include <algorithm> // for_each

#include "int_ranges.h"


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

    std::cout << "----------------------" << std::endl;
    

    int C[]{-2, -8, 2, 7, -3, 10, 1, 0, -3, 7};
    std::cout << ">>>> Compact function:" << std::endl;

    std::cout << ">>>> C:" << print( std::begin(C), std::end(C) )<< std::endl;

    auto new_last = ir::compact(std::begin(C), std::end(C) );

    std::cout << ">>>> New C:" << print( std::begin(C), new_last )<< std::endl;

    std::cout << "----------------------" << std::endl;

    int D[]{1, 2, 3, 4, 5};
    int COPY[]{0};

    std::cout << ">>>> D:" << print( std::begin(D), std::end(D) )<< std::endl;
    std::cout << ">>>> COPY:" << print( std::begin(COPY), std::end(COPY) )<< std::endl;
   

    auto copy_last = ir::copy(std::begin(D), std::end(D), std::begin(COPY) );


   
    std::cout << ">>>> New COPY:" << print( std::begin(COPY), copy_last )<< std::endl;

    std::cout << "----------------------" << std::endl;

    int E[]{5,4,4,2,3,2,1};
    std::cout << ">>>> E:" << print( std::begin(E), std::end(E) )<< std::endl;

    ir::unique(std::begin(E), std::end(E));
    std::cout << ">>>> E:" << print( std::begin(E), std::end(E) )<< std::endl;


    return EXIT_SUCCESS;
}
