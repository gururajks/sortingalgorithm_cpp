// This is the main DLL file.

#include "stdafx.h"
#include "SortingAlgorithms.h"

namespace SortingAlgorithms
{
  
  __declspec(dllexport) BubbleSort::BubbleSort(int *data, int size)
  {	
	_dataArray = data;
	_size = size;
  }	

  __declspec(dllexport) void BubbleSort::implementSort() 
  {
	int noSwap = 0;

	
  }




}




