// SortingAlgorithms.h

#pragma once

#include<iostream>
#include<string>
#include "Data.h"
#define DllExport __declspec( dllexport ) 

using namespace std;

namespace SortingAlgorithms {

    class DllExport Sort
    {
    protected:
        static const int ARRAY_SIZE = 10000;
        int *m_dataArray;
        int _size;
        void swapArrays(int &, int &);
    public:
        virtual ~Sort()
        {
            delete[] m_dataArray;
        }
        inline int* getSortedData()
        {
            return m_dataArray;
        }

        //Virtual function for sorting , need to be implemented by inheriting classes
        virtual void implementSort() = 0;
    };


    class DllExport QuickSort : public Sort
    {
    public:
        //Default Constructor
        QuickSort(int data[], int size);

        virtual void implementSort() override;

    };


    class DllExport MergeSort : public Sort
    {
    public:
        //Default Constructor
        MergeSort(int data[], int size);

        virtual void implementSort() override;


    };


    class DllExport HeapSort : public Sort
    {
    public:
        //Default Constructor
        HeapSort(int data[], int size);

        void implementSort() override;


    };

    class DllExport BucketSort : public Sort
    {
    public:
        //Default Constructor
        BucketSort(int data[], int size);

        void implementSort() override;
    };

    class DllExport RadixSort : public Sort
    {
    public:
        //Default Constructor
        RadixSort(int data[], int size);

        void implementSort() override;
    };



    class DllExport BubbleSort : public Sort
    {

    public:
        //Default Constructor
        BubbleSort(int data[], int size);

        void implementSort() override;

    };




    class DllExport InsertionSort : public Sort
    {
    public:
        InsertionSort(int data[], int size);
        void implementSort() override;

    };



    class DllExport SelectionSort : public Sort
    {
    public:
        SelectionSort(int data[], int size);
        void implementSort() override;

    };




}
