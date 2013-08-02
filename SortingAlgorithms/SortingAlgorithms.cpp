// This is the main DLL file.

#include "stdafx.h"
#include "SortingAlgorithms.h"

namespace SortingAlgorithms
{
  /********************CLass Bubble Sort ***********************/
  BubbleSort::BubbleSort(int *data, int size)
  {	
	_dataArray = data;
	_size = size;
  }	

  void BubbleSort::implementSort() 
  {
	int noSwap = 0;
	while(noSwap == 0) 
	{
	  noSwap = 1;
	  for(int i = 0 ; i < _size-1; i++) 
	  {
		if(_dataArray[i] > _dataArray[i+1]) 
		{
		  swapArrays(_dataArray[i], _dataArray[i+1]);
		  noSwap = 0;
		}
	  }
	}	
  }

  void BubbleSort::swapArrays(int &left, int &right) 
  {
	int temp = left;
	left = right;
	right = temp;
  }

  /***************************************************************/

  /********************CLass Insertion Sort ***********************/

  InsertionSort::InsertionSort(int *dataArray, int size)
  {
	_dataArray = dataArray;
	_size = size;
  }

  void InsertionSort::implementSort() 
  {
	for(int i = 1; i < _size; i++) 
	{
	  int valueToBeInserted = _dataArray[i];
	  int indexPos = i;
	  while(indexPos > 0 && valueToBeInserted < _dataArray[indexPos-1]) 
	  {
		_dataArray[indexPos] = _dataArray[indexPos-1];
		indexPos = indexPos - 1;
	  }
	  _dataArray[indexPos] = valueToBeInserted;
	}
  }

  /***************************************************************/

}




