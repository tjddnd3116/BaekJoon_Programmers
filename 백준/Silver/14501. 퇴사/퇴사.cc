#include <iostream>
#include <vector>

using namespace std;

int g_maxPay = 0;

void recurSolution(vector<pair<int, int>>& plan, int sumPay = 0, int idx = 0)
{
	g_maxPay = max(g_maxPay, sumPay);
	for (; (unsigned long)idx < plan.size(); idx++)
	{
		int t = plan[idx].first;
		int p = plan[idx].second;
		if (t + idx > (int)plan.size())
			continue;
		recurSolution(plan, sumPay + p, idx + t);
	}
}

int main(void)
{
	int N = 0;
	cin >> N;
	vector<pair<int, int>> plan;

	for (int i = 0; i < N; i++)
	{
		int t, p;
		cin >> t >> p;
		plan.push_back({t, p});
	}
	recurSolution(plan);
	cout << g_maxPay << endl;
	return 0;
}