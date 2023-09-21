#include <stdio.h>

int recursive_factorial(int n) {
	if (n > 1) {
		return n * recursive_factorial(n - 1);
	}
	else {
		return 1;
	}

}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", recursive_factorial(n));
	return 0;
}
