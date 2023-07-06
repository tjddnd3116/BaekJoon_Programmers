#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height)
{
	int maxWater = 0;
	int leftPtr = 0;
	int rightPtr = height.size() - 1;

	while (leftPtr < rightPtr)
	{
		int tmpWater = min(height[leftPtr], height[rightPtr]) * (rightPtr - leftPtr);
		if (tmpWater >= maxWater)
			maxWater = tmpWater;
		if (height[leftPtr] <= height[rightPtr])
			leftPtr++;
		else
			rightPtr--;
	}
	return maxWater;
}

int main(void)
{
	{
		vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
		cout << maxArea(height) << endl;
	}

	{
		vector<int> height = {1, 1};
		cout << maxArea(height) << endl;
	}
}
