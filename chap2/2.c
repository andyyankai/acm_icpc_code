#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {

	printf("2.2.1 3n+1:\n");
	int n_in;
	scanf("%d", &n_in);
	printf("change for %d\n", n_in);
	long long N = n_in;
	int count = 0;
	while(N > 1) {
		printf("%d\n", N);
		if (N%2 == 0) {
			N = N/2;
		} else {
			N = 3*N+1;
		}
		++count;
	}
	printf("Total change: %d\n", count);

	printf("2.2.2 pi/4\n");

	double sum=0.0;
	for (int i=0;;i++) {
		double curr = 1.0/(i*2.0+1.0);
		if (i%2==0) {
			sum += curr;
		} else {
			sum -= curr;
		}
		
		if (curr < 1e-5) break;
	}

	printf("pi/4 is: %f\n", sum);
	return 0;
}