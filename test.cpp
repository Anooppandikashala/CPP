#include <limits>
#include<iostream>
#include <sstream>
int  main()
{
	typedef std::numeric_limits< double > dbl;

	double d = 115.00;
	/*std::cout << "Pi: " << d << std::endl;
	std::cout.precision(dbl::digits10);
	std::cout << "Pi: " << d << std::endl;
	
	std::cout.precision(2);
	std::cout << "Pi: " << std::fixed << d << std::endl;
	*/
	std::ostringstream os;
	std::ostringstream s;
	s.precision(2);
	//s.setf(std::ios::fixed);
	s<<d;
	std::cout<<s.str();
	
	
	
}
