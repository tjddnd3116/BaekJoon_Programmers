#include <iostream>
#include <string>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums)
{
	for (auto left = nums.begin(), right = nums.begin(); right != nums.end(); right++)
	{
		while (left != nums.end() && *left != 0)
			left++;
		if (left <= right && *right != 0)
		{
			*left = *right;
			*right = 0;
		}
	}
}

int main(void)
{
	vector<int> nums1 = {0, 1, 0, 3, 12};
	moveZeroes(nums1);
	for (auto& num : nums1)
		cout << num << " ";
	cout << endl;

	vector<int> nums2 = {0};
	moveZeroes(nums2);
	for (auto& num : nums2)
		cout << num << " ";
	cout << endl;
}
