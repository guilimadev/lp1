#include <iostream>

//fibonacci

int main(void){

	int first = 0;
	int last = 1;
	int sequencia = 0;
	int upperbound = 0;

	std::cin >> upperbound;

	while(sequencia < upperbound){
		sequencia = (first + last);
		first = last;
		last = sequencia;
		std::cout << first << std::endl;
	}

	return 0;


}