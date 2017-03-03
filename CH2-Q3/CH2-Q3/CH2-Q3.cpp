#include "stdafx.h"
#include <iostream>


double getDouble()
{
	std::cout << "Enter a double value: ";
	double d_value;
	std::cin >> d_value;
	return d_value;
}

char getOperator()
{
	std::cout << "Enter an operator(+,-,*,/): ";
	char op;
	std::cin >> op;
	return op;
}

int main()
{
	//Get inputs from user
	double d1 = getDouble();
	double d2 = getDouble();
	char user_op = getOperator();

	//Do computation
	if (user_op == '+')
		std::cout << d1 << " + " << d2 << " is " << d1 +d2 << '\n';
	else if (user_op == '-')
		std::cout << d1 << " - " << d2 << " is " << d1 - d2 << '\n';
	else if (user_op == '*')
		std::cout << d1 << " * " << d2 << " is " << d1 * d2 << '\n';
	else if (user_op == '/')
		std::cout << d1 << " / " << d2 << " is " << d1 / d2 << '\n';
	return 0;
}
