#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getResult(const vector<vector<int>>& map, int movesSize)
{
	if (map[1][1] == 1 && map[0][0] == map[1][1] && map[1][1] == map[2][2])
		return "A";
	if (map[1][1] == 1 && map[2][0] == map[1][1] && map[1][1] == map[0][2])
		return "A";
	if (map[1][1] == -1 && map[0][0] == map[1][1] && map[1][1] == map[2][2])
		return "B";
	if (map[1][1] == -1 && map[2][0] == map[1][1] && map[1][1] == map[0][2])
		return "B";
	for (int i = 0; i < 3; i++)
	{
		if (map[i][0] == 1 && map[i][0] == map[i][1] && map[i][1] == map[i][2])
			return "A";
		if (map[i][0] == -1 && map[i][0] == map[i][1] && map[i][1] == map[i][2])
			return "B";
		if (map[0][i] == 1 && map[0][i] == map[1][i] && map[1][i] == map[2][i])
			return "A";
		if (map[0][i] == -1 && map[0][i] == map[1][i] && map[1][i] == map[2][i])
			return "B";
	}
	if (movesSize == 9)
		return "Draw";
	return "Pending";
}

string tictactoe(vector<vector<int>>& moves) {
	vector<vector<int>> map(3, vector<int>(3, 0));
	int player = 1;

	for (auto& move : moves)
	{
		map[move[0]][move[1]] = player;
		player *= -1;
	}
	return getResult(map, moves.size());
}

int main(void)
{
	vector<vector<int>> moves = {{0, 0}, {2, 0}, {1, 1}, {2, 1}, {2, 2}};

	cout << tictactoe(moves);
}
