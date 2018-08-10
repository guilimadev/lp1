#include <iostream>


int count_digit(int num, int digit){
	int sum = 0;

	while(num > 0)
    {
        if((num % 10) == digit){
          sum++;
          std::cout << "Somando : " << num << std::endl;          
  		}
          num /= 10;
    }
	return sum;

}

int main(void){
	
	int x(0);
	int lowerbound;
	int upperbound;


	std::cin >> x;
	std::cin >> lowerbound;
	std::cin >> upperbound;
	

	int qtd = 0;

	for(auto i(lowerbound+1) ; i < upperbound; i++){
		
		qtd += count_digit(i,x);
	}

	std::cout << "Quantidade de repeticoes: " << qtd << std::endl;
}