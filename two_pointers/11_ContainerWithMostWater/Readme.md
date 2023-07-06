# Problem
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

--- 

길이 n의 정수 배열 높이가 주어지고, 째 선의 두 끝점이 (i, 0)과 (i, height[i])가 되도록 그려진 수직선이 n개 있습니다.

x축과 함께 용기를 형성하는 두 개의 선이 가장 많은 물을 담고 있는 용기를 찾습니다.

용기에 저장할 수 있는 최대 물의 양을 반환합니다.

용기를 기울여서는 안 된다는 점에 유의합니다.


# Example
Example 1:


	Input: height = [1,8,6,2,5,4,8,3,7]
	Output: 49
	Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

	Input: height = [1,1]
	Output: 1
 

# Constraints

	n == height.length
	2 <= n <= 105
	0 <= height[i] <= 104

# Topics
	Array, Two Pointers, Greedy

# Solution
- left, right 포인터를 선언하여
- min(arr[left], arr[right]) * (right - left)를 계속 구한다. 해당 값이 두 벽으로 둘러쌓인 면적과 같다.
- 이 면적이 언제 가장 큰지 구해야 한다.
- 1회 순회마다 left, right중에 작은 값의 포인터를 이동시켜준다.
- 큰 값은 계속 유지해야 다음 구하는 면적이 커질수 있기 때문
- left < right 조건일때 반복하여 면적의 최대 크기를 구한다.
- 조건을 탈출하면 지금까지 구한 최대 면적을 리턴한다.
