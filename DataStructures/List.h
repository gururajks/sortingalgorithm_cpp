#pragma once
#include "Data.h"

template <class T>
class DllExport List
{
public:
	List<T>(T value) : value(value) {}

	int id;
	T value;
	List<T>* next;
	

};

template <class T>
class DllExport ListAlgo
{
public:
	static List<T>* reverseList(List<T>* root)
	{
		List<T>* prev = nullptr;
		while (root)
		{
			List<int>* nextNode = root->next;
			root->next = prev;
			prev = root;
			root = nextNode;
		}
		return prev;
	}
};
