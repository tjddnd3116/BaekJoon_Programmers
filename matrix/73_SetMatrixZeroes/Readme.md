# 73. Set Matrix Zeroes

# Problem
Medium
12K
634
Companies
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

---

m x n 정수 행렬이 주어졌을 때 원소가 0이면 행과 열 전체를 0으로 설정합니다.

반드시 제자리에서 해야 합니다.
 

# Example

Example 1:

	Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
	Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:

	Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
	Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

# Constraints

	m == matrix.length
	n == matrix[0].length
	1 <= m, n <= 200
	-231 <= matrix[i][j] <= 231 - 1

# Topics
	Array, Hash Table, Matrix

# Solution
- matrix의 원소 하나마다 순회하면서 0을 찾으면 해당 행,열의 원소들을 -1로 바꾼다.
- 만약 해당 원소가 0이라면 -1로 바꾸지 않는다.
- -1로 다 바꾼뒤 한번더 모든 matrix의 원소들을 순회하면서 -1을 0으로 바꾼다.

- 원소의 범위가 -2^31 ~ 2^31 -1 까지 이므로 이미 -1이 존재할수 있다.

- 0이 있는 위치를 col, row set에 저장하여 저장된 col ,row를 통해 matrix의 원소들을 0으로 변경?
- O(col * row)의 시간복잡도
