#include<iostream>
#include<iomanip>
#include <ctime> 

int main()
{
	std::string equals;
	equals.assign(80, '=');
	std::cout << std::endl << equals << std::endl;
	std::cout << "Total: " << equals.length() << std::endl;


	unsigned seed = time(0);
	srand(seed);	// initialize the random num generator
	std::cout << rand() << std::endl;	
	std::cout << rand() << std::endl;

	int max = 10;
	int num;
	num = rand() % max + 1;
	std::cout << num << std::endl;
	num = rand() % max + 1;
	std::cout << num << std::endl;
	return 0;
}