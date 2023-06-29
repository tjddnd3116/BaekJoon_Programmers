# Problem
On an infinite plane, a robot initially stands at (0, 0) and faces north. Note that:

The north direction is the positive direction of the y-axis.
The south direction is the negative direction of the y-axis.
The east direction is the positive direction of the x-axis.
The west direction is the negative direction of the x-axis.
The robot can receive one of three instructions:

"G": go straight 1 unit.
"L": turn 90 degrees to the left (i.e., anti-clockwise direction).
"R": turn 90 degrees to the right (i.e., clockwise direction).
The robot performs the instructions given in order, and repeats them forever.

Return true if and only if there exists a circle in the plane such that the robot never leaves the circle.

---

무한 평면에서 로봇은 처음에 (0, 0)에 서 있고 북쪽을 향합니다. 참고하세요:

북쪽 방향은 Y축의 양의 방향입니다.
남쪽 방향은 Y축의 음의 방향입니다.
동쪽 방향은 x축의 양의 방향입니다.
서쪽 방향은 X축의 음의 방향입니다.
로봇은 세 가지 명령 중 하나를 받을 수 있습니다:

"G": 1단위 직진.
"L": 왼쪽으로 90도 회전(즉, 시계 반대 방향).
"R": 오른쪽으로 90도 회전(즉, 시계 방향).
로봇은 주어진 지시를 순서대로 수행하며 계속 반복합니다.

평면에 로봇이 원을 벗어나지 않는 원이 존재하는 경우에만 참을 반환합니다.
 
# Example
Example 1:

	Input: instructions = "GGLLGG"
	Output: true
	Explanation: The robot is initially at (0, 0) facing the north direction.
	"G": move one step. Position: (0, 1). Direction: North.
	"G": move one step. Position: (0, 2). Direction: North.
	"L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: West.
	"L": turn 90 degrees anti-clockwise. Position: (0, 2). Direction: South.
	"G": move one step. Position: (0, 1). Direction: South.
	"G": move one step. Position: (0, 0). Direction: South.
	Repeating the instructions, the robot goes into the cycle: (0, 0) --> (0, 1) --> (0, 2) --> (0, 1) --> (0, 0).
	Based on that, we return true.
Example 2:

	Input: instructions = "GG"
	Output: false
	Explanation: The robot is initially at (0, 0) facing the north direction.
	"G": move one step. Position: (0, 1). Direction: North.
	"G": move one step. Position: (0, 2). Direction: North.
	Repeating the instructions, keeps advancing in the north direction and does not go into cycles.
	Based on that, we return false.
Example 3:

	Input: instructions = "GL"
	Output: true
	Explanation: The robot is initially at (0, 0) facing the north direction.
	"G": move one step. Position: (0, 1). Direction: North.
	"L": turn 90 degrees anti-clockwise. Position: (0, 1). Direction: West.
	"G": move one step. Position: (-1, 1). Direction: West.
	"L": turn 90 degrees anti-clockwise. Position: (-1, 1). Direction: South.
	"G": move one step. Position: (-1, 0). Direction: South.
	"L": turn 90 degrees anti-clockwise. Position: (-1, 0). Direction: East.
	"G": move one step. Position: (0, 0). Direction: East.
	"L": turn 90 degrees anti-clockwise. Position: (0, 0). Direction: North.
	Repeating the instructions, the robot goes into the cycle: (0, 0) --> (0, 1) --> (-1, 1) --> (-1, 0) --> (0, 0).
	Based on that, we return true.

# Constraints

	1 <= instructions.length <= 100
	instructions[i] is 'G', 'L' or, 'R'.

# Topics
	Math, String, Simulation

# Solution
- 1번의 명령이 끝났을때 방향에 맞게 row, col값을 계산한다.
- 총 4번의 명령을 하는중에 row, col이 모두 0이 나온다면 처음 출발한 위치로 돌아올 수 있다.
- 4번의 명령이 끝났는데에도 row, col이 0이 아니라면 절대 처음 출발한 위치로 돌아올 수 없다. 
