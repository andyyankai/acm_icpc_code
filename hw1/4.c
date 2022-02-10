#include <stdio.h>
#include <math.h>

int main() {
	printf("HW 1_4: sin and cos:\n");
	int n;
	scanf("%d", &n);

	double pi = acos(-1.0);
	double sin_val = sin(n/180.0*pi);
	double cos_val = cos(n/180.0*pi);

	printf("sin %d: %f\n", n, sin_val);
	printf("cos %d: %f\n", n, cos_val);

	return 0;
}