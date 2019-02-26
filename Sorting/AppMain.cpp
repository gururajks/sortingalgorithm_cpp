
#include "AppMain.h"
#include "../SortingAlgorithms/Utils.h"
#include "../SortingAlgorithms/SortingAlgorithms.h"
#include "../SortingAlgorithms/SortingAlgorithms.cpp"
#include <memory>
#include <ctime>
#include <chrono>



int main()
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

	int *unArray = new int[5];
	unArray[0] = 4;
	unArray[1] = 3;
	unArray[2] = 10;
	unArray[3] = 6;
	unArray[4] = 2;

	utils::Utils clockUtil;
	clockUtil.startStopWatch();
	std::unique_ptr<SortingAlgorithms::Sort<int>> sortedArray = std::make_unique<SortingAlgorithms::QuickSort<int>>(unArray, 5);
	sortedArray->implementSort();
	
	for (int i = 0; i < 5; i++)
	{
		auto* sArray = sortedArray->getSortedData();
		std::cout << sArray[i]<<std::endl;
	}

	clockUtil.endStopWatch();
	std::cout << clockUtil.getProcessDuration();


	istream.close();
	delete[] unArray;
	return 0;

}