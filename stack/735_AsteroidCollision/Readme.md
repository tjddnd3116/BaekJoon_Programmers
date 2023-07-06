# Problem
We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

---

소행성을 나타내는 정수로 이루어진 소행성 배열이 주어집니다.

각 소행성의 절대값은 크기를 나타내고 부호는 방향을 나타냅니다(양수는 오른쪽, 음수는 왼쪽을 의미). 각 소행성은 같은 속도로 움직입니다.

모든 충돌 후 소행성들의 상태를 구합니다. 두 소행성이 만나면 더 작은 소행성이 폭발합니다. 둘의 크기가 같으면 둘 다 폭발합니다. 같은 방향으로 움직이는 두 소행성은 절대 만나지 않습니다.


# Example
Example 1:

	Input: asteroids = [5,10,-5]
	Output: [5,10]
	Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
Example 2:

	Input: asteroids = [8,-8]
	Output: []
	Explanation: The 8 and -8 collide exploding each other.
Example 3:

	Input: asteroids = [10,2,-5]
	Output: [10]
	Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
 

# Constraints

	2 <= asteroids.length <= 104
	-1000 <= asteroids[i] <= 1000
	asteroids[i] != 0

# Topics
	Array, Stack, Simulation

# Solution
- stack의 특성을 사용하여 stack의 제일 위에 있는 값과 현재의 ast를 문제의 내용에 따라 계산하여 stack을 구현한다.
