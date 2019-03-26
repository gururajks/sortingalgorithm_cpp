#pragma once
#include "Common.h"

class Document
{
public:
	virtual void newDoc() { cout << "Create New Base Document" << endl; }
	virtual void openDoc() { cout << "Open Document" << endl; }
	
};

class DocumentList
{
public:
	DocumentList(Document* doc) : doc(doc), next(nullptr) {}
	Document* doc;
	DocumentList* next;
};



class DocumentIterator
{
public:
	DocumentIterator(DocumentList* docList)
	{
		current = docList;
		begin = docList;
	}

	bool hasNext() const
	{
		return current->next != nullptr;
	}

	void next()
	{
		current = current->next;
	}

	DocumentList* beginIter() const
	{
		return begin;
	}

	DocumentList* endIter()
	{
		return nullptr;
	}

	DocumentList* begin;
	DocumentList* current;
};