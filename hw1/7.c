#include <stdio.h>
#include <math.h>

int main() {
	printf("HW 1_7: year:\n");
    int n;
    scanf("%d",&n);

    if(n%400==0||(n%4==0&&n%100!=0))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}

