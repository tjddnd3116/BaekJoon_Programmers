#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isPossiblePassWord(string& password)
{
	int vowelCnt = 0;
	int consonantCnt = 0;
	for (auto& let : password)
	{
		if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
			vowelCnt++;
		else
			consonantCnt++;
	}
	if (vowelCnt >= 1 && consonantCnt >= 2)
		return true;
	return false;
}

void recurSolution(vector<char>& charSet, int L, string& password, int idx = 0)
{
	if (password.size() == (unsigned long)L && isPossiblePassWord(password))
	{
		cout << password << endl;
		return;
	}
	for (; (unsigned long)idx < charSet.size(); idx++)
	{
		password.push_back(charSet[idx]);
		recurSolution(charSet, L, password, idx + 1);
		password.pop_back();
	}
}

int main(void)
{
	int L, C;
	vector<char> charSet;
	string password;
	cin >> L >> C;

	for (int i = 0; i < C; i++)
	{
		char chr = 0;
		cin >> chr;
		charSet.push_back(chr);
	}
	sort(charSet.begin(), charSet.end());
	recurSolution(charSet, L, password);
	return 0;
}