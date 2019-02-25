// This is the main DLL file.

#include "stdafx.h"
#include "SortingAlgorithms.h"
#include <ctime>


namespace SortingAlgorithms
{
    /********************CLass Sort ***********************/
    template <class T>
    void Sort<T>::swapArrays(T &left, T &right)
    {
        T temp = left;
        left = right;
        right = temp;
    }

	template <class T>
	bool Sort<T>::checkSorted()
	{
		for (int i = 0; i < m_size - 1; i++)
		{
			if (m_dataArray[i + 1] < m_dataArray[i])
				return false;
		}
		return true;
	}


    /********************CLass Bubble Sort ***********************/
    template <class T>
    BubbleSort<T>::BubbleSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void BubbleSort<T>::implementSort()
    {
        int noSwap = 0;
        while (noSwap == 0)
        {
            noSwap = 1;
            for (int i = 0; i < m_size - 1; i++)
            {
                if (m_dataArray[i] > m_dataArray[i + 1])
                {
                    swapArrays(m_dataArray[i], m_dataArray[i + 1]);
                    noSwap = 0;
                }
            }
        }
    }


    /***************************************************************/

    /********************CLass Insertion Sort ***********************/


    template <class T>
    InsertionSort<T>::InsertionSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void InsertionSort<T>::implementSort()
    {
        for (int i = 1; i < m_size; i++)
        {
            int valueToBeInserted = m_dataArray[i];
            int indexPos = i;
            while (indexPos > 0 && valueToBeInserted < m_dataArray[indexPos - 1])
            {
                m_dataArray[indexPos] = m_dataArray[indexPos - 1];
                indexPos = indexPos - 1;
            }
            m_dataArray[indexPos] = valueToBeInserted;
        }
    }

    /***************************************************************/
    /********************CLass Selection Sort **********************/
    template <class T>
    SelectionSort<T>::SelectionSort(T dataArray[], int size)
    {
        m_dataArray = dataArray;
        m_size = size;
    }

    template <class T>
    void SelectionSort<T>::implementSort()
    {
        for (int i = 0; i < m_size; i++)
        {
            for (int j = i + 1; j < m_size; j++)
            {
                if (m_dataArray[i] > m_dataArray[j])
                {
                    swapArrays(m_dataArray[i], m_dataArray[j]);
                }
            }
        }
    }


























    /***************************************************************/
    template <class T>
    MergeSort<T>::MergeSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void MergeSort<T>::implementSort()
    {
        mergeSort(0, m_size);
    }

    template <class T>
    void MergeSort<T>::mergeSort(int begin, int end)
    {
		if (end - begin < 2) return;
        int middle = (begin + end) / 2;

        mergeSort(begin, middle);
        mergeSort(middle + 1, end);

        merge(begin, middle, end);
    }

    template <class T>
    void MergeSort<T>::merge(int begin, int middle, int end)
    {
		int leftArraySize = middle - begin + 1;
		int rightArraySize = end - middle;
		T* leftArray = new T[leftArraySize];
		T* rightArray = new T[rightArraySize];
		for (int i = 0; i < leftArraySize; i++)
		{
			leftArray[i] = m_dataArray[i + begin];
		}
		for (int i = 0; i < rightArraySize; i++)
		{
			rightArray[i] = m_dataArray[i + middle + 1];
		}

		int i = 0; 
		int j = 0;
		int k = begin;
		while (i < leftArraySize && j < rightArraySize)
		{
			if (leftArray[i] < rightArray[j])
			{
				m_dataArray[k] = leftArray[i];
				i++;
			}
			if (leftArray[i] > rightArray[j])
			{
				m_dataArray[k] = rightArray[j];
				j++;
			}
			k++;
		}

		while (i < leftArraySize)
		{
			m_dataArray[k] = leftArray[i];
			i++;
			k++;
		}

		while (j < rightArraySize)
		{
			m_dataArray[k] = rightArray[j];
			j++;
			k++;
		}

		delete leftArray;
		delete rightArray;

    }






    template <class T>
    QuickSort<T>::QuickSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void QuickSort<T>::implementSort()
    {		
		quickSort(0, m_size - 1);
    }



	template <class T>
	int QuickSort<T>::partition(int low, int high)
	{
		T pivot = m_dataArray[high];
		int partitionIndex = low;
		while (low < high)
		{
			if (m_dataArray[low] < m_dataArray[partitionIndex])
			{
				swapArrays(m_dataArray[low], m_dataArray[partitionIndex]);
				partitionIndex++;
			}
			low++;
		}
		swap(m_dataArray[partitionIndex], m_dataArray[high]);
		return partitionIndex;
	}

	template<class T>
	void QuickSort<T>::quickSort(int low, int high)
	{
		if (low > high) return;
		int pivot = partition(low, high);
		quickSort(low, pivot - 1);
		quickSort(pivot + 1, high);
	}

    template <class T>
    BucketSort<T>::BucketSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void BucketSort<T>::implementSort()
    {
    }

    template <class T>
    HeapSort<T>::HeapSort(T data[], int size)
    {
        m_dataArray = data;
        m_size = size;
    }

    template <class T>
    void HeapSort<T>::implementSort()
    {
    }

    template <class T>
    RadixSort<T>::RadixSort(T data[], int size)
    {
    }

    template <class T>
    void RadixSort<T>::implementSort()
    {
    }

}




