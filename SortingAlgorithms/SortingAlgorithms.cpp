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
        int middle = (begin + end) / 2;

        mergeSort(begin, middle);
        mergeSort(middle + 1, end);

        merge(begin, end);
    }

    template <class T>
    void MergeSort<T>::merge(int begin, int end)
    {






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




