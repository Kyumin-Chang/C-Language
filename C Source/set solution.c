#include <stdio.h>

int main() {

	int a[3];

	int b[2];

	int c[6];
	int d = 0;

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 2; i++) {
		scanf_s("%d", &b[i]);
	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 2; j++) {

			c[d] = a[i] + b[j];
			d++;
		}

	}

	int min = c[0];

	for (int i = 1; i < 6; i++) {
		if (min > c[i]) {
			min = c[i];
		}
		else { min = min; }
	}

	printf("%d", min - 50);
	return 0;
}