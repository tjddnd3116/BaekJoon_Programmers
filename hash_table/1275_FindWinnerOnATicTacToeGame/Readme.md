# Problem
Tic-tac-toe is played by two players A and B on a 3 x 3 grid. The rules of Tic-Tac-Toe are:

Players take turns placing characters into empty squares ' '.
The first player A always places 'X' characters, while the second player B always places 'O' characters.
'X' and 'O' characters are always placed into empty squares, never on filled ones.
The game ends when there are three of the same (non-empty) character filling any row, column, or diagonal.
The game also ends if all squares are non-empty.
No more moves can be played if the game is over.
Given a 2D integer array moves where moves[i] = [rowi, coli] indicates that the ith move will be played on grid[rowi][coli]. return the winner of the game if it exists (A or B). In case the game ends in a draw return "Draw". If there are still movements to play return "Pending".

You can assume that moves is valid (i.e., it follows the rules of Tic-Tac-Toe), the grid is initially empty, and A will play first.
 
---

틱택토는 3 x 3 그리드에서 두 명의 플레이어 A와 B가 플레이합니다. 틱택토의 규칙은 다음과 같습니다:

플레이어는 번갈아 가며 빈 사각형 ' ' 안에 문자를 놓습니다.
첫 번째 플레이어 A는 항상 'X' 문자를 배치하고, 두 번째 플레이어 B는 항상 'O' 문자를 배치합니다.
'X'와 'O' 문자는 항상 빈 사각형에 놓아야 하며, 채워진 사각형에는 절대 놓을 수 없습니다.
행, 열 또는 대각선에 같은(비어 있지 않은) 문자가 세 개가 채워지면 게임이 종료됩니다.
모든 사각형이 비어 있지 않은 경우에도 게임이 종료됩니다.
게임이 끝나면 더 이상 움직일 수 없습니다.
2D 정수 배열 이동이 주어졌을 때 moves[i] = [rowi, coli] 는 n번째 이동이 grid[rowi][coli]에서 플레이됨을 나타냅니다. 게임의 승자가 존재하면(A 또는 B) 반환합니다. 게임이 무승부로 끝나면 "Draw"를 반환합니다. 아직 플레이할 수 있는 이동이 있으면 "Pending"을 반환합니다.

이동이 유효하고(즉, 틱택토의 규칙을 따르는 경우), 그리드가 처음에 비어 있으며, A가 먼저 플레이한다고 가정할 수 있습니다.

# Example
Example 1:

	Input: moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
	Output: "A"
	Explanation: A wins, they always play first.
Example 2:

	Input: moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
	Output: "B"
	Explanation: B wins.
Example 3:

	Input: moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
	Output: "Draw"
	Explanation: The game ends in a draw since there are no moves to make.
 

# Constraints

	1 <= moves.length <= 9
	moves[i].length == 2
	0 <= rowi, coli <= 2
	There are no repeated elements on moves.
	moves follow the rules of tic tac toe.

# Topics
	Array, Hash Table, Matrix, Simulation

# Solution
- 주어진 배열로 X, O표시가 된 matrix를 만든뒤
- 가로, 세로, 대각선을 체크한다.
