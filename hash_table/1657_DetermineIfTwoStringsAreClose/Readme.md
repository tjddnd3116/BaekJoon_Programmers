# Problem
Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

---
다음 연산을 사용하여 두 문자열 중 하나를 다른 문자열에서 얻을 수 있는 경우 두 문자열이 가까운 것으로 간주합니다:

연산 1: 기존 문자 두 개를 바꿉니다.
예: ABCDE -> AECDB
연산 2: 한 기존 문자의 모든 항목을 다른 기존 문자로 변환하고 다른 문자에 대해서도 동일한 작업을 수행합니다.
예: aacabb -> bbcbaa(모든 a는 b로, 모든 b는 a로 변환)
두 문자열에 대한 연산을 필요한 횟수만큼 사용할 수 있습니다.

단어1과 단어2라는 두 문자열이 주어졌을 때 단어1과 단어2가 가까우면 참을 반환하고 그렇지 않으면 거짓을 반환합니다.
 
# Example

Example 1:

	Input: word1 = "abc", word2 = "bca"
	Output: true
	Explanation: You can attain word2 from word1 in 2 operations.
	Apply Operation 1: "abc" -> "acb"
	Apply Operation 1: "acb" -> "bca"
Example 2:

	Input: word1 = "a", word2 = "aa"
	Output: false
	Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

	Input: word1 = "cabbba", word2 = "abbccc"
	Output: true
	Explanation: You can attain word2 from word1 in 3 operations.
	Apply Operation 1: "cabbba" -> "caabbb"
	Apply Operation 2: "caabbb" -> "baaccc"
	Apply Operation 2: "baaccc" -> "abbccc"
 

# Constraints

	1 <= word1.length, word2.length <= 105
	word1 and word2 contain only lowercase English letters.

# Topics
	Hash Table, String, Sotring

# Solution
- 두 단어를 정렬하여 연속된 단어의 길이의 개수를 저장한다.
- ex) word1 = "cabbba" word2 = "abbccc"
- 두 단어를 정렬하면 "aabbbc", "abbccc" 가 나오고
- word1은 연속된 단어의 길이가 1인 개수가 1, 2인개수가 1, 3인 개수가 1이고
- word2는 연속된 단어의 길이가 1인 개수가 1, 2인개수가 1, 3앤 개수가 1이므로
- 두 단어는 가까운 단어라고 할 수 있다.
