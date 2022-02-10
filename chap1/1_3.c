#include <stdio.h>

int main() {
	int n;
	printf("1. digit reverse:\n");
	scanf("%d", &n);
	printf("%d%d%d\n", n%10, n/10%10, n/100);

	printf("2. digit reverse:\n");
	scanf("%d", &n);
	int m = (n%10)*100 + (n/10%10)*10 + n/100;
	printf("%03d\n", m);

	printf("3. switch var (use temp)\n");
	int x1, x2, temp;
	scanf("%d%d", &x1, &x2);
	temp = x1;
	x1 = x2;
	x2 = temp;
	printf("result: %d %d\n", x1, x2);

	printf("4. switch var (no temp)\n");
	int y1, y2;
	scanf("%d%d", &y1, &y2);
	y1 = y1+y2;
	y2 = y1-y2;
	y1 = y1-y2;
	printf("result: %d %d\n", y1, y2);

	return 0;
}
