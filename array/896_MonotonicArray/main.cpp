#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& nums)
{
	int firstBit = (nums.back() - nums[0]) >> 31;

	for (size_t i = 1; i < nums.size(); i++)
	{
		int diff = nums[i] - nums[i - 1];
		if (diff != 0 && firstBit != (diff >> 31))
			return false;
	}
	return true;
}

int main(void)
{
	{
		vector<int> nums = {1, 2, 2, 3};
		cout << isMonotonic(nums) << endl;
	}

	{
		vector<int> nums = {6, 5, 4, 4};
		cout << isMonotonic(nums) << endl;
	}

	{
		vector<int> nums = {1, 3, 2};
		cout << isMonotonic(nums) << endl;
	}
}
