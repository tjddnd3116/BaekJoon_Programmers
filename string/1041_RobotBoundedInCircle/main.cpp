#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isRobotBounded(string insturctions) {
	vector<int> direction = {0, 1, 0, -1, 0};
	int dirIdx = 0;
	int row = 0;
	int col = 0;

	for (int i = 0; i < 4; i++)
	{
		for (auto& ins : insturctions)
		{
			if (ins == 'G')
			{
				row += direction[dirIdx];
				col += direction[dirIdx + 1];
			}
			else if (ins == 'L')
				dirIdx = (dirIdx + 1) % 4;
			else if (ins == 'R')
				dirIdx = ((dirIdx - 1) + 4) % 4;
		}
		if (!row && !col)
			return true;
	}
	return false;
}

int main(void)
{
	cout << isRobotBounded("GGLLGG") << endl;
	cout << isRobotBounded("GG") << endl;
	cout << isRobotBounded("GL") << endl;
}
