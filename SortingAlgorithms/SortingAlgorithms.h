// SortingAlgorithms.h

#pragma once

#include<iostream>
#include<string>
#include "Data.h"


using namespace std;

namespace SortingAlgorithms {

	class DllExport Data
	{
	public:
		Data()
		{
			std::cout << "Data created" << std::endl;
		}
		~Data()
		{
			std::cout << "Data created" << std::endl;
		}
		int value;
	};

    template <class T>
    class DllExport Sort
    {
    protected:
        static const int ARRAY_SIZE = 10000;
        T *m_dataArray;
        int m_size;
        void swapArrays(T &, T &);
    public:
        Sort()
        {
        }

        virtual ~Sort()
        {           
        }
        inline T* getSortedData()
        {
            return m_dataArray;
        }

		virtual bool checkSorted();
        //Virtual function for sorting , need to be implemented by inheriting classes
        virtual void implementSort() = 0;
    };

    template <class T>
    class DllExport QuickSort : public Sort<T>
    {
    public:
        //Default Constructor
        QuickSort(T data[], int size);

        virtual void implementSort() override;
	protected:
		int partition(int low, int high);
		void quickSort(int low, int high);
    };

    template <class T>
    class DllExport MergeSort : public Sort<T>
    {
    public:
        //Default Constructor
        MergeSort(T data[], int size);

        virtual void implementSort() override;
    protected:

        void mergeSort(int begin, int end);

        void merge(int begin, int middle , int end);
    };

    template <class T>
    class DllExport HeapSort : public Sort<T>
    {
    public:
        //Default Constructor
        HeapSort(T data[], int size);

        void implementSort() override;


    };

    template <class T>
    class DllExport BucketSort : public Sort<T>
    {
    public:
        //Default Constructor
        BucketSort(T data[], int size);

        void implementSort() override;
    };

    template <class T>
    class DllExport RadixSort : public Sort<T>
    {
    public:
        //Default Constructor
        RadixSort(T data[], int size);

        void implementSort() override;
    };


    template <class T>
    class DllExport BubbleSort : public Sort<T>
    {

    public:
        //Default Constructor
        BubbleSort(T data[], int size);

        void implementSort() override;

    };



    template <class T>
    class DllExport InsertionSort : public Sort<T>
    {
    public:
        InsertionSort(T data[], int size);
        void implementSort() override;

    };


    template <class T>
    class DllExport SelectionSort : public Sort<T>
    {
    public:
        SelectionSort(T data[], int size);
        void implementSort() override;

    };




}
