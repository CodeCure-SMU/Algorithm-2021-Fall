// BinarySearch_Example.cpp
#include <iostream>

using namespace std;

// arr에서 target의 위치 반환, 만약 없다면 -1 반환
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

// upper bound
int BinarySearch3(int arr[], int size, int target) {
	int left = -1, right = size;
	while (left + 1 < right) {
		int mid = (left + right) / 2;
		if (arr[mid] <= target)
			left = mid;
		else
			right = mid;
	}

	return right;
}

int main(void) {
	int n, arr[1000];
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int target;
	cin >> target;

	cout << BinarySearch1(arr, n, target) << endl;
	cout << BinarySearch2(arr, n, target) << endl;
	cout << BinarySearch3(arr, n, target) << endl;

	return 0;
}