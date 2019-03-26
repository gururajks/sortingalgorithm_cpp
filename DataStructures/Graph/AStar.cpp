#include<queue>
#include<vector>

#include <map>
using namespace std;
/*
class Point
{
public:
	Point(int x, int y) : distance(0) {}
	Point(int x, int y, int distance) : x(x), y(y), distance(distance) {}
	int x;
	int y;
	int distance;
};

int h(Point current, Point target)
{
	return (abs(current.x - target.x) + abs(current.y - target.y));
}

class compare
{
public:
	bool operator()(const Point& p1, const Point& p2)
	{
		return p1.distance > p2.distance;
	}
};

void shortestPath(const vector<vector<int>> grid, int srcX, int srcY, int targetX, int targetY)
{
	Point srcP(srcX, srcY, 0);
	Point target(targetX, targetY);
	
	priority_queue<Point, vector<Point>, compare> pq;
	map<Point, int> distance;
	set<Point> visited;
	pq.push(srcP);
	while (!pq.empty())
	{
		Point current = pq.top();
		pq.pop();		
		if (current.x == targetX && current.y == targetY)
		{
			break;
		}
		if (distance[current] < current.distance || visited.count(current)) 
		{
			continue;
		}
		visited.emplace(current);

		//four directions
		//condition about points
		//Left
		Point left(current.x - 1, current.y);
		if (current.x - 1 >= 0)
		{			
			left.distance = current.distance + 1 + h(left, target);
			auto iter = distance.find(left);
			if (iter != distance.end())
			{
				if (left.distance < iter->second)
				{
					iter->second = left.distance;
					pq.emplace(left);
				}
			}
			else
			{
				distance[left] = left.distance;
			}
		}
		//Top
		if (current.y + 1 < grid[current.x].size())
		{
			Point top(current.x, current.y + 1);
			top.distance = current.distance + 1 + h(top, target);
			auto iter = distance.find(top);
			if (iter != distance.end())
			{
				if (top.distance < iter->second)
				{
					iter->second = top.distance;
					pq.emplace(top);
				}
			}
			else
			{
				distance[top] = top.distance;
			}
		}
		
		Point right(current.x + 1, current.y);
		Point bottom(current.x, current.y - 1);
		
		


	}

}
*/