#include "hhh.h"
/*double vichn(double a, double b) {
	double n;
	if (a >= b) { n = pow(a - b, 1.0 / 3.0); }
	else {
		if (sin(a * b) != 0) { n = a * a + (a - b) / sin(a * b); }
		else { cout << "Vvedeni nevernie dannie\n"; return; }
	}
	return n;
}
double vichm(double a, double b, double n) {
	double m;
	if (n > b) { m = pow(b, 3.0) + n * a * a; }

	if (n==b){if (cos(a * n) != 0) { m = b*b+tan(n*a); }
	else { cout << "Vvedeni nevernie dannie\n"; return;}}

	if (n < b) {if (b!=0 && sin(a)* sin(a) -cos(n) >= 0) { m = -(n+a)/b + sqrt(sin(a) * sin(a) - cos(n)); }
	else { cout << "Vvedeni nevernie dannie\n"; return; }}
	return m;
}*/
double vichiz(double a, double b) {
	double z;
	if (a >= b) { z = 1-2*sin(b)*cos(a); }
	else { z = sqrt(abs(a*a-b*b)); }
	return z;
}
double vichit(double a, double b, double z) {
	double t=0;
	if (z < b) { t = pow(z+a*a*b, 1.0/3.0); }

	if (z == b) {
		if (z > 0) { t = 1-log10(z)+cos(a*a*b); }
		
	}

	if (z > b) {
		if ( cos(z*a) != 0) { t = 1/ cos(z * a); }
		
	}
	return t;
}

