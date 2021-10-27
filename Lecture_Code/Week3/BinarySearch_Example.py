# BinarySearch_Example.py

# arr에서 target의 위치 반환, 만약 없다면 -1을 반환
def BinarySearch1(arr: list[int], target: int) -> int:
	left, right = 0, len(arr) - 1;
	while (left <= right):
		mid = (left + right) // 2;
		if (arr[mid] == target):
			return mid;
		elif (arr[mid] < target):
			left = mid + 1;
		else:
			right = mid - 1;

	return -1;

# arr에서 가장 왼쪽의 target 위치 반환, 만약 없다면 target보다 큰 가장 작은 수의 위치 반환
def BinarySearch2(arr: list[int], target: int) -> int:
	left, right = -1, len(arr);
	while (left + 1 < right):
		mid = (left + right) // 2;
		if (arr[mid] < target):
			left = mid;
		else:
			right = mid;

	return right;

n = int(input())
arr = list(map(int, input().split()))

t = int(input())
while (t > 0):
	target = int(input())
	print(BinarySearch1(arr, target))
	print(BinarySearch2(arr, target))
	t -= 1