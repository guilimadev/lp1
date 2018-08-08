#include <iostream>


int main(void){
	
	int negativos (0) ;
	int x;

	for(int i(0); i < 5; i++){
		std::cout << "Digite um número: " << std::endl;
		std::cin >> x;

		if(x < 0){
			negativos++;
		}
	}
	std::cout << "A quantidade de números negativos foi de: " << negativos << std::endl;
	return 0;
}