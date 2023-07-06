#include <iostream>
#include <map>
#include <vector>

using namespace std;

int equalPairs(vector<vector<int>>& grid) {
	map<vector<int>, int> colMap;
	int pairCnt = 0;

	for (size_t colIdx = 0; colIdx < grid[0].size(); colIdx++)
	{
		vector<int> col;
		for(auto& row : grid)
			col.push_back(row[colIdx]);
		colMap[col]++;
	}

	for (auto& row : grid)
	{
		auto mapIter = colMap.find(row);
		if (mapIter != colMap.end())
			pairCnt += mapIter->second;
	}
	return pairCnt;
}

int main(void)
{
	{
		vector<vector<int>> grid = {{3,2,1}, {1,7,6}, {2,7,7}};
		cout << equalPairs(grid) << endl;
	}

	{
		vector<vector<int>> grid = {{3,1,2,2}, {1,4,4,5}, {2,4,2,2}, {2,4,2,2}};
		cout << equalPairs(grid) << endl;
	}

	{
		vector<vector<int>> grid = {{3,1,2,2}, {1,4,4,4}, {2,4,2,2}, {2,5,2,2}};
		cout << equalPairs(grid) << endl;
	}
	return 0;
}
