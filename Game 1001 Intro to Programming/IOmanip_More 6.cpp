#include<iostream>
#include<iomanip>

int main()
{
	// Showpoint
	double a = 30;
	double b = 10000.0;
	double pi = 3.1416;
	std::cout.precision(5);
	std::cout << std::showpoint << a << '\t' << b << '\t' << pi << '\n';
	std::cout << std::noshowpoint << a << '\t' << b << '\t' << pi << '\n';


	const double e = 2.718;
	double price = 18.0;           
	std::cout << std::endl;
	std::cout << std::setw(8) << e << std::endl;
	std::cout << std::left << std::setw(8) << e	<< "*" << std::endl;
	std::cout << std::setprecision(2);
	std::cout << e << std::endl;
	std::cout << std::fixed << e << std::endl;
	std::cout << std::setw(6) << price;

	return 0;
}