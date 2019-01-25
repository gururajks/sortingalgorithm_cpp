// This is the main DLL file.

#include "stdafx.h"
#include "SortingAlgorithms.h"
#include <ctime>


namespace SortingAlgorithms
{
  /********************CLass Sort ***********************/
  void Sort::swapArrays(int &left, int &right) 
  {
	int temp = left;
	left = right;
	right = temp;
  }


  /********************CLass Bubble Sort ***********************/
 
  BubbleSort::BubbleSort(int data[], int size)
  {
      m_dataArray = data;
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
		if(m_dataArray[i] > m_dataArray[i+1]) 
		{
		  swapArrays(m_dataArray[i], m_dataArray[i+1]);
		  noSwap = 0;
		}
	  }
	}	
  }


  /***************************************************************/

  /********************CLass Insertion Sort ***********************/



  InsertionSort::InsertionSort(int data[], int size)
  {
      m_dataArray = data;
      _size = size;
  }

  void InsertionSort::implementSort()
  {
	for(int i = 1; i < _size; i++) 
	{
	  int valueToBeInserted = m_dataArray[i];
	  int indexPos = i;
	  while(indexPos > 0 && valueToBeInserted < m_dataArray[indexPos-1]) 
	  {
		m_dataArray[indexPos] = m_dataArray[indexPos-1];
		indexPos = indexPos - 1;
	  }
	  m_dataArray[indexPos] = valueToBeInserted;
	}
  }

  /***************************************************************/
  /********************CLass Selection Sort **********************/

  SelectionSort::SelectionSort(int dataArray[], int size)
  {
	m_dataArray = dataArray;
	_size = size;
  }

  void SelectionSort::implementSort() 
  {
	for(int i = 0 ; i < _size; i++)
	{
	  for(int j = i+1 ; j < _size; j++)
	  {
		if(m_dataArray[i] > m_dataArray[j]) 
		{
		  swapArrays(m_dataArray[i], m_dataArray[j]);
		}
	  }
	}
  }


  























  /***************************************************************/

  QuickSort::QuickSort(int data[], int size)
  {
  }

  void QuickSort::implementSort()
  {
  }

  MergeSort::MergeSort(int data[], int size)
  {
  }

  void MergeSort::implementSort()
  {
  }

  BucketSort::BucketSort(int data[], int size)
  {
  }

  void BucketSort::implementSort()
  {
  }

  HeapSort::HeapSort(int data[], int size)
  {
  }

  void HeapSort::implementSort()
  {
  }
  
  RadixSort::RadixSort(int data[], int size)
  {
  }

  void RadixSort::implementSort()
  {
  }

}




