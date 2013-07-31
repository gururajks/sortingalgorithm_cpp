// This is the main DLL file.

#include "stdafx.h"

#include "SortingAlgorithms.h"

namespace SortingAlgorithms
{

  BubbleSort::BubbleSort(int data[], int size)
  {
	_dataArray = data;
	this->_size = size;
  }	

  void BubbleSort::implementSort() 
  {
	for(int i = 0; i < _size; i++) 
	{
	  std::cout<<_dataArray[i]<<endl;
	}
  }



}




