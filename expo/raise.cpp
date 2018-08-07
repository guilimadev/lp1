
// #include "raise.h"



unsigned long long calcExpo (int base, int expo){
	unsigned long long int total(1);
	for(int i(0); i < expo + 1; i++){
		
		if(i == 0){
			std::cout << base <<" elevado a 0 = 1"<< std::endl; 
		} 
		else {
			total *= base;
			std::cout << base << " elevado a " << i << " = " << total << std::endl; 
			
		}
	}
	return total;
}

