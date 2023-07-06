# Problem
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

 
---

n개의 요소로 구성된 정수 배열 n과 정수 k가 주어집니다.

최대 평균값을 갖는 길이가 k와 같은 연속적인 하위 배열을 찾아 이 값을 반환합니다. 계산 오차가 10-5 미만인 모든 답이 허용됩니다.


# Example

Example 1:

	Input: nums = [1,12,-5,-6,50,3], k = 4
	Output: 12.75000
	Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

	Input: nums = [5], k = 1
	Output: 5.00000
 

# Constraints

	n == nums.length
	1 <= k <= n <= 105
	-104 <= nums[i] <= 104

# Topics
	Array, Sliding Window

# Solution
- 2개의 포인터를 사용하지만 포인터의 범위를 고정시켜 값을 구한다.
- 순회 할때마다 두 포인터 모두 이동시켜준다.
