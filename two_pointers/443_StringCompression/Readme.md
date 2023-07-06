# Problem
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

---
문자 배열이 주어지면 다음 알고리즘을 사용하여 압축합니다:

빈 문자열 s로 시작하여 연속적으로 반복되는 문자의 각 문자 그룹에 대해 압축합니다:

그룹의 길이가 1이면 해당 문자를 s에 추가합니다.
그렇지 않으면 문자 뒤에 그룹의 길이를 추가합니다.
압축 문자열 s는 별도로 반환하지 않고 입력 문자 배열 문자에 저장해야 합니다. 그룹 길이가 10보다 길면 문자 배열에서 여러 문자로 분할됩니다.

입력 배열 수정을 완료한 후 배열의 새 길이를 반환합니다.

일정한 추가 공간만 사용하는 알고리즘을 작성해야 합니다.

 
# Example

Example 1:

	Input: chars = ["a","a","b","b","c","c","c"]
	Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
	Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
Example 2:

	Input: chars = ["a"]
	Output: Return 1, and the first character of the input array should be: ["a"]
	Explanation: The only group is "a", which remains uncompressed since it's a single character.
Example 3:

	Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
	Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
	Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
 

# Constraints

	1 <= chars.length <= 2000
	chars[i] is a lowercase English letter, uppercase English letter, digit, or symbol.

# Topics
	Two Pointers, String

# Solution
- vector를 순회하면서 char가 바뀌면 바뀌기 전의 char와 count를 세어 새로운 String에 저장한다.
