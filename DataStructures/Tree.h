#pragma once

#include <vector>

template <class T>
class Tree
{
public:
	T id;
	vector<T*> children;
};


template <class T>
class BST
{
public:
	T id;
	BST<T>* left;
	BST<T*> right;
};