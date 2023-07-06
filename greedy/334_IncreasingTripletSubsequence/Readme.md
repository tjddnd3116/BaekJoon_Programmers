# Problem
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

---

정수 배열 nums가 주어졌을 때, i < j < k, nums[i] < nums[j] < nums[k]가 되는 인덱스(i, j, k)의 트리플이 존재하면 참을 반환합니다. 이러한 인덱스가 존재하지 않으면 false를 반환합니다.


# Example
Example 1:

	Input: nums = [1,2,3,4,5]
	Output: true
	Explanation: Any triplet where i < j < k is valid.
Example 2:

	Input: nums = [5,4,3,2,1]
	Output: false
	Explanation: No triplet exists.
Example 3:

	Input: nums = [2,1,5,0,4,6]
	Output: true
	Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
 

# Constraints

	1 <= nums.length <= 5 * 105
	-231 <= nums[i] <= 231 - 1
 

# Follow up
	Could you implement a solution that runs in O(n) time complexity and O(1) space complexity?

# Topics
	Array, Greedy

# Solution
- 어찌 되었든 배열의 모든 원소를 조회해야 하는데 조회하는 횟수를 최대한 적게 하면서 확인 할 수 있는방법을 찾아야함
- 이 문제에서 그리디 알고리즘을 어떻게 적용할 것인가?
- O(n)의 시간복잡도와 O(1)의 공간 복잡도를 이용하여 해결 할 수 있을까?
- 순회를 n번만 하여 답 구하기

- 두개의 min, max vector 변수를 선언하여
- min에는 왼쪽부터 순서대로 배열의 원소중 가장 작은 값의 원소를 넣는다.
- max에는 오른족부터 순서대로 배열의 원소중 가장 큰 값의 원소를 넣는다.
- ex) arr = {2, 1, 5, 0, 4, 6}
- min = {2, 1, 1, 0, 0, 0}
- max = {6, 6, 6, 6, 6, 6}
- 배열의 0번째 원소부터 min[idx] < arr[idx] && arr[idx] < max[idx] 가 있는지 찾는다.
- 있으면 true리턴, 없으면 false를 리턴한다.
- min, max 배열에 값을 넣는 과정은 시간 복잡도 O(n) * 2 = O(n) 이고
- 값을 찾기 위해서 배열을 순회하는 과정은 시간복잡도 O(n) 이다.
- min, max 배열을 선언하는 것은 공간 복잡도 O(n) * 2 = O(n) 이다.
