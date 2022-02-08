#include <stdio.h>
#define _USE_MATH_DEFINES // for M_PI
#include <math.h>


int main() {
	printf("1. Sum of two number:\n");
	int a,b;
	scanf("%d%d", &a, &b);
	printf("Sum of %d and %d is %d\n", a, b, a+b);


	printf("2. Surface area of cylinder:\n");
	// const double pi = acos(-1.0);
	double r, h;
	scanf("%lf%lf", &r, &h); // %lf is double, %f is float
	double s = M_PI*r*r*2.0 + 2.0*M_PI*r*h;
	printf("Surface area of cylinder for r=%.3f and h=%.3f is %.3f\n", r, h, s);
	return 0;
}
