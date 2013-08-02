
#include "AppMain.h"

#include "../SortingAlgorithms/SortingAlgorithms.h"

int main() 
{
  char line[100];
  int count = 0;
  int *numberArray = new int[10000];
  ifstream istream;
  istream.open("C:/Users/gururajks/Documents/Visual Studio 2010/QuickSort.txt");
  if(istream.is_open())
  {
	while(!istream.eof())
	{
	  istream>>line;
	  numberArray[count] = atoi(line);
	  count++;
	}
  }

  SortingAlgorithms::SelectionSort *insertSort = new SortingAlgorithms::SelectionSort(numberArray, count);
  SortingAlgorithms::Sort *sortedArray = insertSort;
  sortedArray->implementSort();
  int* fullySortedArray = sortedArray->getSortedData();
  for(int i = 0 ; i < count; i++) {
	cout<<fullySortedArray[i]<<endl;
  }

  istream.close();

  return 0;

}