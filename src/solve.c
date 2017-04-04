#include "solve.h"

double discriminant(int a, int b, int c) {
    return b*b - 4*a*c;
}

int solve(int a, int b, int c) {
    double d = discriminant(a, b, c);
    double x1 = 0, x2 = 0;
    if (a == 0) {
	printf("Not a square equation!");
	return -1;
    }
    if (d > 0.0) {
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	printf("x1 = %f, x2 = %f", x1, x2);
	return 2;
    }
    if (d == 0) {
	x1 = -b/2*a;
	printf("x = %f", x1);
	return 1;
    }
    if (d < 0.0) {
	printf("Only complex roots");
	return 0;
    }
    return -10;
}