
#include "../include/int_ranges.h"
#include <iostream> 

namespace ir
{
	// Negate function implementation ----------------------
    void negate( value_type * first, value_type * last )
    {
        while( first != last )
            *first++ *= -1;
    }


	// Minimum function implementation -------------------
    const value_type * min( const int * first, const value_type * last)
    {
    	auto menor = first;
    	
    		
    	while(first != last ){
    		if(*first < *menor){
    			menor = first;
    		}

    		*first++;
    	}
    	

    	return menor;

    }


    // Reverse function implementation -----------------------
    void reverse( value_type *first, value_type *last )
    {
    	while( (first != last) && (first != --last) )
    	{

    		std::swap( *first, *last);      	
    		*first++;
    		
    	}
    }

     // Scalar multiplation function implementation -----------------------
    void scalar_multiplication ( int *first, int *last, int scalar)
    {
    	while(first != last)
    	{
    		*first++ *= scalar;
    	}
    }

    int dot_product (const int * a_first , const int * a_last , const int * b_first )
    {

    	auto sz = std::distance(a_first, a_last);
    	int product(0);
        int temp(0);
    	for (int i = 0; i < sz; ++i)
    	{
    		temp = a_first[i] * b_first[i];
    		product += temp; 
           
    	}

        return product;

}


}
