#include "stdafx.h"
#include <iostream>
#include "io.h"


int main()
{
	//Have user enter both numbers
	int x = readNumber();
	int y = readNumber();
	int sum = x + y;
	writeAnswer(sum);
	return 0;
}