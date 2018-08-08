#include <iostream>


int main(void){
	
	
	int qtd;
	int init;

		while (true){

		std::cout << "Entre o valor inicial e a quantidade de inteiros a ser somados" << std::endl;
		std::cin >> init;
		std::cin >> qtd;
		

		int soma(init);

		for(int i(1); i < qtd; i++){
			init++;
			soma += init;
		}

		std::cout << soma << std::endl;
		 if (std::cin.eof()){ 
		 	return 0;
		 }
	}
	return 0;
}