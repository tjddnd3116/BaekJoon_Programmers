#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printTall(vector<int>& dwarf, unsigned long i, unsigned long j)
{
	for (unsigned long idx = 0; idx < dwarf.size(); idx++)
	{
		if (idx == i || idx == j)
			continue;
		cout << dwarf[idx] << endl;
	}
}

void solution(vector<int>& dwarf, int sum)
{
	for (unsigned long i = 0; i < dwarf.size() - 1; i++)
	{
		for (unsigned long j = i + 1; j < dwarf.size(); j++)
		{
			if (sum - dwarf[i] - dwarf[j] == 100)
			{
				printTall(dwarf, i, j);
				return;
			}
		}
	}
}

int main(void)
{
	vector<int> dwarf;
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		int tall = 0;
		cin >> tall;
		sum += tall;
		dwarf.push_back(tall);
	}
	sort(dwarf.begin(), dwarf.end());
	solution(dwarf, sum);
	return 0;
}