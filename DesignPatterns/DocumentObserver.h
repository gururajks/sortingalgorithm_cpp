#pragma once
#include "Common.h"

class DocumentObserver
{
public:
	virtual void update() = 0;
};

class WordObserver : public DocumentObserver
{
public:
	virtual void update() override
	{
		cout << "Word Observer Called!" << endl;
	}
};

class Excelserver : public DocumentObserver
{
public:
	virtual void update() override
	{
		cout << "Excel Observer Called!" << endl;
	}
};

class Document
{
public:
	void attach(DocumentObserver* obs) {
		storedObs.push_back(obs);
	}
	void save()
	{
		notify();
	}
	void notify()
	{
		for (auto& obs : storedObs)
		{
			obs->update();
		}
	}

	vector<DocumentObserver*> storedObs;
};