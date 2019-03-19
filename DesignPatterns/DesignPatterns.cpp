// DesignPatterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "DocumentFactory.h"
#include "Common.h"

int main()
{
    unique_ptr<DocumentFactory> df = make_unique<DocumentFactory>();
    try
    {
        auto word = df->createNewDocument(3);

        word->newDoc();
        word->openDoc();
    }
    catch (exception e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}
