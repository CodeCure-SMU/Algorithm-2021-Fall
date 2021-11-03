# BOJ_10816.py
import sys

input = sys.stdin.readline

# lower bound
def BinarySearch2(arr: list[int], target: int) -> int:
	left, right = -1, len(arr)
	while (left + 1 < right):
		mid = (left + right) // 2
		if (arr[mid] < target):
			left = mid
		else:
			right = mid

	return right

# upper bound
def BinarySearch3(arr: list[int], target: int) -> int:
	left, right = -1, len(arr)
	while (left + 1 < right):
		mid = (left + right) // 2
		if (arr[mid] <= target):
			left = mid
		else:
			right = mid

	return right

n = int(input())
arr = list(map(int, input().split()))
arr.sort()

m = int(input())
targets = list(map(int, input().split()))
for target in targets:
	ans = BinarySearch3(arr, target) - BinarySearch2(arr, target)
	print(ans, end = ' ')
print()