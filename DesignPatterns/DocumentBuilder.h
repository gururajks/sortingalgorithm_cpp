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
    virtual void initializeDocument() { }
    virtual ~DocumentBuilder() {}
    virtual void buildBlankSlate() {}
    virtual void buildScrollBar() {}
    virtual void buildOptions() {}

    virtual Document* getDocument() = 0;
};

class WordDocumentBuilder : public DocumentBuilder
{
public:

    virtual void initializeDocument() override
    {
        doc = new ExcelDocument();
    }

    virtual void buildBlankSlate() override
    {
        doc->slate = "Word";
    }

    virtual void buildScrollBar() override
    {
        doc->scrollbar = "word scroll built";
    }

    virtual void buildOptions() override
    {
        doc->options = "word options";
    }

    virtual Document* getDocument() override  { return doc; }

private:
    Document* doc;
};

class ExcelDocumentBuilder : public DocumentBuilder
{
public:

    virtual void initializeDocument() override
    {
        doc = new ExcelDocument();
    }
    virtual void buildBlankSlate() override
    {
        doc->slate = "Excel";
    }

    virtual void buildScrollBar() override
    {
        doc->scrollbar = "excel built";
    }

    virtual void buildOptions() override
    {
        doc->options = "options";
    }

    virtual Document* getDocument() override { return doc; }

private:
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