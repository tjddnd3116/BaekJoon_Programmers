#include <iostream>
#include <string>


using namespace std;

bool repeatedSubstringPattern(string s)
{
	string tmp = s + s;

	if (tmp.substr(1, tmp.size() - 2).find(s) == string::npos)
		return false;
	return true;
}

int main(void)
{
	cout << "example 1" << endl;
	cout << repeatedSubstringPattern("abab") << endl;;
	cout << "example 2" << endl;
	cout << repeatedSubstringPattern("aba") << endl;;
	cout << "example 3" << endl;
	cout << repeatedSubstringPattern("abcabcabcabc") << endl;;
}
