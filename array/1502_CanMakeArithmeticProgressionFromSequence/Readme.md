# Problem
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

---
 
연속된 두 요소의 차이가 같으면 일련의 숫자를 산술 진행이라고 합니다.

숫자 배열 배열이 주어지면 배열을 산술 진행을 형성하도록 재배열할 수 있으면 참을 반환합니다. 그렇지 않으면 false를 반환합니다.

# Example
Example 1:

	Input: arr = [3,5,1]
	Output: true
	Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
Example 2:

	Input: arr = [1,2,4]
	Output: false
	Explanation: There is no way to reorder the elements to obtain an arithmetic progression.
 

# Constraints

	 2 <= arr.length <= 1000
	 106 <= arr[i] <= 106

# Solution
- 정렬을 한뒤 원소간의 차이가 같은지 확인
