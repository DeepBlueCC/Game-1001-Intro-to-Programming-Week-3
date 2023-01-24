#include<iostream>
#include<iomanip>

int main()
{
	double a = 3.1415926536;
	double b = 2006.0;
	double c = 1.0e-10;

	std::cout.precision(5);

	std::cout << "default:\n";
	std::cout << a << '\n' << b << '\n' << c << '\n';

	std::cout << '\n';

	std::cout << "fixed:\n" << std::fixed;
	std::cout << a << '\n' << b << '\n' << c << '\n';

	std::cout << '\n';

	std::cout << "scientific:\n" << std::scientific;
	std::cout << a << '\n' << b << '\n' << c << '\n\n';
	std::cout << std::endl;
	
	// Initializing the decimal to a number
	double doubleflt_val = 3.1415926;
	std::cout << "Precision before using iomanip function: \n"
		<< doubleflt_val << "\n\n"; // cout max 6 decimal

	// Using setprecision() to change the value of precision
	std::cout << "The precision: \n";
	std::cout << std::setprecision(3) << doubleflt_val << " when set to 3 \n";
	std::cout << std::setprecision(5) << doubleflt_val << " when set to 5 \n";
	std::cout << std::setprecision(0) << doubleflt_val << " when set to 0 \n\n";
	

	
	// Set field width
	std::cout << "Set field width: \n";
	std::cout << std::setw(10);
	std::cout << 10 << std::endl;
	// Set fill characters
	std::cout << std::setfill('#') << std::setw(10);
	std::cout << "" << std::endl;
	// Set fill characters
	std::cout << std::setfill('#') << std::setw(10);
	std::cout << "HelloHelloHello" << std::endl << std::endl; // What about HelloHelloHello?

	return 0;
}