# Problem
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

정수 배열 자릿수로 표현되는 큰 정수가 주어지며,
각 digits[i]는 정수의 i번째 자릿수입니다.
자릿수는 왼쪽에서 오른쪽 순서로 가장 중요한 것부터 가장 중요하지 않은 것까지 정렬됩니다.
큰 정수에는 선행 0이 포함되지 않습니다.
큰 정수를 1씩 증가시키고 결과 자릿수 배열을 반환합니다.

# Example
Example 1:

	Input: digits = [1,2,3]
	Output: [1,2,4]
	Explanation: The array represents the integer 123.
	Incrementing by one gives 123 + 1 = 124.
	Thus, the result should be [1,2,4].

Example 2:

	Input: digits = [4,3,2,1]
	Output: [4,3,2,2]
	Explanation: The array represents the integer 4321.
	Incrementing by one gives 4321 + 1 = 4322.
	Thus, the result should be [4,3,2,2].

Example 3:

	Input: digits = [9]
	Output: [1,0]
	Explanation: The array represents the integer 9.
	Incrementing by one gives 9 + 1 = 10.
	Thus, the result should be [1,0].

# Constraints:
	1 <= digits.length <= 100
	0 <= digits[i] <= 9
	digits does not contain any leading 0's.

# TOPICS:
 - Array, Math

# Solution:
 1. 모든 배열을 순회하여 int형으로 만든뒤 +1 후 다른 배열을 만들어 각 자리수의 숫자를 넣는다.
 	- log(n) * 2, array space가 더 필요하다.
 	- 구현은 쉽게 할 수 있을듯   
 2. 제일 마지막의 배열의 원소를 +1 한뒤 제일 마지막의 원소부터 앞의 원소까지 순회하며 10이 넘으면 자리수를 올려서 배열의 원소를 바꾸어준다.
 	- 더했을때 10이 넘지 않으면 그대로 종료해도 된다.
	- for문을 모두 순회한뒤에 배열의 제일 앞에 1을 넣어준다.
	- for문을 모두 순회했다는 뜻은 제일 앞의 원소가 10이라는 뜻
	- 제일앞의 원소는 for문에서 0으로 변경되었으므로 배열의 제일 앞에 1을 추가
