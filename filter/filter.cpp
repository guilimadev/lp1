#include <iostream>
#include <iterator>
#include <algorithm>  
#include <string>
#include <sstream>

void print(int *first, int *last){

	

	auto sz = std::distance(first, last);

	
	for(auto i(0u); i < sz; ++i){
		std::cout << first[i] << " ";
	}



}

int * filter (int * first, int * last){

}

#define MAX_LEN 100

int main(void){
	
	int A[MAX_LEN]; 
	short n_cases(0);
	short length(0);

	std::string line;

	// Quantidade de casos de testes

	std::getline (std::cin, line);
	n_cases = std::stoi (line);

	// Carregar cada caso de teste

	for(auto ct(0); ct < n_cases ; ct++){
		// Ler o comprimento dos dados do caso teste
		std::getline (std::cin, line);
		length = std::stoi (line);

		// Ler os dados
		std::getline (std::cin, line);
		std::istringstream iss (line);

		for(auto num(0); num < length; ++num){
			iss >> A[num];
		}

		// auto new_last = filter (std::begin(A), std::end(A)+length);
	
		print(std::begin(A), std::begin(A)+length);
		std::cout << std::endl;
	}


	/* = {2, 5, 6, 5, 6, 7};

	print(std::begin(A), std::end(A));

	std::sort(std::begin(A), std::end(A));

	print(std::begin(A), std::end(A));

	std::reverse(std::begin(A), std::end(A));

	print(std::begin(A), std::end(A));*/



	return 0;

}