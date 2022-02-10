#include <stdio.h>
int main() {
	printf("HW 1_3: sum:\n");
	int n;
	scanf("%d", &n);
	printf("Math Result: %d\n", (1+n)*n/2);
	
	int loop_sum=0;
	for(int i=1;i<=n;++i) {
		loop_sum += i;
	}
	printf("Loop Result: %d\n", loop_sum);
	return 0;
}