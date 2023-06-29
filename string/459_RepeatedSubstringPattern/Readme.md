# Problem
Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

# Example
Example 1:

	Input: s = "abab"
	Output: true
	Explanation: It is the substring "ab" twice.

Example 2:

	Input: s = "aba"
	Output: false

Example 3:

	Input: s = "abcabcabcabc"
	Output: true
	Explanation: It is the substring "abc" four times or the substring "abcabc" twice.

# solution
- 주어진 s를 합하여 제일앞, 제일 마지막의 단어를 제외한 단어에서 원래의 s가 있는지 확인
- 없으면 false, 있다면 true 리턴
