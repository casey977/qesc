#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, d, discriminant;

	printf("Enter the value for a, b and c...\n");

	printf("a: ");
	if (scanf("%lf", &a) != 1) {
		printf("Invalid input!");
		return 1;
	}

	printf("b: ");
	if (scanf("%lf", &b) != 1) {
		printf("Invalid input!");
		return 1;
	}

	printf("c: ");
	if (scanf("%lf", &c) != 1) {
		printf("Invalid input!");
		return 1;
	}

	printf("Equals to: ");
	if (scanf("%lf", &d) != 1) {
		printf("Invalid input!");
		return 1;
	}

	c -= d;
	d = 0.0;

	discriminant = (b * b) - (4 * a * c);

	printf("Discriminant: %.2lf\n", discriminant);

	return 0;

}