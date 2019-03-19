#pragma once
#include "Common.h"

class Document
{
public:
    virtual void newDoc() { cout << "Create New Base Document" << endl; }
    virtual void openDoc() { cout << "Open Document" << endl; }

    string slate;
    string scrollbar;
    string options;
};

class WordDocument : public Document
{
public:
    virtual void newDoc() override { cout << "Create New Word Document" << endl; }
};

class ExcelDocument : public Document
{
public:
    virtual void newDoc() override { cout << "Create New Excel Document" << endl; }
};

class DocumentBuilder
{
public:
    Document* initializeDocument() { return nullptr; }
    virtual void buildBlankSlate() {}
    virtual void buildScrollBar() {}
    virtual void buildOptions() {}

    virtual Document* getDocument() = 0;
};

class WordDocumentBuilder : public DocumentBuilder
{
public:

    void initializeDocument()
    {
        doc = new ExcelDocument();
    }
    virtual void buildBlankSlate()
    {
        doc->slate = "Word";
    }

    virtual void buildScrollBar()
    {
        doc->scrollbar = "word scroll built";
    }

    virtual void buildOptions()
    {
        doc->options = "word options";
    }

    virtual Document* getDocument() { return doc; }

    Document* doc;
};

class ExcelDocumentBuilder : public DocumentBuilder
{
public:

    void initializeDocument()
    {
        doc = new ExcelDocument();
    }
    virtual void buildBlankSlate() 
    {
        doc->slate = "Excel";
    }

    virtual void buildScrollBar() 
    {
        doc->scrollbar = "excel built";
    }

    virtual void buildOptions() 
    {
        doc->options = "options";
    }

    virtual Document* getDocument() { return doc; }

    Document* doc;
};


class Folder
{
public:
    Folder(DocumentBuilder* builder)
    {
        builder->initializeDocument();
        builder->buildScrollBar();
        builder->buildBlankSlate();
        builder->buildOptions();
    }
};