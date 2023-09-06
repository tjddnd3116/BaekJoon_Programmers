#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair<int, int> getHeartPos(vector<string>& board)
{
	for (int i = 0; i < (int)board.size(); i++)
	{
		for (int j = 0; j < (int)board[i].size(); j++)
		{
			if (board[i][j] == '*')
				return {i + 1, j};
		}
	}
	return {0, 0};
}

int getLength(vector<string>& board, pair<int, int> pos, int row, int col)
{
	int len = 0;

	while (1)
	{
		pos.first += row;
		pos.second += col;
		if (pos.first < 0 || pos.first >= (int)board.size() || pos.second < 0 || pos.second >= (int)board.size() || board[pos.first][pos.second] == '_')
			return len;
		len++;
	}
}

int main(void)
{
	int N;
	cin >> N;

	vector<string> board;
	vector<int> bodySize(5, 0);
	for (int i = 0; i < N; i++)
	{
		string row;
		cin >> row;
		board.push_back(row);
	}
	pair<int, int> heartPos = getHeartPos(board);
	cout << heartPos.first + 1 << " " << heartPos.second + 1<< endl;
	bodySize[0] = getLength(board, heartPos, 0, -1);
	bodySize[1] = getLength(board, heartPos, 0, 1);
	bodySize[2] = getLength(board, heartPos, 1, 0);
	heartPos.first += bodySize[2];
	heartPos.second--;
	bodySize[3] = getLength(board, heartPos, 1, 0);
	heartPos.second += 2;
	bodySize[4] = getLength(board, heartPos, 1, 0);
	for (auto& size : bodySize)
		cout << size << " ";
}