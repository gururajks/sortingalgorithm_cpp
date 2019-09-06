
#include "AppMain.h"
#include "../SortingAlgorithms/Utils.h"
#include "../SortingAlgorithms/SortingAlgorithms.h"
#include "../SortingAlgorithms/SortingAlgorithms.cpp"
#include <memory>
#include <ctime>
#include <chrono>
#include "List.h"
#include "Tree.h"
#include "List/CircularList.cpp"
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


#include<string>
#include<iostream>
using namespace std;


 

List<int>* createList(const vector<int>& arrayList)
{
	List<int>* root = nullptr;
	List<int>* head = root;
	for(auto i : arrayList)
	{
		if (!root)
		{
			List<int>* l = new List<int>(i);
			l->next = nullptr;
			root = l;
			continue;
		}
		List<int>* l = new List<int>(i);
		root->next = l;
		root = l;
	}
	return head;
}

void testSorting()
{
	char line[100];
	int count = 0;
	int *numberArray = new int[11000];
	ifstream istream;
	istream.open("D:/sortingalgorithm_cpp/QuickSort.txt");
	if (istream.is_open())
	{
		while (!istream.eof())
		{
			istream >> line;
			numberArray[count] = atoi(line);
			count++;
		}
	}
	int *unArray = new int[8];
	unArray[0] = 4;
	unArray[1] = 3;
	unArray[2] = 10;
	unArray[3] = 6;
	unArray[4] = 12;
	unArray[5] = 32;
	unArray[6] = 442;
	unArray[7] = 24;

	int SIZE_ARRAY = 8;

	utils::Utils clockUtil;
	clockUtil.startStopWatch();
	std::unique_ptr<SortingAlgorithms::Sort<int>> sortedArray = std::make_unique<SortingAlgorithms::MergeSort<int>>(unArray, SIZE_ARRAY);
	sortedArray->implementSort();

	for (int i = 0; i < SIZE_ARRAY; i++)
	{
		auto* sArray = sortedArray->getSortedData();
		std::cout << sArray[i] << std::endl;
	}

	clockUtil.endStopWatch();
	std::cout << clockUtil.getProcessDuration();
	istream.close();
	delete[] unArray;

}



int main()
{
	vector<int> arrayList = { 3 , 4, 5, 6, 7,8 , 9, 10 , 334, 44 };
	List<int>* root = createList(arrayList);
	List<int>* head = root;
	while (head)
	{		
		head = head->next;
		if (!head->next)
		{
			head->next = root;
		}
	}
	
	cout << circularList(root);



	system("pause");
	return 0;

}