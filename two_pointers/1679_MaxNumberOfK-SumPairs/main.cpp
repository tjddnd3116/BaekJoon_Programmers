#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int maxOperations(vector<int>& nums, int k)
{
	int pairCnts = 0;
	int leftPtr = 0;
	int rightPtr = nums.size() - 1;

	sort(nums.begin(), nums.end());
	while (leftPtr < rightPtr)
	{
		if (nums[leftPtr] + nums[rightPtr] == k)
		{
			pairCnts++;
			leftPtr++;
			rightPtr--;
		}
		else if (nums[leftPtr] + nums[rightPtr] < k)
			leftPtr++;
		else
			rightPtr--;
	}
	return pairCnts;
}

int main(void)
{
	{
		vector<int> nums = {1,2,3,4};
		cout << maxOperations(nums, 5) << endl;
	}

	{
		vector<int> nums = {3,1,3,4,3};
		cout << maxOperations(nums, 6) << endl;
	}
}
