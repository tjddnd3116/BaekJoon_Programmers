# Problem
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

NOTE that you must do this in-place without making a copy of the array.


# Example
Example 1:

	Input: nums = [0,1,0,3,12]
	Output: [1,3,12,0,0]

Example 2:

	Input: nums = [0]
	Output: [0]

# Constraints

	1 <= nums.length <= 104
	-231 <= nums[i] <= 231 - 1

# TOPICS:
	Array, Two Pointers

# solution
- 추가적인 배열을 사용하지 못함
- 한번의 순회로 정렬하는 방법을 찾아야함
- 순회를 하면서 0이면 해당 원소를 삭제하고 push_back으로 0을 추가
- 0이 아니면 배열순회
-> 0, 0, 1 일때 정상적으로 동작하지 않음

- two pointer를 사용해서 풀어야함
- left는 제일 왼쪽에 있는 0을 가르킴
- right가 순회하면서 left보다 오른쪽에 있으면서 0이 아니면 left와의 원소를 바꿈
- left는 그 다음의 제일 왼쪽에 있는 0을 가르킴
반복
