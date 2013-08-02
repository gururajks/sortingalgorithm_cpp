// SortingAlgorithms.h

#pragma once

#include<iostream>
#include<string>
#include "Data.h";
#define DllExport __declspec( dllexport ) 

using namespace std;

namespace SortingAlgorithms {
    
  class DllExport Sort 
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

  
  class DllExport QuickSort
  {


  };

  
  class DllExport MergeSort
  {



  };

  
  class DllExport HeapSort
  {



  };


  
  class DllExport BubbleSort : public Sort
  {
	void swapArrays(int &, int &);
  public:
	//Default Constructor
	BubbleSort(int data[], int size);
	
	void implementSort();
	
  };

  

  
  class DllExport InsertionSort : public Sort
  {
  public:
	InsertionSort(int data[], int size);
	void implementSort();

  };


  
  class DllExport SelectionSort 
  {



  };




}
