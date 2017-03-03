#include "stdafx.h"
#include <iostream>
#include "grav.h"
#include "ball_function_declarations.h"


int main()
{
	double t_height = heightTower();

	heightBall(t_height, 0);
	heightBall(t_height, 1);
	heightBall(t_height, 2);
	heightBall(t_height, 3);
	heightBall(t_height, 4);
	heightBall(t_height, 5);

	return 0;
}





