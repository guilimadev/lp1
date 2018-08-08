#include <iostream>


int main(void){
	
	int int_0_24(0);
	int int_25_49(0);
	int int_50_74(0);
	int int_75_100(0);
	int unsigned in;

	std::cout << "Digite um número entre 0 e 100. Para parar digite um número acima de 100" << std::endl;

	while( std::cin >> in ){
		if(in >= 0 and in < 25){
			int_0_24++;
		}
		else if(in >= 25 and in < 50){
			int_25_49++;
		}
		else if(in >= 50 and in < 75){
			int_50_74++;
		}
		else if(in >= 75 and in < 100){
			int_75_100++;
		}
		else {
			std::cout << "Valor fora do range! " << std::endl;
			break;
		}
	} 

	std::cout << "Intervalo [0;25): " << int_0_24 << std::endl;
	std::cout << "Intervalo [25;50): " << int_25_49 << std::endl;
	std::cout << "Intervalo [50;75): " << int_50_74 << std::endl;
	std::cout << "Intervalo [75;100]: " << int_75_100 << std::endl;


}