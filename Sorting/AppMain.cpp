
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
	int *numberArray = new int[10000];
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

	utils::Utils clockUtil;
	clockUtil.startStopWatch();
	/*std::unique_ptr<SortingAlgorithms::Sort<int>> sortedArray = std::make_unique<SortingAlgorithms::MergeSort<int>>(numberArray, count);
	sortedArray->implementSort();*/
	SortingAlgorithms::Sort<int>* sortedArray = new SortingAlgorithms::SelectionSort<int>(numberArray, count);
	sortedArray->implementSort();

	std::cout << sortedArray->checkSorted() << std::endl;

	clockUtil.endStopWatch();
	std::cout << clockUtil.getProcessDuration();


	istream.close();
	delete sortedArray;
	//delete[] numberArray;
	
	return 0;

}