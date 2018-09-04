#include <iostream>
#include <iterator>
#include <algorithm>  
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <time.h>





int main(void){

	std::string line;
	std::string col;

	std::ifstream myfile("databattleship.txt");

	std::getline(myfile, line);
	std::getline(myfile, col);

	auto n_cols = std::stoi (col);
	auto n_lines = std::stoi (line);

	std::cout << n_cols << " " << n_lines << std::endl;

	
	std::string A[n_lines][n_cols];
	for (int i = 0; i < n_lines; ++i)
	{
		for (int j = 0; j < n_cols; ++j)
		{
			
			A[i][j] = "x";
			
		}
	}

	srand(time(NULL));

	auto rand_line = rand() % n_lines;
	auto rand_col = rand() % n_cols;

	std::cout << rand_line << " " << rand_col << std::endl;

	A[rand_line][rand_col] = "O";

	if(rand_line + 1 >= n_lines){
		A[rand_line-1][rand_col] = "O";
	}
	else{
		A[rand_line+1][rand_col] = "O";
	}
	

	for (int i = 0; i < n_lines; ++i)
	{

		for (int j = 0; j < n_cols; ++j)
		{
			std::cout << A[i][j] << " ";
		}
		std::cout << std::endl;
	
	}


	


	return 0;

}