#pragma once
#include "Common.h"

class Document
{
public:
    virtual void newDoc()  { cout << "Create New Base Document" << endl; }
    virtual void openDoc()  { cout << "Open Document" << endl; }
};

class WordDocument : public Document
{
public:
    virtual void newDoc() override { cout << "Create New Word Document" << endl; }
};

class ExcelDocument : public Document
{
public:
    virtual void newDoc() override  { cout << "Create New Excel Document" << endl; }
};

class DocumentFactory
{
public:    

    virtual Document* createNewDocument(int type) 
    {
        if (type == 1)
        {
            return new WordDocument();
        }
        if (type == 2)
        {
            return new ExcelDocument();
        }
        throw std::exception("Incorrect type");
    }

private:
};

