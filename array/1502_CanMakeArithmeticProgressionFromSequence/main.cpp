#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
	sort(arr.begin(), arr.end());

	int diff = arr[1] - arr[0];

	for (size_t i = 1; i < arr.size(); i++)
	{
		if (arr[i] - arr[i - 1] != diff)
			return false;
	}
	return true;
}

int main(void)
{
	{
		vector<int> arr = {3, 5, 1};
		cout << canMakeArithmeticProgression(arr) << endl;
	}

	{
		vector<int> arr = {1, 2, 4};
		cout << canMakeArithmeticProgression(arr) << endl;
	}
}
