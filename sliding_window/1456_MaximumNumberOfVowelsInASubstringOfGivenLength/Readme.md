# Problem
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

---

문자열 s와 정수 k가 주어졌을 때, 길이가 k인 s의 모든 부분 문자열에서 모음 글자의 최대 개수를 반환합니다.

영어의 모음 문자는 'a', 'e', 'i', 'o', 'u'입니다.
 

# Example

Example 1:

	Input: s = "abciiidef", k = 3
	Output: 3
	Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

	Input: s = "aeiou", k = 2
	Output: 2
	Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

	Input: s = "leetcode", k = 3
	Output: 2
	Explanation: "lee", "eet" and "ode" contain 2 vowels.
 

# Constraints

	1 <= s.length <= 105
	s consists of lowercase English letters.
	1 <= k <= s.length

# Topics
	String, Sliding Window

# Solution
- 0번째 인덱스부터 k번째의 인덱스에서 모음의 개수를 먼저 구한다.
- left, right 포인터를 이동시키면서 추가, 삭제되는 문자가 모음인지 확인하여 원래 가지고 있던 모음의 개수에서 빼고 더한다.
- 순회하면서 모음의 최대 개수를 최신화 시켜준다.
