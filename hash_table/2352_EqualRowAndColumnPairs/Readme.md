# Problem
Given a 0-indexed n x n integer matrix grid, return the number of pairs (ri, cj) such that row ri and column cj are equal.

A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

---

인덱스가 0인 n x n 정수 행렬 그리드가 주어졌을 때, 행 ri와 열 cj가 같은 쌍(ri, cj)의 수를 반환합니다.

행과 열 쌍이 같은 순서로 같은 요소를 포함하는 경우(즉, 같은 배열) 같은 것으로 간주합니다.
 

# Example
Example 1:


	Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
	Output: 1
	Explanation: There is 1 equal row and column pair:
	(Row 2, Column 1): [2,7,7]
Example 2:


	Input: grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
	Output: 3
	Explanation: There are 3 equal row and column pairs:
	(Row 0, Column 0): [3,1,2,2]
	(Row 2, Column 2): [2,4,2,2]
	(Row 3, Column 2): [2,4,2,2]
 

# Constraints

	n == grid.length == grid[i].length
	1 <= n <= 200
	1 <= grid[i][j] <= 105

# Topics
	Array, Hash Table, Matrix, Simulation

# Solution
- map<vector<int>, int>인 hash table에 각 열의 유일한 vector의 개수를 저장한다.
- map에 저장한 열의 배열에 같은 행의 배열이 존재한다면 해당 key(vector)의 value만큼cnt를 증가시킨다.
