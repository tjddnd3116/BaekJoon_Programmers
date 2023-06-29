# Problem
There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).

Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.

---

2D 평면의 원점인 (0, 0) 위치에서 시작하는 로봇이 있습니다. 로봇의 이동 순서가 주어졌을 때, 이 로봇이 이동을 완료한 후 (0, 0)에 도착하는지 판단합니다.

로봇의 이동 시퀀스를 나타내는 문자열 moves가 주어지며, moves[i]는 로봇의 째 이동을 나타냅니다. 유효한 이동은 'R'(오른쪽), 'L'(왼쪽), 'U'(위쪽), 'D'(아래쪽)입니다.

로봇이 모든 이동을 완료한 후 원점으로 돌아오면 참을 반환하고, 그렇지 않으면 거짓을 반환합니다.

참고: 로봇이 '향하는' 방향은 상관없습니다. 'R'은 항상 로봇을 오른쪽으로 한 번 움직이게 하고, 'L'은 항상 왼쪽으로 움직이게 하는 등입니다. 또한 로봇의 이동 크기가 각 이동마다 동일하다고 가정합니다.

# Example

Example 1:

	Input: moves = "UD"
	Output: true
	Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
Example 2:

	Input: moves = "LL"
	Output: false
	Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.
	 

# Constraints

	1 <= moves.length <= 2 * 104
	moves only contains the characters 'U', 'D', 'L' and 'R'.

# Topics
	String, Simulation

# Solution
- U, D 의 개수가 같으면서, L, R의 개수가 같은지 확인
