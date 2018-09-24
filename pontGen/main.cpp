#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <iterator>
#include <functional>
#include <algorithm>

#include "pontgen.h"

using Compare = bool (*)(const void *, const void *);

/// Deve retornar true se a < b.

bool comp_ints(const void *a, const void *b)

{

    const int * aa = (const int *) a;

    const int * bb = (const int *) b;

    return *aa < *bb;

}





int main()

{

    int A[]{ 5, 7, 9, 2, 3, 4 };

    int size_A = (int) sizeof(A)/sizeof(A[0]);

     std::cout << "A: [ ";

    for (int i = 0; i < size_A; ++i)
    {
        std::cout << A[i] << " ";
    }

    std::cout << "]" << std::endl;
   

    

    int * result_A = (int*) min( std::begin(A), std::end(A), sizeof(int), comp_ints );   



    std::cout << "resultado da busca menor em  A: " << *result_A << std::endl;
    std::cout << "A: [ ";

    for (int i = 0; i < size_A; ++i)
    {
        std::cout << A[i] << " ";
    }

    std::cout << "]" << std::endl;

    reverse(std::begin(A), std::end(A), sizeof(int));

    std::cout << "Revertendo A: [ ";

    for (int i = 0; i < size_A; ++i)
    {
        std::cout << A[i] << " ";
    }


    std::cout << "]" << std::endl;


    /* int COPY[]{0};
    

    copy(std::begin(A), std::end(A), std::begin(COPY), sizeof(int));
     

    std::cout << "Copy: [ ";

    for (int i = 0; i < size_A; ++i)
    {

        std::cout << COPY[i] << " ";
    }

    std::cout << "]" << std::endl;
  */
     





    return 0;

}