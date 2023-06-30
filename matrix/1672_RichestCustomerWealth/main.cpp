#include <iostream>
#include <vector>

using namespace std;

int getCustomerWealth(vector<int>& account)
{
	int totalWealth = 0;

	for (auto& money : account)
		totalWealth += money;

	return totalWealth;
}

int maximumWealth(vector<vector<int>>& accounts) {
	int maxWealth = 0;

	for (auto& account : accounts)
	{
		int tmpWealth = getCustomerWealth(account);
		if (tmpWealth >= maxWealth)
			maxWealth = tmpWealth;
	}
	return maxWealth;
}

int main(void)
{
	{
		vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
		cout << maximumWealth(accounts) << endl;
	}

	{
		vector<vector<int>> accounts = {{1, 5}, {7, 3}, {3, 5}};
		cout << maximumWealth(accounts) << endl;
	}

	{
		vector<vector<int>> accounts = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
		cout << maximumWealth(accounts) << endl;
	}
}
