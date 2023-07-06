#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

map<int, int> getContinuousWordLength(string word) {
	map<int, int> wordLengthMap;
	int tmpLen = 0;
	char curLet = word[0];

	for (auto& let : word)
	{
		if (let != curLet)
		{
			wordLengthMap[tmpLen]++;
			tmpLen = 1;
			curLet = let;
			continue;
		}
		tmpLen++;
	}
	wordLengthMap[tmpLen]++;
	return wordLengthMap;
}

bool checkSameWord(string word1, string word2)
{
	set<char> word1Set(word1.begin(), word1.end());
	set<char> word2Set(word2.begin(), word2.end());
	if (word1Set.size() != word2Set.size())
		return false;
	for (auto word1Iter = word1Set.begin(), word2Iter = word2Set.begin();
			word1Iter != word1Set.end(); word1Iter++, word2Iter++)
	{
		if (*word1Iter != *word2Iter)
			return false;
	}
	return true;
}

bool closeStrings(string word1, string word2) {
	map<int, int> wordLengthMap1;
	map<int, int> wordLengthMap2;

	if (word1.size() != word2.size())
		return false;
	if (!checkSameWord(word1, word2))
		return false;

	sort(word1.begin(), word1.end());
	sort(word2.begin(), word2.end());
	wordLengthMap1 = getContinuousWordLength(word1);
	wordLengthMap2 = getContinuousWordLength(word2);
	if (wordLengthMap1.size() != wordLengthMap2.size())
		return false;

	for (auto word1Iter = wordLengthMap1.begin(), word2Iter = wordLengthMap2.begin();
			word1Iter != wordLengthMap1.end();
			word1Iter++, word2Iter++)
	{
		if (word1Iter->first != word2Iter->first || word1Iter->second != word2Iter->second)
			return false;
	}
	return true;
}

int main(void) {
	cout << closeStrings("abc", "bca") << endl;

	cout << closeStrings("a", "aa") << endl;

	cout << closeStrings("cabbba", "abbccc") << endl;
	return 0;
}
