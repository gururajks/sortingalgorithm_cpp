// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Common.h"

#define SMART_PTR


#ifdef SMART_PTR
#include "SmartPointers.h"


void checkMethod(unique_ptr<Base> b)
{
	
	b->func();

}


int main()
{
	Base* a = new Derived();
	
	a->func();
	
	delete a;
	

}



#ifdef FACTORY

#include "DocumentFactory.h"
void factoryExample()
{
    unique_ptr<DocumentFactory> df = make_unique<WordDocumentFactory>();
    try
    {
        auto word = df->createNewDocument();

        word->newDoc();
        word->openDoc();
    }
    catch (exception e)
    {
        cout << e.what() << endl;
    }
}
#endif

#ifdef BUILDER
#include "DocumentBuilder.h"
int main()
{
    unique_ptr<DocumentBuilder> db = make_unique<WordDocumentBuilder>();
    Folder f(db.get());
    Document* doc = db->getDocument();
    cout << doc->slate << endl;
    cout << doc->options << endl;
    cout << doc->scrollbar << endl;
    

    return 0;
}
#endif