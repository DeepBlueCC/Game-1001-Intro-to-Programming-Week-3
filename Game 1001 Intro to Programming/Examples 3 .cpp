#include <iostream>

int main()
{
	int x1, x2;
	double y1, y2;

	x1 = 1;
	y1 = 1.5;
	x2 = static_cast<int>(2.6);		// (int)2.6 or int(2.6)
	y2 = static_cast<double>(2);	// (double)2 or double(2)

	std::cout << x1 + y1 + x2 + y2 << std::endl;
	
	std::cout << 5.0 / 2 << std::endl;

	return 0;
}