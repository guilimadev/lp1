
#include "int_ranges.h"
#include <iostream> // cout, endl



namespace ir
{
    void negate( value_type * first, value_type * last )
    {
        while( first != last )
            *first++ *= -1;
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
