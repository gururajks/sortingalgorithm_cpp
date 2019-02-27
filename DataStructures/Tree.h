#pragma once
#include "Data.h"
#include <vector>

template <class T>
class DllExport Tree
{
public:
	int id;
	T value;
	vector<T*> children;
};


template <class T>
class DllExport BST
{
public:
	int id;
	T value;
	BST<T>* left;
	BST<T*> right;
};