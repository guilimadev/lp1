#include <iostream>
#include <sstream>

int main(void){
	
	std::string line;
	getline(std::cin, line);
	std::cout << ">>Line = \"" << line << "\"\n";

	int M[3][3];

	std::istringstream iss(line);

	for( int i (0u); i < n; ++i){
		std::cout << "[ ";
		for(int j (0u) ; j < n ; ++j){
			iss >> M[i][j];
			std::cout << M[i][j] << " ";
		}
		std::cout << " ]";
	}

	return 0;
}