#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void collision(vector<int>& astStack, int ast)
{
	if (astStack.size() && astStack.back() > 0 && ast < 0)
	{
		if (abs(astStack.back()) > abs(ast))
			return;
		else if (abs(astStack.back()) < abs(ast))
		{
			astStack.pop_back();
			collision(astStack, ast);
		}
		else
			astStack.pop_back();
	}
	else
		astStack.push_back(ast);
}

vector<int> asteroidCollision(vector<int>& asteroids) {
	vector<int> astStack;

	for (auto& ast : asteroids)
	{
		if (astStack.empty() || astStack.back() < 0 || astStack.back() * ast > 0)
		{
			astStack.push_back(ast);
			continue;
		}
		collision(astStack, ast);
	}
	return {astStack.begin(), astStack.end()};
}

int main(void)
{
	{
		vector<int> asteroids = {5, 10, -5};
		vector<int> afterCollision = asteroidCollision(asteroids);
		for (auto& ast : afterCollision)
			cout << ast << " ";
		cout << endl;
	}

	{
		vector<int> asteroids = {8, -8};
		vector<int> afterCollision = asteroidCollision(asteroids);
		for (auto& ast : afterCollision)
			cout << ast << " ";
		cout << endl;
	}

	{
		vector<int> asteroids = {10, 2, -5};
		vector<int> afterCollision = asteroidCollision(asteroids);
		for (auto& ast : afterCollision)
			cout << ast << " ";
		cout << endl;
	}

	{
		vector<int> asteroids = {-2, -1, 1, 2};
		vector<int> afterCollision = asteroidCollision(asteroids);
		for (auto& ast : afterCollision)
			cout << ast << " ";
		cout << endl;
	}

	{
		vector<int> asteroids = {-2, -2, 1, -2};
		vector<int> afterCollision = asteroidCollision(asteroids);
		for (auto& ast : afterCollision)
			cout << ast << " ";
		cout << endl;
	}

	return 0;
}
