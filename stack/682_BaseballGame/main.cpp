#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int sumPoints(stack<int>& stkPoints)
{
	int ret = 0;

	while (stkPoints.size())
	{
		ret += stkPoints.top();
		stkPoints.pop();
	}
	return ret;
}

int calPoints(vector<string>& operations)
{
	stack<int> stk;

	for (auto& operation : operations)
	{
		if (operation == "+")
		{
			int top = stk.top();
			int newTop = top;

			stk.pop();
			newTop += stk.top();
			stk.push(top);
			stk.push(newTop);
		}
		else if (operation == "D")
			stk.push(2 * stk.top());
		else if (operation == "C")
			stk.pop();
		else
			stk.push(stoi(operation));
	}
	return sumPoints(stk);
}

int main(void)
{
	{
		vector<string> ops = {"5", "2", "C", "D", "+"};
		cout << calPoints(ops) << endl;
	}

	{
		vector<string> ops = {"5", "-2", "4", "C", "D", "9", "+", "+"};
		cout << calPoints(ops) << endl;
	}

	{
		vector<string> ops = {"1", "C"};
		cout << calPoints(ops) << endl;
	}
}
