
#include "AppMain.h"
#include "../SortingAlgorithms/Utils.h"
#include "../SortingAlgorithms/SortingAlgorithms.h"

int main() 
{
  char line[100];
  int count = 0;
  int *numberArray = new int[10000];
  ifstream istream;
  istream.open("E:/sortingalgorithm_cpp/QuickSort.txt");
  if(istream.is_open())
  {
	while(!istream.eof())
	{
	  istream>>line;
	  numberArray[count] = atoi(line);
	  count++;
	}
  }
  
  utils::Utils clockUtil;
  clockUtil.startStopWatch();
  SortingAlgorithms::Sort *sortedArray = new SortingAlgorithms::SelectionSort(numberArray, count);
  sortedArray->implementSort();
  clockUtil.endStopWatch();
  std::cout << clockUtil.getProcessDuration();
  //int* fullySortedArray = sortedArray->getSortedData();
   
  // for(int i = 0 ; i < count; i++) {
	//cout<<fullySortedArray[i]<<endl;
 // }

  istream.close();

  delete sortedArray;
  return 0;

}