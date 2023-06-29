# Problem
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

---
로마 숫자는 일곱 가지 기호로 표시됩니다: I, V, X, L, C, D, M입니다.

기호 값
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
예를 들어, 2는 로마 숫자로 II로 표기되며, 두 개를 더한 것입니다. 12는 XII로 표기되며, 간단히 X + II입니다. 숫자 27은 XXVII로 표기되며, 이는 XX + V + II입니다.

로마 숫자는 일반적으로 왼쪽에서 오른쪽으로 가장 큰 것부터 가장 작은 것까지 적습니다. 그러나 4의 숫자는 IIII가 아닙니다. 대신 숫자 4는 IV로 표기됩니다. 1이 5 앞에 오기 때문에 빼면 4가 되기 때문입니다. 숫자 9도 같은 원리가 적용되어 IX로 표기됩니다. 뺄셈이 사용되는 경우는 6가지가 있습니다:

I를 V(5)와 X(10) 앞에 놓아 4와 9를 만들 수 있습니다.
X는 L(50)과 C(100) 앞에 놓아 40과 90을 만들 수 있습니다.
C는 D(500)와 M(1000) 앞에 배치하여 400과 900을 만들 수 있습니다.
로마 숫자가 주어지면 정수로 변환합니다.

# Example
Example 1:

	Input: s = "III"
	Output: 3
	Explanation: III = 3.
Example 2:

	Input: s = "LVIII"
	Output: 58
	Explanation: L = 50, V= 5, III = 3.
Example 3:

	Input: s = "MCMXCIV"
	Output: 1994
	Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

# Constraints

	1 <= s.length <= 15
	s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
	It is guaranteed that s is a valid roman numeral in the range [1, 3999].

# Topics
	Hash Table, Math, String

# Solution
- 모든 symbol이 저장된 map을 만들어 string을 순회하면서 해당되는 symbol의 value를 더한다.
