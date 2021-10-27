// BOJ_1920.cpp
#include <iostream>

#include <algorithm>

using namespace std;

// arr에서 target의 위치 반환, 만약 없다면 -1을 반환
int BinarySearch1(int arr[], int size, int target) {
	int left = 0, right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}

// arr에서 가장 왼쪽의 target 위치 반환, 만약 없다면 target보다 큰 가장 작은 수의 위치 반환
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

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, arr[100'000];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int target;
		cin >> target;

		// Binary Search 1을 쓸 때
		if (BinarySearch1(arr, n, target) != -1)
			cout << 1;

		// Binary Search 2를 쓸 때
		int idx = BinarySearch2(arr, n, target);
		if (idx < n && arr[idx] == target)
			cout << 1;

		// 모두 공통
		else
			cout << 0;
		cout << '\n';
	}

	return 0;
}