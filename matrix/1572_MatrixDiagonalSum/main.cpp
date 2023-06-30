#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
	int left = 0;
	int right = mat.size() - 1;
	int sum = 0;

	for (auto& row : mat)
	{
		sum = sum + row[left] + row[right];
		if (left == right)
			sum -= row[left];
		left++;
		right--;
	}
	return sum;
}

int main(void)
{
	{
		vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
		cout << diagonalSum(mat) << endl;
	}

	{
		vector<vector<int>> mat = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
		cout << diagonalSum(mat) << endl;
	}

	{
		vector<vector<int>> mat = {{5}};
		cout << diagonalSum(mat) << endl;
	}
}
