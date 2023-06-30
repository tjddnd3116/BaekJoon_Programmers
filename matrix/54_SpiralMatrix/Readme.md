# Problem

Given an m x n matrix, return all elements of the matrix in spiral order.
 
---

m x n 행렬이 주어지면 행렬의 모든 요소를 나선형 순서로 반환합니다.

# Example
Example 1:


	Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
	Output: [1,2,3,6,9,8,7,4,5]
Example 2:


	Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
	Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 
# Constraints:

	m == matrix.length
	n == matrix[i].length
	1 <= m, n <= 10
	-100 <= matrix[i][j] <= 100

# Topics
	Array, Matrix, Simulation

# Solution
- 규칙을 발견, 3 x 3 이면 R, D, L ,U 순으로 2, 2, 2, 1, 1 움직임
- 4 x 4이면 3, 2, 3, 1, 2 번 움직임
- 총 몇번 움직일지 이미 계산할 수 있음

- 규칙을 사용하지 않는다면? R로 계속 이동하다가 matrix 범위에 벗어나면 D로 이동해야함
- 그럼 마지막의 원소는 어떻게 파악? (가로크기/2, 세로 크기/2) 가 마지막 원소의 위치일듯?
- (가로크기/2, 세로 크기/2)가 마지막 원소의 위치가 아닐때도 있음 ex) [[6,9,7]]
- 순회를 가로크기 * 세로크기만큼만 해야할듯

- 2번째 방법을 사용하여 풀자
