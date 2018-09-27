#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <iterator>
#include <functional>
#include <algorithm>
#include "pontgen.h" 

using Compare = bool (*)(const void *, const void *);
using Predicate = bool (*)(const void *);

typedef unsigned char byte;

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

void reverse ( void * first , void * last , size_t size ){

	byte *A = (byte*) first;
	byte *B = (byte*) last;

	while( (A < B) && (A < (B-= size) ) ){
		std::swap( *A, *B);

		A += size;
	}

}

void * copy ( const void * first , const void * last , const void * d_first , size_t size ){

	byte *A = (byte*) first;
	byte *B = (byte*) last;
	byte *D = (byte*) d_first;

	while(A < B){
		*D = *A;
		
		D += size;
		A += size;
	}

	return D;

}

const void * find_if ( const void * first , const void * last , size_t size , Predicate p ){
	
	byte *A = (byte*) first;
	byte *B = (byte*) last;

	while (A < B){
		if(p(A)){
			return A;
		}
		A += size;
	}

	return B;

}
