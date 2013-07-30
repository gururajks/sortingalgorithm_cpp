// SortingAlgorithms.h

#pragma once

#include "Data.h";

namespace SortingAlgorithms {

  template<class Data>
  class Sort 
  {
	Data _dataArray[];
	int _size;
  public:

	//Default Constructor
	Sort(Data data[], int size)
	{
	  _dataArray = data;
	  this->_size = size;
	}	

	Data[] getSortedData() 
	{
	  return _dataArray;
	}



	//Virtual function for sorting , need to be implemented by inheriting classes
	virtual void implementSort() = 0;

  };

  template<class Data>
  class QuickSort
  {


  };

  template<class Data>
  class MergeSort
  {



  };

  template<class Data>
  class HeapSort
  {



  };


  template<class Data>
  class BubbleSort : public Sort
  {
  public:
	

  };


  template<class Data>
  class InsertionSort
  {




  };


  template<class Data>
  class SelectionSort 
  {



  };




}
