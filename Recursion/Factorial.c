#include <stdio.h>
int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}
int main() {
	printf("!5 = %d",factorial(5));
	return 0;
}
