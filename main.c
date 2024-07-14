#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, d, discriminant;
	double tolerance = 0.001; // Could be a macro, not necessary given program size.

	printf("Enter tolerance (e.g. 0.01): ");
	if (scanf("%lf", &tolerance) != 1) {
		printf("Invalid input!");
		return 1;
	}

	printf("Enter the value for a, b, c and result...\n");

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

	discriminant = (b * b) - (4 * a * c); // Parentheses for clarity.

	printf("Equation: %.2lfx^2 + %.2lfx + %.2lf = 0.00\n", a, b, c);

	printf("Discriminant: %.2lf\n", discriminant);

	double x1, x2;
	if (discriminant > 0.0 + tolerance) { // 0.0 not really necessary.
		x1 = (-b - sqrt(discriminant)) / (2 * a);
		x2 = (-b + sqrt(discriminant)) / (2 * a);
		printf("Solution: (%.2lf, %.2lf)\n", x1, x2);
	} else if ((discriminant < 0.0 + tolerance) && (discriminant > 0.0 - tolerance)){
		x1 = -b / (2 * a);
		printf("Solution: %.2lf\n", x1);
	} else if (discriminant < 0.0 - tolerance) {
		printf("No solution!\n");
	}

	return 0;

}