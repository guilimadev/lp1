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
	std::string times;

	std::string Col[15] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"
	, "K", "L", "M", "N", "O" };

	std::ifstream myfile("databattleship.txt");

	std::getline(myfile, line);
	std::getline(myfile, col);
	std::getline(myfile, times);

	auto n_times = std::stoi (times);
	auto n_cols = std::stoi (col);
	auto n_lines = std::stoi (line);

	srand(time(NULL));

	int rand_line;
	int rand_col;
	int rand_pos;

	for(int t = 0; t < n_times; t++){

	std::cout << n_cols << " " << n_lines << std::endl;


	
	int A[n_lines][n_cols];
	for (int i = 0; i < n_lines; ++i)
	{
		for (int j = 0; j < n_cols; ++j)
		{
			
			A[i][j] = 0;
			
		}
	}

	

	// Implementando 1 Battleship (tamanho 4)

	for (int i = 0; i < 1; ++i)
	{
		rand_line = rand() % n_lines;
		rand_col = rand() % n_cols;
		rand_pos = rand() % 2 + 1;

		std::cout << rand_line << " " << rand_col << " " << rand_pos <<" - Battleship";

		if(rand_pos == 1){
			if(rand_col+3 >= n_cols){
				i--;
				std::cout << " entrada invalida" << std::endl;
			}
			else{
				A[rand_line][rand_col+3] = 4;
				A[rand_line][rand_col+2] = 4; 
				A[rand_line][rand_col+1] = 4; 
				A[rand_line][rand_col] = 4;
				std::cout << std::endl;
			}
		}

		if(rand_pos == 2){
			if(rand_line+3 >= n_lines){
				i--;
				std::cout << " entrada invalida" << std::endl;
			}
			else{
				A[rand_line+3][rand_col] = 4;
				A[rand_line+2][rand_col] = 4; 
				A[rand_line+1][rand_col] = 4; 
				A[rand_line][rand_col] = 4;
				std::cout << std::endl;
			}
		}
		
	}

	// Implementando 2 Cruisers (tamanho 3)

	for (int i = 0; i < 2; ++i)
	{
		rand_line = rand() % n_lines;
		rand_col = rand() % n_cols;
		rand_pos = rand() % 2 + 1;

		std::cout << rand_line << " " << rand_col << " " << rand_pos << " - Cruiser";

		if(rand_pos == 1){
			if(A[rand_line][rand_col] != 0 or A[rand_line-1][rand_col] != 0 or A[rand_line+1][rand_col] != 0  or A[rand_line-1][rand_col-1] != 0 or A[rand_line+1][rand_col-1] != 0 
				or A[rand_line-1][rand_col-2] != 0 or A[rand_line][rand_col-2] != 0 or A[rand_line+1][rand_col-2] != 0 or A[rand_line-1][rand_col+1] != 0
				or A[rand_line+1][rand_col+1] != 0  or A[rand_line-1][rand_col+2] != 0 or A[rand_line][rand_col+2] != 0 or A[rand_line+1][rand_col+2] != 0 ){
				i--;	
				std::cout << " entrada invalida" << std::endl;	
			}
			else if(A[rand_line][rand_col+1] != 0 or A[rand_line][rand_col-1] != 0 or rand_col-1 < 0 or rand_col+1 >= n_cols){
				i--;	
				std::cout << " entrada invalida" << std::endl;	
			}
			else{
				A[rand_line][rand_col] = 3;
				A[rand_line][rand_col-1] = 3;
				A[rand_line][rand_col+1] = 3;
				std::cout << std::endl;
			}
		}
		if (rand_pos == 2)
		{
			if(A[rand_line][rand_col] != 0 or A[rand_line][rand_col-1] != 0 or A[rand_line][rand_col+1] != 0  or A[rand_line-1][rand_col-1] != 0 or A[rand_line-1][rand_col+1] != 0 
				or A[rand_line-2][rand_col-1] != 0 or A[rand_line-2][rand_col] != 0 or A[rand_line-2][rand_col+1] != 0 or A[rand_line+1][rand_col-1] != 0
				or A[rand_line+1][rand_col+1] != 0  or A[rand_line+2][rand_col-1] != 0 or A[rand_line+2][rand_col] != 0 or A[rand_line+2][rand_col+1] != 0 ){
				i--;	
				std::cout << " entrada invalida" << std::endl;	
			}
			else if(A[rand_line+1][rand_col] != 0 or A[rand_line-1][rand_col] != 0 or rand_line-1 < 0 or rand_line+1 >= n_lines){
				i--;	
				std::cout << " entrada invalida" << std::endl;	
			}
			else{
				A[rand_line][rand_col] = 3;
				A[rand_line-1][rand_col] = 3;
				A[rand_line+1][rand_col] = 3;
				std::cout << std::endl;
			}
		}
	}



	// Implementando 3 Destroyers (tamanho 2)

	for (int i = 0; i < 3; ++i)
	{
		rand_line = rand() % n_lines;
		rand_col = rand() % n_cols;
		rand_pos = rand() % 2 + 1;
		
		std::cout << rand_line << " " << rand_col << " " << rand_pos << " - Destroyer";

		if(rand_pos == 2){


			if(A[rand_line][rand_col] != 0 or A[rand_line+1][rand_col] != 0 or A[rand_line-1][rand_col] != 0 or A[rand_line][rand_col+1] != 0 
			   or A[rand_line+1][rand_col+1] != 0 or A[rand_line-1][rand_col+1] != 0 or A[rand_line-1][rand_col+1] != 0
			   or A[rand_line-1][rand_col-1] != 0 or A[rand_line][rand_col-1] != 0 or A[rand_line+1][rand_col-1] != 0
			   or A[rand_line+2][rand_col-1] != 0 or A[rand_line+2][rand_col] != 0 or A[rand_line+2][rand_col+1] != 0
				){
				i--;	
				std::cout << " entrada invalida" << std::endl;		
			}
			else 
			{

				A[rand_line][rand_col] = 2;

				if(rand_line + 1 >= n_lines){
					A[rand_line-1][rand_col] = 2;
				}
				else{
					A[rand_line+1][rand_col] = 2;
				}	
					std::cout << std::endl;
			}
		}
		if(rand_pos == 1){
			if(rand_col+1 >= n_cols){
				i--;
				std::cout << " entrada invalida" << std::endl;	
			}
			else{
			if(A[rand_line][rand_col] != 0 or A[rand_line+1][rand_col] != 0 or A[rand_line][rand_col-1] != 0 or A[rand_line+1][rand_col] != 0 
			   or A[rand_line+1][rand_col+1] != 0 or A[rand_line+1][rand_col-1] != 0 or A[rand_line+1][rand_col-1] != 0
			   or A[rand_line-1][rand_col-1] != 0 or A[rand_line-1][rand_col] != 0 or A[rand_line-1][rand_col+1] != 0
			   or A[rand_line-1][rand_col+2] != 0 or A[rand_line][rand_col+2] != 0 or A[rand_line+1][rand_col+2] != 0
			   ){
				i--;	
				std::cout << " entrada invalida" << std::endl;		
			}
			else 
				{

					A[rand_line][rand_col] = 2;

					if(rand_line + 1 >= n_lines){
						A[rand_line][rand_col-1] = 2;
					}
					else{
						A[rand_line][rand_col+1] = 2;
					}	
						std::cout << std::endl;
				}

			}
		}

		
	} 
 	
	
	// Implementando 4 Submarines (tamanho 1)

	for (int i = 0; i < 4; ++i)
	{
		rand_line = rand() % n_lines;
		rand_col = rand() % n_cols;

		std::cout << rand_line << " " << rand_col << " - Submarine";

		if(A[rand_line][rand_col] != 0 or A[rand_line+1][rand_col] != 0 or A[rand_line-1][rand_col] != 0 or A[rand_line][rand_col-1] != 0
		or A[rand_line][rand_col+1] != 0 or A[rand_line-1][rand_col-1] != 0 or A[rand_line][rand_col+1] != 0 or A[rand_line +1][rand_col-1] != 0
		or A[rand_line+1][rand_col+1] != 0 or A[rand_line-1][rand_col+1] != 0)
		{
			i--;	
			std::cout << " entrada invalida" << std::endl;	
		}
		else{
			A[rand_line][rand_col] = 1;
			std::cout << std::endl;
		}
	}

	std::cout << std::endl;
	
	for(int c = 0; c < n_cols; c++){
		std::cout << "|" << Col[c] << "|";
	}
	std::cout << std::endl;

	for (int i = 0; i < n_lines; ++i)
		{

			for (int j = 0; j < n_cols; ++j)
			{
				std::cout << " " << A[i][j] << " ";
			}
			std::cout << "|" << i + 1  << "|" <<std::endl;
		
		}

		std::cout << std::endl;
	}


	return 0;

}