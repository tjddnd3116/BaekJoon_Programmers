# Problem
You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.

You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:

An integer x.
Record a new score of x.
'+'.
Record a new score that is the sum of the previous two scores.
'D'.
Record a new score that is the double of the previous score.
'C'.
Invalidate the previous score, removing it from the record.
Return the sum of all the scores on the record after applying all the operations.

The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.

---

이상한 규칙이 있는 야구 경기의 점수를 기록 중입니다. 게임을 시작할 때 빈 기록으로 시작합니다.

문자열 연산 목록이 주어지며, 여기서 operations[i]는 레코드에 적용해야 하는 째 연산이며 다음 중 하나입니다:

정수 x.
새로운 점수 x를 기록합니다.
'+'.
이전 두 점수의 합인 새 점수를 기록합니다.
'D'.
이전 점수의 두 배인 새 점수를 기록합니다.
'C'.
이전 점수를 무효화하여 기록에서 제거합니다.
모든 연산을 적용한 후 기록에 있는 모든 점수의 합계를 반환합니다.

테스트 케이스는 답과 모든 중간 계산이 32비트 정수에 맞고 모든 연산이 유효하도록 생성됩니다.

 
# Example

Example 1:

	Input: ops = ["5","2","C","D","+"]
	Output: 30
	Explanation:
	"5" - Add 5 to the record, record is now [5].
	"2" - Add 2 to the record, record is now [5, 2].
	"C" - Invalidate and remove the previous score, record is now [5].
	"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
	"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
	The total sum is 5 + 10 + 15 = 30.
Example 2:

	Input: ops = ["5","-2","4","C","D","9","+","+"]
	Output: 27
	Explanation:
	"5" - Add 5 to the record, record is now [5].
	"-2" - Add -2 to the record, record is now [5, -2].
	"4" - Add 4 to the record, record is now [5, -2, 4].
	"C" - Invalidate and remove the previous score, record is now [5, -2].
	"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
	"9" - Add 9 to the record, record is now [5, -2, -4, 9].
	"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
	"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
	The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
Example 3:

	Input: ops = ["1","C"]
	Output: 0
	Explanation:
	"1" - Add 1 to the record, record is now [1].
	"C" - Invalidate and remove the previous score, record is now [].
	Since the record is empty, the total sum is 0.
 

# Constraints

	1 <= operations.length <= 1000
	operations[i] is "C", "D", "+", or a string representing an integer in the range [-3 * 104, 3 * 104].
	For operation "+", there will always be at least two previous scores on the record.
	For operations "C" and "D", there will always be at least one previous score on the record.

# Topics
	Array, Stack, Simulation

# Solution
- stack을 사용하여 top과 그 아래의 수를 적절히 연산한다.
