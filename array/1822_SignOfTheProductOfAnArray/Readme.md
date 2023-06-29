# Problem
There is a function signFunc(x) that returns:

1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.

Return signFunc(product).

---

반환하는 함수 signFunc(x)가 있습니다:

x가 양수이면 1. x가 음수이면 -1. x가 0이면 0. 정수 배열 nums가 주어집니다. product를 배열 nums의 모든 값의 곱으로 합니다.

signFunc(product)를 반환합니다.


# Example
Example 1:

	Input: nums = [-1,-2,-3,-4,3,2,1]
	Output: 1
	Explanation: The product of all values in the array is 144, and signFunc(144) = 1

Example 2:

	Input: nums = [1,5,0,2,-3]
	Output: 0
	Explanation: The product of all values in the array is 0, and signFunc(0) = 0
Example 3:

	Input: nums = [-1,1,-1,1,-1]
	Output: -1
	Explanation: The product of all values in the array is -1, and signFunc(-1) = -1
	 
# Constraints

	1 <= nums.length <= 1000
	-100 <= nums[i] <= 100

# Solution
	- 원소 순회하며 num들을 곱한뒤 해당 값이 음수면 -1, 0이면 0, 양수면 1 리턴
	- 그저 원소 순회문제
