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

    virtual Document* createNewDocument() = 0;    
private:
};


class WordDocumentFactory : public DocumentFactory
{
public:
    virtual Document* createNewDocument()
    {
        return new WordDocument();
    }
};

class ExcelDocumentFactory : public DocumentFactory
{
public:
    virtual Document* createNewDocument()
    {
        return new ExcelDocument();
    }
};

