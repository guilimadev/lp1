#include <iostream>
#include <iterator>
#include <algorithm>  

void print(int *first, int *last){

	

	auto sz = std::distance(first, last);

	std::cout << "A: [ ";
	for(auto i(0u); i < sz; ++i){
		std::cout << first[i] << " ";
	}
	std::cout << "]" << std::endl;


}


int main(void){
	
	int A[] = {2, 5, 6, 5, 6, 7};

	print(std::begin(A), std::end(A));

	std::sort(std::begin(A), std::end(A));

	print(std::begin(A), std::end(A));

	std::reverse(std::begin(A), std::end(A));

	print(std::begin(A), std::end(A));



	return 0;

}