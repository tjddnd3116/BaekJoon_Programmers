# Problem
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

---

이진 배열 n과 정수 k가 주어졌을 때, 최대 k개의 0을 뒤집을 수 있다면 배열에서 연속된 1의 최대 개수를 반환합니다.

 

# Example
Example 1:

	Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
	Output: 6
	Explanation: [1,1,1,0,0,1,1,1,1,1,1]
	Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

	Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
	Output: 10
	Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
	Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 

# Constraints

	1 <= nums.length <= 105
	nums[i] is either 0 or 1.
	0 <= k <= nums.length

# Topics
	Array, Binary Search Sliding Window, Prefix Sum

# Solution
- 처음에 leftPtr는 0 번째 인덱스부터 rightPtr를 하나씩 증가시켜 두 포인터 사이의 0의 개수를 구한다.
- 0의 개수가 k보다 많다면 leftPtr를 두 포인터 사이의 0의 개수와 k의 개수가 같을때 까지 이동시킨다.
- 0의 개수가 k와 같다면 지금까지 구한 최대 길이를 비교하여 최대길이를 최신화 시킨다.
- 0의 개수가 k보다 적다면 rightPtr를 이동시켜 포인터 사이의 길이를 늘린다.
