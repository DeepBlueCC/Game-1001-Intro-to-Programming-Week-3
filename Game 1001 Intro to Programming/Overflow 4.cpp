#include <iostream>

int main()
{
	// signed short: -32767 to 32767
	// unsigned short : 0 to 65535

	short int num = 32767;
	std::cout << num << std::endl;

	num = num + 1;
	std::cout << num << std::endl;

	// What is -32768-1?
	num = num - 1;
	std::cout << num << std::endl;


	return 0;
}