#include "pch.h"
#include<queue>
#include<vector>
using namespace std;

#include "../DataStructures/Array/SmallestKNumbers.cpp"
#include "../DataStructures/Graph/BFS.cpp"

TEST(DataStructuresTest, SmallestNumbers)
{
	vector<int> nums = { 3, 4, 56, 41, 43, 6, 1, 23 };
	auto smallest = smallestKNumbers(nums, 3);
	EXPECT_EQ(smallest.size(), 3);
	ASSERT_EQ(smallest[0], 1);
	ASSERT_EQ(smallest[1], 3);
	ASSERT_EQ(smallest[2], 4);
}


TEST(DataStructuresTest, BFS)
{
	vector<vector<int>> grid = { 
		{3, 1, 6 },
	    {1, 0, 1 },
	    {1, 2, 2} };
	
	int cost = BFS(grid, 0, 0, 2, 2);
	EXPECT_EQ(cost, 8);
	
}