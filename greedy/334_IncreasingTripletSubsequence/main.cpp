#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool increasingTriplet(vector<int>& nums)
{
	vector<int> minVec(nums.size());
	vector<int> maxVec(nums.size());
	minVec[0] = nums[0];
	maxVec[nums.size() - 1] = nums[nums.size() - 1];

	for (size_t i = 1; i < nums.size(); i++)
	{
		minVec[i] = min(minVec[i - 1], nums[i]);
	}

	for (int i = nums.size() - 2; i >= 0; i--)
	{
		maxVec[i] = max(maxVec[i + 1], nums[i]);
	}

	for (size_t i = 1; i < nums.size() - 1; i++)
	{
		if (minVec[i] < nums[i] && nums[i] < maxVec[i])
			return true;
	}
	return false;
}

int main(void)
{
	{
		vector<int> nums = {1,2,3,4,5};
		cout << increasingTriplet(nums) << endl;
	}

	{
		vector<int> nums = {5,4,3,2,1};
		cout << increasingTriplet(nums) << endl;
	}

	{
		vector<int> nums = {2,1,5,0,4,6};
		cout << increasingTriplet(nums) << endl;
	}
}
