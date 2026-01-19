


#include "Header.h"
#include "Ellipse.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

class mon_exception_1 : public std::exception
{
public:
	mon_exception_1() {}
	const char* what() const throw() { return "exception 1";  }
};


int intDivEx(int numerator, int denominator) {
	if (denominator == 0)
		throw std::overflow_error("Divide by zero exception");
			return numerator / denominator;
}


void main()
{
	int test;
	
	//statique
	Figure objet;

	objet.GetP_public(objet.point);


	Ellipse objetE;
	objetE.Dessiner();

	objetE.point = 10;

	objetE.getE();

	//dynamique
	Figure* objetdynamique = new Figure;

	objetdynamique = new Ellipse;
	objetdynamique->Dessiner();



	delete objetdynamique;






	/*try
	{
		std::string str("Micro");
		std::string rstr("soft");
		str.append(rstr, 5, 3); // crée exception
		std::cout << str << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Caught " << e.what() << std::endl;
		std::cerr << "Type " << typeid(e).name() << std::endl;
	};*/

	int a, b;
	a = 10;
	b = 0;


	try
	{
		//a = intDivEx(a, b);

		if (b == 0)
		{
			throw mon_exception_1();
		}
			
	}
	catch (std::exception &e)
	{
		std::cerr << "catch " << e.what() << std::endl;
		std::cerr << "Type " << typeid(e).name() << std::endl;
	};

	std::cout << "Hello world \n";

	/*std::string str("c'est un string");
	uint8_t value;

	std::cout << "Hello world \n";
	std::cout << str <<std::endl;
	std::cout.precision(8);
	std::cout << "i =" << 6904.4332;*/

	/*
	std::cout.setf(std::ios::uppercase);
	for (int i = 14; i < 20; i++)
	{
		std::cout << "i =" << std::hex << std::setiosflags(std::ios::left) << std::setw(6)  << i << " COUCOU" << std::setw(16) << str << std::endl;
		std::cout.unsetf(std::ios::uppercase);
	}*/
	


	/*
	//std::cin >> str;
	//std::cout << str << std::endl;
	//std::cin >> value;
	//std::cout << "valeur de value = " << value << std::endl;
	
	std::cout.width(20);
	std::cout << str << "\n";
	std::cout.width(20);
	std::cout.fill('1');
	std::cout << str << "\n";
	std::cout.width(40);
	std::cout.fill('0');
	std::cout << str << "\n";
	*/
}