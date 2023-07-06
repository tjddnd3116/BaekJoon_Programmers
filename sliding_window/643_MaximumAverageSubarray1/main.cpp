#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
	size_t leftPtr = 0;
	size_t rightPtr = k - 1;
	double maxAvg = 0.0;

	for (int i = 0; i < k; i++)
		maxAvg += nums[i];

	double tmpAvg = maxAvg;
	while (rightPtr < nums.size() - 1)
	{
		rightPtr++;
		tmpAvg = tmpAvg - nums[leftPtr] + nums[rightPtr];
		leftPtr++;
		if (tmpAvg > maxAvg)
			maxAvg = tmpAvg;
	}
	return maxAvg / k;
}

int main(void)
{
	{
		vector<int> nums = {1, 12, -5, -6, 50, 3};
		cout << findMaxAverage(nums, 4) << endl;
	}

	{
		vector<int> nums = {5};
		cout << findMaxAverage(nums, 1) << endl;
	}
}
