# Problem
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

---
두 문자열 s와 t가 주어졌을 때 s가 t의 후속이면 참을 반환하고, 그렇지 않으면 거짓을 반환합니다.

문자열의 시퀀스는 나머지 문자의 상대적 위치를 방해하지 않고 일부 문자(없을 수도 있음)를 삭제하여 원래 문자열에서 형성되는 새로운 문자열입니다. (즉, "ace"는 "abcde"의 시퀀스이지만 "aec"는 그렇지 않습니다.)


# Example
Example 1:

	Input: s = "abc", t = "ahbgdc"
	Output: true
Example 2:

	Input: s = "axc", t = "ahbgdc"
	Output: false
 

# Constraints

	0 <= s.length <= 100
	0 <= t.length <= 104
	s and t consist only of lowercase English letters.
 

# Follow up
	Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?

# Topics
	Two Pointers, String, Dynamic Programming

# Solution
- s가 "abc", t가 "ahbgdc"라면 일단 s의 제일 끝에 있는 'c' 먼저 t의 어디에 있는지 찾는다.
- 'c'가 t의 제일 끝에 있기 때문에 그 다음으로 찾을 b는 "ahbgd" 에서 찾는다.
- 'b'는 t의 3번째에서 찾을수 있고 마지막의 'a'는 ah에서 찾는다.
- 계속 반복하여 찾을 수 있다면 true, 찾지 못한다면 false를 리턴한다.


