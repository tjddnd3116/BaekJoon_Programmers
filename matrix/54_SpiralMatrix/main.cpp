#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
	vector<int> direction = {0, 1, 0, -1, 0};
	vector<int> spiralMat;
	int dirIdx = 0;
	size_t rowIdx = 0;
	size_t colIdx = -1;
	size_t cnt = 0;

	while (1)
	{
		rowIdx += direction[dirIdx];
		colIdx += direction[dirIdx + 1];
		if (rowIdx < 0 || colIdx < 0 ||
				rowIdx >= matrix.size() || colIdx >= matrix[0].size() || matrix[rowIdx][colIdx] == -10000)
		{
			rowIdx -= direction[dirIdx];
			colIdx -= direction[dirIdx + 1];
			dirIdx = (dirIdx + 1) % 4;
			continue;
		}
		spiralMat.push_back(matrix[rowIdx][colIdx]);
		matrix[rowIdx][colIdx] = -10000;
		cnt++;
		if (cnt == matrix.size() * matrix[0].size())
			return spiralMat;
	}
}

int main(void)
{
	{
		vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
		vector<int> spiralMat = spiralOrder(mat);
		for (auto& element : spiralMat)
			cout << element << " ";
		cout << endl;
	}

	{
		vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
		vector<int> spiralMat = spiralOrder(mat);
		for (auto& element : spiralMat)
			cout << element << " ";
		cout << endl;
	}

}
