// SortingAlgorithms.h

#pragma once

#include<iostream>
#include<string>
#include "Data.h";

using namespace std;

namespace SortingAlgorithms {
    
  class Sort 
  {
  protected:
	static const int ARRAY_SIZE = 10000;
	int *_dataArray;
	int _size;
  public:
	

	int* getSortedData() 
	{
	  return _dataArray;
	}



	//Virtual function for sorting , need to be implemented by inheriting classes
	virtual void implementSort() = 0;

  };

  
  class QuickSort
  {


  };

  
  class MergeSort
  {



  };

  
  class HeapSort
  {



  };


  
  class BubbleSort : public Sort
  {
  public:
	//Default Constructor
	BubbleSort(int data[], int size);
	
	void implementSort();
	
  };


  
  class InsertionSort
  {




  };


  
  class SelectionSort 
  {



  };




}
