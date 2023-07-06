# Problem
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.

---

정수 배열 num과 정수 k가 주어집니다.

한 번의 연산으로 배열에서 합이 k와 같은 두 개의 숫자를 선택하여 배열에서 제거할 수 있습니다.

배열에서 수행할 수 있는 최대 연산 횟수를 반환합니다.

 

# Example
Example 1:

	Input: nums = [1,2,3,4], k = 5
	Output: 2
	Explanation: Starting with nums = [1,2,3,4]:
	- Remove numbers 1 and 4, then nums = [2,3]
	- Remove numbers 2 and 3, then nums = []
	There are no more pairs that sum up to 5, hence a total of 2 operations.
Example 2:

	Input: nums = [3,1,3,4,3], k = 6
	Output: 1
	Explanation: Starting with nums = [3,1,3,4,3]:
	- Remove the first two 3's, then nums = [1,4,3]
	There are no more pairs that sum up to 6, hence a total of 1 operation.

# Constraints

	1 <= nums.length <= 105
	1 <= nums[i] <= 109
	1 <= k <= 109

# Topics
	Array, Hash Table, Two Pointers, Sorting

# Solution
- 일단 배열을 정렬한다.
- left, right 포인터를 둔다.
- left, right가 가리키는 숫자의 합이 k와 같은지, 적은지 큰지 확인한다.
- 같다면 결과 값의 cnt를 1 증가시키고 left와 right 포인터를 이동시킨다.
- k 보다 작다면 left의 포인터를 이동시킨다. 왜냐면 정렬이 되어있기 때문에 k보다 값이 작으면 left의 포인터를 증가시켜 합했을때 그 다음으로 큰 수를 구할수 있기 때문
- 같은 이유로 k 보다 크다면 right 포인터를 이동시킨다.
- 포인터의 위치가 같거나 left 가 right 포인터보다 커진다면 탈출한다.
- 반복동안의 cnt 개수를 리턴시킨다.
