#include <ios>
#include <iostream>
#include <string>

using namespace std;

int maxVowels(string s, int k) {
	int maxVowelsCnt = 0;
	int tmpVowelsCnt = 0;
	int leftPtr = 0;
	int rightPtr = 0;

	for (;rightPtr < k; rightPtr++)
	{
		maxVowelsCnt += string("aeiou").find(s[rightPtr]) != string::npos ? 1 : 0;
	}

	tmpVowelsCnt = maxVowelsCnt;
	while ((size_t)rightPtr < s.size())
	{
		tmpVowelsCnt += string("aeiou").find(s[rightPtr]) != string::npos ? 1 : 0;
		rightPtr++;
		tmpVowelsCnt += string("aeiou").find(s[leftPtr]) != string::npos ? -1 : 0;
		leftPtr++;
		if (tmpVowelsCnt > maxVowelsCnt)
			maxVowelsCnt = tmpVowelsCnt;
	}
	return maxVowelsCnt;
}


int main(void)
{
	cout << maxVowels("abciiidef", 3) << endl;

	cout << maxVowels("aeiou", 2) << endl;

	cout << maxVowels("leetcode", 3) << endl;
}
