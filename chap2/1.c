#include <stdio.h>
#include <math.h>

int main() {

	printf("2.1.1 loop:\n");
	int N;
	scanf("%d", &N);
	printf("Loop %d times.\n", N);

	for(int i=0; i<N; ++i) {
		printf("%d\n", i);
	}


	printf("2.1.2 aabb:\n");
	for (int a=1; a<=9; ++a) {
		for (int b=0; b<=9; ++b) {
			int aabb = a*1100+b*11;
			int ab = floor(sqrt(aabb)+0.5);
			if (ab*ab == aabb) {
				printf("%d\n", aabb);
			}
		}
	}

	printf("2.1.3 aabb:\n");
	for (int x=1;;++x) {
		int curr = x*x;
		if (curr > 9999) break;
		if (curr < 1000) continue;
		int p1 = curr % 100;
		int p2 = curr / 100;
		if (p1%10 == p1/10 && p2%10 == p2/10) {
			printf("%d\n", curr);
		}
	}

	return 0;
}