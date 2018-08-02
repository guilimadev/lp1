#include <iostream>

#define MIN_BASE 0
#define MAX_BASE 10
#define MIN_EXPO 0
#define MAX_EXPO 64

/*!
	\brief Function that return base powers to expo

*/

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

int main(){
	
	short int base(0);
	short int expo(0);
	

	std::cout << "Entre um valor para base entre [" << MIN_BASE << ";" << MAX_BASE << "]: " << std::endl;
	std::cin >> base;

	std::cout << "Entre um valor para o expoente entre [" << MIN_EXPO << ";" << MAX_EXPO << "]: " << std::endl;
	std::cin >> expo;
	
	if(base < MIN_BASE or base > MAX_BASE or expo < MIN_EXPO or expo > MAX_EXPO){
		std::cout << "Entrada invalida. Tente novamente" << std::endl;
		return 0;
	} 	
	unsigned long long int resultado = calcExpo(base, expo);
	std::cout << "O resultado de " << base << " elevado a "
	<< expo << " é igual a: " << resultado << std::endl;
	

	return 0;
}