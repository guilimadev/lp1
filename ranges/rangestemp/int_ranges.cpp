
#include "int_ranges.h"
#include <iostream>
#include <sstream>  // ostringstream

std::string print( const int* first, const int* last )
{
    std::ostringstream oss;

    oss << "[ ";
    std::for_each(first, last, [&](const int & a){ oss << a << " ";} );
    oss << "]";
    return oss.str();
}

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

	int * compact (int * first, int * last){

		auto sz = std::distance(first, last);
		int cont = sz-1;
		int k = 0;
			while(k <= cont){
				for(auto i(0u); i < sz; ++i){
					if(first[i] <= 0 ){
						int cont = i;
						int j = i;
						while(cont < sz){				
							first[j] = first[j+1];			
							cont++;
							j++;
							
						}
						sz--;
									
					}							
				}
				k++;			
			}		
		
		last = &first[sz];

		return last;
	}

	int * copy ( const int * first , const int * last , int * d_first ){
		
		
		while(first != last)
    	{
    		*d_first++ = *first++;
    		
    	}


    	return d_first;
	}


	void unique ( int * first , int * last ){
		auto sz = std::distance(first,last);
		std::sort(first, last);
		auto temp = sz;
		std::cout << sz << std::endl;
		std::cout << ">>>> E:" << print( first, last) << std::endl;


		
		for (int i = 0; i < temp; ++i)
		{
			if(first[i] < first[i+1]){
				std::cout << "Teste" << std::endl;
			}
			else{
				std::cout << "Igual" << std::endl;
				std::swap(first[i+1], first[temp-1]);
				i--;
				sz--;
			}


		}
	
		std::cout << sz << std::endl;

	}
}