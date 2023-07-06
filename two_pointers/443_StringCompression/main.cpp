#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char>& chars)
{
	char curChar = chars[0];
	int curCharCnt = 0;
	string compressedChar = "";

	for (auto& let : chars)
	{
		if (curChar != let)
		{
			compressedChar += curChar;
			compressedChar += curCharCnt != 1 ? to_string(curCharCnt) : "";
			curChar = let;
			curCharCnt = 0;
		}
		curCharCnt++;
	}
	compressedChar += curChar;
	compressedChar += curCharCnt != 1 ? to_string(curCharCnt) : "";
	chars = vector<char>(compressedChar.begin(), compressedChar.end());
	return chars.size();
}

int main(void)
{
	{
		vector<char> chars = {'a','a','b','b','c','c','c'};
		cout << compress(chars) << endl;
	}

	{
		vector<char> chars = {'a'};
		cout << compress(chars) << endl;
	}

	{
		vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
		cout << compress(chars) << endl;
	}
}
