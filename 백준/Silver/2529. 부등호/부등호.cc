#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

string g_maxNumStr = "0";
string g_minNumStr = "9999999999";

void recurSolution(vector<char>& bracketArr, vector<int>& isVisited, int preNum, string sumStr, int idx = 0)
{
	if ((unsigned long)idx == bracketArr.size())
	{
		long sum = stol(sumStr);
		if (sum > stol(g_maxNumStr))
			g_maxNumStr = sumStr;
		if (sum < stol(g_minNumStr))
			g_minNumStr = sumStr;
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		if (isVisited[i])
			continue;
		if ((bracketArr[idx] == '>' && preNum > i) || (bracketArr[idx] == '<' && preNum < i))
		{
			isVisited[i] = 1;
			sumStr.push_back('0' + i);
			recurSolution(bracketArr, isVisited, i, sumStr, idx + 1);
			sumStr.pop_back();
			isVisited[i] = 0;
		}
	}
}

int main(void)
{
	int k = 0;
	cin >> k;
	vector<char> bracketArr;
	vector<int> isVisited(10);

	for (int i = 0; i < k; i++)
	{
		char bracket;
		cin >> bracket;
		bracketArr.push_back(bracket);
	}
	for (int i = 0; i < 10; i++)
	{
		isVisited[i] = 1;
		recurSolution(bracketArr, isVisited, i, to_string(i));
		isVisited[i] = 0;
	}
	cout << g_maxNumStr << endl;
	cout << g_minNumStr << endl;
	return 0;
}