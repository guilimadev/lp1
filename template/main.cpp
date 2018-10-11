#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <iterator>
#include <functional>
#include <algorithm>

using Compare = bool (*)(const void *, const void *);

bool comp_ints(const void * a, const void *b)

{

    const int * aa = (const int *) a;

    const int * bb = (const int *) b;

    return *aa < *bb;

}


template <typename T>
const T * min (	const T * first, const T * last, Compare cmp ){
	const T * menor = first;

	while(first != last){

		if(cmp(first, menor))
		{
			menor = first;
		}

		first++;
	}
	return menor;
}
/*
const void * min ( const void * first , const void * last , size_t size , Compare cmp ){

	byte *A = (byte*) first;
	byte *B = (byte*) last;

	byte *menor = (byte*) first;

	

	while( A < B ){

    	if(cmp ( A , menor ))
    	{
    			std::memcpy(menor, A, size);
    	}

    	 A += size;
    }
   

    return menor;
}
*/


int main()

{

   int A[] {0,1,-6,4,-3,1,23};

   auto result = min(std::begin(A), std::end(A), comp_ints);
   std::cout << "Menor valor de A: " << *result << std::endl;



    return 0;

}