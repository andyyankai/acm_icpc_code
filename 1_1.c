#include <stdio.h>
#include <math.h>

int main() {
	printf("1. %d\n", 1+2);
	printf("2. %d\n", 1.1+2);
	printf("3. %.8f\n", 1.1+2.2);
	printf("4. %.8f\n", 1.1+2.2);

	printf("5. %d\n", 8/5);
	printf("6. %.8f\n", 8/5);
	printf("7. %.8f\n", 8/5.0);
	printf("8. %.8f\n", 8.0/5);
	printf("9. %.8f\n", 8.0/5.0);
	printf("10. %.1f\n", 8.0/5.0);

	printf("11. %.5f\n", sqrt(3));

	printf("12. %.8f\n", 1+2*sqrt(3)/(5-0.1));

	printf("13. %.8f\n", 5-0.1);

	printf("14. %.d\n", 5-(int)0.1);
	printf("15. %.d\n", (float)5-(int)0.1);
	printf("16. %.8f\n", (float)5-(int)0.1);
	printf("17. %.8f\n", 5-(0.1));
	printf("18. %.d\n", 5-(0.1));

	return 0;
}