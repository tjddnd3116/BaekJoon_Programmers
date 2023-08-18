#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N = 0;
	vector<int> numArr;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		numArr.push_back(num);
	}
	sort(numArr.begin(), numArr.end());
	cout << *numArr.begin() * *numArr.rbegin() << endl;
	return 0;
}