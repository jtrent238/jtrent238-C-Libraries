double getArea(double a, double b, double c, int d) {

	double area;
	
	// Area of Square / Rectangle / Parallelogram
	if (d == 0) {
		area = a * b;
	}
	
	// Area of Triangle
	if (d == 1) {
		area = (1 / 2) * (a * b);
	}
	
	// Area of Trapezoid
	if (d == 2) {
		area = ((1 / 2)(a * b)) * c
	}
	
	// Area of Circle
	if (d == 3) {
		area = (pi()a) * (pi()a)
	}
	
	// Area of Cube / Cuboid
	if (d == 4) {
		area = a * b * c;
	}
	
	// Area of Cylender
	if (d == 5) {
		area = (pi()a) * (pi()a) * b;
	}
	
	// Area of Prism
	if (d == 6) {
		area = a * b;
	}
	
	return area;
	
}