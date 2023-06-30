# Problem
Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

---

정사각형 행렬 매트가 주어지면 행렬 대각선의 합을 반환합니다.

주 대각선에 있는 모든 요소와 주 대각선의 일부가 아닌 보조 대각선에 있는 모든 요소의 합만 포함합니다.
 

# Example

Example 1:


	Input: mat = [[1,2,3],
				  [4,5,6],
				  [7,8,9]]
	Output: 25
	Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
	Notice that element mat[1][1] = 5 is counted only once.
Example 2:

	Input: mat = [[1,1,1,1],
				  [1,1,1,1],
				  [1,1,1,1],
				  [1,1,1,1]]
	Output: 8
Example 3:

	Input: mat = [[5]]
	Output: 5
 

# Constraints

	n == mat.length == mat[i].length
	1 <= n <= 100
	1 <= mat[i][j] <= 100

# Topics
	Array, Matrix

# Solution
- two pointer를 사용하여 제일 위의 row부터 더한다
- left, right는 0과 mat.size()부터 시작하여 row를 더해가면서 left는 한칸 오른쪽으로, right는 한칸 왼쪽으로 포인터를 이동시킨다.
- 만약 left, right가 같은 값이라면 matrix의 제일 중간에 있는 값이기 때문에 한 원소는 빼서 계산한다.
