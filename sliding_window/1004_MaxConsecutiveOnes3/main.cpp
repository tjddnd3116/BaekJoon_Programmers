#include <iostream>
#include <sys/syslimits.h>
#include <vector>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
	int rightPtr = 0;
	int leftPtr = 0;
	int longestLen = 0;
	int zeroCnt = 0;

	while ((size_t)rightPtr < nums.size())
	{
		if (zeroCnt < k || nums[rightPtr] == 1)
		{
			zeroCnt += nums[rightPtr] == 0 ? 1 : 0;
			rightPtr++;
			longestLen = max(longestLen, rightPtr - leftPtr);
		}
		else
		{
			zeroCnt -= nums[leftPtr] == 0 ? 1 : 0;
			leftPtr++;
		}
	}
	return longestLen;
}

int main(void)
{
	{
		vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
		cout << longestOnes(nums, 2) << endl;
	}

	{
		vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
		cout << longestOnes(nums, 3) << endl;
	}

	{
		vector<int> nums = {0,0,0,1};
		cout << longestOnes(nums, 4) << endl;
	}
}
