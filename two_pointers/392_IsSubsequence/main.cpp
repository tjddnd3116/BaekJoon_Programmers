#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string s, string t)
{
	if (s.size() == 0)
		return true;
	if (t.size() == 0)
		return false;
	size_t pos = t.rfind(s.back());
	if (pos == string::npos)
		return false;
	s.pop_back();
	return isSubsequence(s, t.substr(0, pos));
}

int main(void)
{
	cout << isSubsequence("abc", "ahbgdc") << endl;

	cout << isSubsequence("axc", "ahbgdc") << endl;
}
