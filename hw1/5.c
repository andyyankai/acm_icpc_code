#include <stdio.h>
#include <math.h>

int main() {
	printf("HW 1_5: discount:\n");
	int n;
	scanf("%d", &n);

	printf("Price: %.2f\n", n*95.0>300.0?95.0*n*0.85:95.0*n);

	int raw_price = n*95;
	if (raw_price < 300) {
		printf("Price: %.2f\n", (float)raw_price);
	} else {
		printf("Price: %.2f\n", (float)raw_price*0.85);
	}
	return 0;
}