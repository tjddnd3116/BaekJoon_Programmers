#include <iostream>
#include <vector>

using namespace std;

vector<int> g_comb = {1, 2, 3};

void recurSolution(int num, int& cnt, int sum = 0)
{
	if (sum == num)
	{
		cnt++;
		return;
	}
	if (sum > num)
		return;
	for (auto& comb : g_comb)
	{
		recurSolution(num, cnt, sum + comb);
	}
}

int main(void)
{
	int T = 0;
	cin >> T;
	vector<int> numSet;

	for (int i = 0; i < T; i++)
	{
		int num = 0;
		cin >> num;
		numSet.push_back(num);
	}
	for (auto& num : numSet)
	{
		int cnt = 0;
		recurSolution(num, cnt);
		cout << cnt << endl;
	}
	return 0;
}