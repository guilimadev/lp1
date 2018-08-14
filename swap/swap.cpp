#include <iostream>

namespace lp1{
	template <typename T>
	void swap(T & a, T & b)
	{
		T temp = a;
		a = b;
		b = temp;
		
	}
}

int main(void){

	float x = 1.45;
	float y = 0.65;

	std::cout << "X : " << x << " Y: " << y << std::endl;
	
	lp1::swap(x, y);
	
	std::cout << "X : " << x << " Y: " << y << std::endl;

	return 0;
}