
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

  SortingAlgorithms::BubbleSort *bubbleSort = new SortingAlgorithms::BubbleSort(numberArray, count);
  SortingAlgorithms::Sort *sortedArray = bubbleSort;
  sortedArray->implementSort();

  istream.close();

  return 0;

}