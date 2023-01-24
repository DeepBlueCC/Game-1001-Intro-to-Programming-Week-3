#include <iostream>

int main()
{
	char ch = 'C';

	std::cout << ch << " is stored as " << static_cast<int>(ch) << std::endl;
	std::cout << ch << " is stored as " << (int)ch << std::endl;

	return 0;
}