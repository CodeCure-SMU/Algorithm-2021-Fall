// Selection.c
#include <stdio.h>

int main(void) {
	int n, arr[1000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	// Selection Sort
	for (int i = n - 1; i >= 0; i--) {
		int maxIdx = 0;
		for (int j = 1; j <= i; j++) {
			if (arr[maxIdx] < arr[j])
				maxIdx = j;
		}

		int temp = arr[maxIdx];
		arr[maxIdx] = arr[i];
		arr[i] = temp;
	}

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}