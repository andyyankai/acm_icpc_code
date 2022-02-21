#include <stdio.h>
#include <time.h>

int main() {

	const int MOD = 1000000;
	printf("2.3.1 sum of factorial:\n");
	int N;
	scanf("%d", &N);

	long long result=0;
	for (int i=0; i<N; ++i) {
		int fact = 1;
		for (int j=i+1; j>0; --j) {
			fact = (fact * j % MOD);
		}
		result = (result + fact) % MOD;
		// if (i==N-1) {
		// 	printf("%d!", i+1);
		// } else {
		// 	printf("%d!+", i+1);
		// }
	}
	printf("=%ld\n", result);
	printf("Time used = %.5fs\n", (double)clock() / CLOCKS_PER_SEC);
	return 0;
}