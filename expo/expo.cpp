#include <iostream>
#include "raise.h"

#define MIN_BASE 0
#define MAX_BASE 10
#define MIN_EXPO 0
#define MAX_EXPO 64


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
