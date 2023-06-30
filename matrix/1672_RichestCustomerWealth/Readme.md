# Problem
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
 
---

계정[i][j]는 i번째 고객이 j번째 은행에 보유한 금액인 m x n 정수의 격자형 계좌가 주어집니다. 가장 부유한 고객이 보유한 재산을 반환합니다.

고객의 재산은 모든 은행 계좌에 보유한 금액입니다. 가장 부유한 고객은 최대 자산을 보유한 고객입니다.


# Example
Example 1:

	Input: accounts = [[1,2,3],[3,2,1]]
	Output: 6
	Explanation:
	1st customer has wealth = 1 + 2 + 3 = 6
	2nd customer has wealth = 3 + 2 + 1 = 6
	Both customers are considered the richest with a wealth of 6 each, so return 6.
Example 2:

	Input: accounts = [[1,5],[7,3],[3,5]]
	Output: 10
	Explanation: 
	1st customer has wealth = 6
	2nd customer has wealth = 10 
	3rd customer has wealth = 8
	The 2nd customer is the richest with a wealth of 10.
Example 3:

	Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
	Output: 17
 

# Constraints

	m == accounts.length
	n == accounts[i].length
	1 <= m, n <= 50
	1 <= accounts[i][j] <= 100

# Topics
	Array, Matrix

# Solution
- 각각의 계좌를 for문으로 조회하면서 maximum인 total money를 구한다.
