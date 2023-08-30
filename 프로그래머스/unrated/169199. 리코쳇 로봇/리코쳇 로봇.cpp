#include <string>
#include <vector>
#include <queue>
#include <set>
#include <iostream>

using namespace std;

vector<int> dir = {0, 1, 0, -1, 0};

pair<int, int> getMovedPos(vector<string>& board, pair<int, int> movedPos, int idx)
{
    int row = movedPos.first;
    int col = movedPos.second;
    
    while (1)
    {
        if (row + dir[idx] < 0 || row + dir[idx] >= board.size() ||
            col + dir[idx + 1] < 0 || col + dir[idx + 1] >= board[row].size() ||
            board[row + dir[idx]][col + dir[idx + 1]] == 'D')
            break;
        row += dir[idx];
        col += dir[idx + 1];
    }
    return {row, col};
}

int bfs(vector<string>& board, queue<pair<int, int>>& q, pair<int, int>& target, set<pair<int, int>>& isVisited)
{
    int answer = 0;
    
    while (q.size())
    {
        int size = q.size();
        answer++;
        while (size--)
        {
            pair<int, int> curPos = q.front();
            q.pop();
            
            isVisited.insert(curPos);
            for (int i = 0; i < 4; i++)
            {
                pair<int, int> movedPos = getMovedPos(board, curPos, i);
                if (isVisited.count(movedPos))
                    continue;
                if (movedPos == target)
                    return answer;
                q.push(movedPos);
            }
        }
    }
    return -1;
}

int solution(vector<string> board) {
    int answer = 0;
    queue<pair<int, int>> q;
    pair<int, int> target;
    set<pair<int, int>> isVisited;
    
    for (int row = 0; row < board.size(); row++)
    {
        for (int col = 0; col < board[row].size(); col++)
        {
            if (board[row][col] == 'R')
                q.push({row, col});
            else if (board[row][col] == 'G')
                target = {row, col};
        }
    }
    answer = bfs(board, q, target, isVisited);
    return answer;
}