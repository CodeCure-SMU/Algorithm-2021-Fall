// BOJ_10816.cpp
#include <iostream>

#include <algorithm>

using namespace std;

// lower_bound
int BinarySearch2(int arr[], int size, int target) {
	int left = -1, right = size;
	while (left + 1 < right) {
		int mid = (left + right) / 2;
		if (arr[mid] < target)
			left = mid;
		else
			right = mid;
	}

	return right;
}

// upper_bound
int BinarySearch3(int arr[], int size, int target) {
	int left = -1, right = size;
	while (left + 1 < right) {
		int mid = (left + right) / 2;
		if (arr[mid] <= target) // 같을 땐 범위를 오른쪽 범위로
			left = mid;
		else
			right = mid;
	}

	return right;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, arr[500'000];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int target;
		cin >> target;

		int ans = BinarySearch3(arr, n, target) - BinarySearch2(arr, n, target);
		cout << ans << ' ';
	}
	cout << '\n';

	return 0;
}