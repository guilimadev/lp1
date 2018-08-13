#include <iostream>
#include <stdlib.h> 
#include <time.h>


int main(void){

int V[20];
int menor = 0;
int position = 0;

 srand( time( NULL ) );

for(auto i(0u); i < 20; ++i){
	
	V[i] = rand() % 100;
	
	if(i == 0){
		menor = V[i];
		position = i;
	}
	else{
		if(V[i] < menor){
			menor = V[i];
			position = i;
		}
	}
	

	std::cout << V[i] << " ";
}

std::cout << std::endl;
std::cout << "Menor valor: " << menor << std::endl;
std::cout << "Se encontra na posição: " << position << std::endl;
return 0;	
}