#include <iostream>
#include <vector>

using namespace std;

// 2번째 방법
vector<int> plusOne(vector<int>& digits)
{
	bool addFlag = true;

	for (auto rit = digits.rbegin(); rit != digits.rend(); rit++)
	{
		if (addFlag)
		{
			*rit = *rit + 1;
			if (*rit == 10)
				*rit = 0;
			else
				return digits;
		}
	}

	digits.insert(digits.begin(), 1);
	return digits;
}

int main(void)
{
	{
		vector<int> digits = {4, 3, 2, 1};
		auto ret = plusOne(digits);
		for (auto& digit : ret)
			cout << digit << " ";
		cout << endl;
	}

	{
		vector<int> digits = {9};
		auto ret = plusOne(digits);
		for (auto& digit : ret)
			cout << digit << " ";
		cout << endl;
	}

}
