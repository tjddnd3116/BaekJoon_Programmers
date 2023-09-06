#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool mySortFunc(vector<int>& a, vector<int>& b)
{
	if (a[1] == b[1])
	{
		if (a[2] == b[2])
			return a[3] < b[3];
		return a[2] < b[2];
	}
	return a[1] < b[1];
}

int main(void)
{
	int N, K;
	cin >> N >> K;

	vector<vector<int>> country(N, vector<int>(4, 0));

	for (int i = 0; i < N; i++)
		cin >> country[i][0] >> country[i][1] >> country[i][2] >> country[i][3];
	sort(country.begin(), country.end(), mySortFunc);

	int rank = 1;
	vector<int> preVec(country[0].begin() + 1, country[0].end());

	for (int i = 0; i < N; i++)
	{
		if (preVec != vector<int>(country[i].begin() + 1, country[i].end()))
		{
			rank++;
			preVec = vector<int>(country[i].begin() + 1, country[i].end());
		}
		if (country[i][0] == K)
			break;
	}
	cout << rank << endl;
	return 0;
}