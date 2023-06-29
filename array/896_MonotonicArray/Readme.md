# Problem

An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

--- 
 
배열이 단조롭게 증가하거나 단조롭게 감소하는 경우 단조롭습니다.

배열 nums는 모든 i <= j에 대해 nums[i] <= nums[j]인 경우 단조 증가 배열입니다. 배열 nums는 모든 i <= j에 대해 nums[i] >= nums[j]인 경우 단조 감소합니다.

정수 배열 nums가 주어지면 주어진 배열이 단조롭다면 참을, 그렇지 않으면 거짓을 반환합니다.

# Example
Example 1:

	Input: nums = [1,2,2,3]
	Output: true
Example 2:

	Input: nums = [6,5,4,4]
	Output: true
Example 3:

	Input: nums = [1,3,2]
	Output: false
 

# Constraints:

	1 <= nums.length <= 105
	-105 <= nums[i] <= 105

# Solution
- 배열이 오름차순이나 내림차순으로 정렬되어 있는지 물어보는 문제
- 첫번째, 마지막 원소를 확인하여 내림차순인지 오름차순인지 확인후
- 원소를 순회하면서 맞는지 확인
- 첫번째, 마지막 원소의 차의 값의 int 부호 비트를 구하여 부호비트를 비교해가며 순회
