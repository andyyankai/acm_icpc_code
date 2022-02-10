#include <stdio.h>

int main() {
	printf("1. bunny chicken:\n");
	int n,m;
	scanf("%d%d", &n, &m);
	int a, b;

	a = (4*n - m)/2; 
	b = n-a;

	if (m%2==1||a<0||b<0) {
		printf("No answer\n");
	} else {
		printf("%d %d\n", a, b);
	}


	printf("2. Sort three number:\n");
	int x,y,z,t;
	scanf("%d%d%d", &x,&y,&z);

	if (x>y) {
		t=x;
		x=y;
		y=t;
	}
	if (x>z) {
		t=x;
		x=z;
		z=t;
	}
	if (y>z) {
		t=y;
		y=z;
		z=t;
	}
	printf("%d %d %d\n", x,y,z);
	return 0;
}
