#include <iostream>
#include <vector>

using namespace std;

int arraySign(vector<int>& nums)
{
	int multipleNum = 1;

	for (auto& num : nums)
	{
		if (num == 0)
			return 0;
		else if (num < 0)
			multipleNum *= -1;
	}
	return multipleNum;
}

int main(void)
{
	{
		vector<int> nums = {-1, -2, -3, -4, 3, 2, 1};
		cout << arraySign(nums) << endl;
	}

	{
		vector<int> nums = {1, 5, 0, 2, -3};
		cout << arraySign(nums) << endl;
	}

	{
		vector<int> nums = {-1, 1, -1, 1, -1};
		cout << arraySign(nums) << endl;
	}
}
