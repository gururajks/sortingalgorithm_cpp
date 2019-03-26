#include<queue>
#include<vector>
#include <set>
#include <map>
#include "../Data.h"
using namespace std;

class DllExport Point
{
public:
	Point(int x, int y) : x(x), y(y), cost(0) {}
	int x;
	int y;
	int cost;
};

int BFS(vector<vector<int>> grid, int sx, int sy, int tx, int ty)
{
	if (grid.empty()) return 0;
	queue<Point> q;
	Point p(sx, sy);
	q.emplace(p);
	set<pair<int, int>> visited;
	int minCount = INT_MAX;
	while (!q.empty())
	{
		auto frontValue = q.front();
		if (frontValue.x >= 0 && frontValue.x < grid.size() && frontValue.y >= 0 && frontValue.y < grid[frontValue.x].size() 
			&& !visited.count(make_pair(frontValue.x, frontValue.y)))
		{
			frontValue.cost += grid[frontValue.x][frontValue.y];
			if (frontValue.x == tx && frontValue.y == ty)
			{
				minCount = min(frontValue.cost, minCount);
			}
			visited.insert(make_pair(frontValue.x, frontValue.y));
			q.pop();
			q.emplace(frontValue.x + 1, frontValue.y);
			q.emplace(frontValue.x - 1, frontValue.y);
			q.emplace(frontValue.x, frontValue.y + 1);
			q.emplace(frontValue.x, frontValue.y - 1);
		}
		else
		{
			q.pop();
		}
	}
	return minCount;
}