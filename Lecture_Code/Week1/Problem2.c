// Problem2.c
#include <stdio.h>

int main(void) {
	int n, arr[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	// Bubble Sort
	for (int i = n - 1; i >= 0; i--) {
		int count = 0;
		for (int j = 0; j < i; j++) {
			count++;
			// Swap
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		printf("%d ", count);
	}
	printf("\n");

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0