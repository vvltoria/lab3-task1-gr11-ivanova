#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool isPowerOfFive(int num) {
		if (num < 1) {
				return false;
		}
		while (num % 5 == 0) {
				num /= 5;
		}
		return num == 1;
}

void printPowersOfFive(int arr[], int n) {
		printf("Числа, являющиеся степенями пяти:\n");
		for (int i = 0; i < n; i++) {
				if (isPowerOfFive(arr[i])) {
						printf("%d ", arr[i]);
				}
		}
		printf("\n");
}

int main(int argc, char *argv[]) {
		if (argc != 2) {
				printf("Использование: %s <размер массива>\n", argv[0]);
				return 1;
		}

		int n = atoi(argv[1]);
		if (n <= 0) {
				printf("Некорректный размер массива!\n");
				return 1;
		}

		int arr[n];
		srand(time(NULL));

		printf("Исходный массив:\n");
		for (int i = 0; i < n; i++) {
				arr[i] = rand() % 1000 + 1;
				printf("%d ", arr[i]);
		}
		printf("\n");

		printPowersOfFive(arr, n);

		return 0;
}
