#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#define N 5

#define n 6

int main(void) {

	int rot[N][n];

	srand(time(NULL));

	printf("$ a\n");

	for (int m = 0; m < N; m++) {

		for (int i = 0; i < n; i++) {

			rot[m][i] = rand() % 45 + 1;

		}

		for (int j = n; j > 0; j-- ) {

			for (int i = j - 2; i >= 0; i--) {

				while (rot[m][j - 1] == rot[m][i]) {

					rot[m][i] = rand() % 45 + 1;

				}

			}

		}

		for (int j = n; j > 0; j--) {

			for (int i = j - 2; i >= 0; i--) {

				while (rot[m][j - 1] == rot[m][i]) {

					rot[m][i] = rand() % 45 + 1;

				}

			}

		}

		for (int j = n; j > 0; j--) {

			for (int i = j - 2; i >= 0; i--) {

				while (rot[m][j - 1] == rot[m][i]) {

					rot[m][i] = rand() % 45 + 1;

				}

			}

		}

		for (int j = 0; j < n; j++) {

			for (int i = n - 1, tmp = 0; i > 0; i--) {

				if (rot[m][i] < rot[m][i - 1]) {

					tmp = rot[m][i];

					rot[m][i] = rot[m][i - 1];

					rot[m][i - 1] = tmp;

				}

			}

		}

		printf("%d세트 : ", m + 1);

		for (int i = 0; i < n - 1; i++) {

			printf("%d, ", rot[m][i]);

		}

		printf("%d\n", rot[m][n-1]);

	}

	return 0;

}
