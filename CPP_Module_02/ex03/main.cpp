#include <iostream>

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	Point x(2.0f, 4.0f);
	Point y(3.0f, 5.0f);

	std::cout << x.getX() << " " << x.getY() << std::endl;
	std::cout << y.getX() << " " << y.getY() << std::endl;

	//!
	x = y;

	std::cout << x.getX() << " " << x.getY() << std::endl;
	std::cout << y.getX() << " " << y.getY() << std::endl;


	return 0;
}
