#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
	unordered_set<int> colSet;
	unordered_set<int> rowSet;
	bool rowFlag = false;

	for (size_t row = 0; row < matrix.size(); row++)
	{
		for (size_t col = 0; col < matrix[0].size(); col++)
		{
			if (matrix[row][col] == 0)
			{
				colSet.insert(col);
				rowSet.insert(row);
			}
		}
	}

	for (size_t row = 0; row < matrix.size(); row++)
	{
		rowFlag = rowSet.find(row) != rowSet.end();
		for (size_t col = 0; col < matrix[0].size(); col++)
		{
			if (rowFlag)
				matrix[row][col] = 0;
			else if (colSet.find(col) != colSet.end())
				matrix[row][col] = 0;
		}
	}
}

int main(void)
{

}
