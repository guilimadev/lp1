#include <iostream>


int main(void){
	
	int int_0_24(0);
	int int_25_49(0);
	int int_50_74(0);
	int int_75_100(0);
	int total(0);
	int unsigned in;

	std::cout << "Digite um número entre 0 e 100. Para parar digite um número acima de 100" << std::endl;

	while( std::cin >> in ){
		if(in >= 0 and in < 25){
			int_0_24++;
			total++;
		}
		else if(in >= 25 and in < 50){
			int_25_49++;
			total++;
		}
		else if(in >= 50 and in < 75){
			int_50_74++;
			total++;
		}
		else if(in >= 75 and in < 100){
			int_75_100++;
			total++;
		}
		else {
			std::cout << "Valor fora do range! " << std::endl;
			break;
		}
	} 

	float porc1 = ((float)int_0_24 / (float)total) * 100;
	float porc2 = ((float)int_25_49 / (float)total) * 100;
	float porc3 = ((float)int_50_74 / (float)total) * 100;
	float porc4 = ((float)int_75_100 / (float)total) * 100;


	std::cout << "Intervalo [0;25): " << porc1 << "\% do total"<< std::endl;
	std::cout << "Intervalo [25;50): " << porc2 << "\% do total"<< std::endl;
	std::cout << "Intervalo [50;75): " << porc3 << "\% do total"<< std::endl;
	std::cout << "Intervalo [75;100]: " << porc4 << "\% do total"<< std::endl;


}