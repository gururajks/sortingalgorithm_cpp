#include "AppMain.h"

int main() 
{
  char line[100];
  int count = 0;
  int numberArray[10000];
  ifstream istream;
  istream.open("C:/Users/gururajks/Documents/Visual Studio 2010/QuickSort.txt");
  if(istream.is_open())
  {
	while(!istream.eof())
	{
	  istream>>line;
	  numberArray[count] = (int) line;
	  count++;
	}
  }

  SortingAlgorithms::BubbleSort *bubbleSort = new SortingAlgorithms::BubbleSort(numberArray, count);
  bubbleSort->implementSort();

  istream.close();

 
  system("pause");
  return 0;

}