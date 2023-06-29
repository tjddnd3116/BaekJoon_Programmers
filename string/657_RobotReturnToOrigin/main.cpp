#include <iostream>
#include <string>

using namespace std;

bool judgeCircle(string moves) {
	int row = 0;
	int col = 0;

	for (auto& let : moves)
	{
		if (let == 'U')
			col--;
		else if (let == 'D')
			col++;
		else if (let == 'L')
			row--;
		else if (let == 'R')
			row++;
	}
	return (!row && !col);
}

int main(void) {
	cout << judgeCircle("UD") << endl;

	cout << judgeCircle("LL") << endl;
}
