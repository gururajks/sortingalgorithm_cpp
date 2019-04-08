#include "Common.h"

class Base
{
public:
	Base()
	{
		cout << "Base constructed" << endl;;
	}

	Base(Base& other)
	{
		cout << "Base Copy constructor Called" << endl;
	}

	Base& operator=(const Base& other)
	{
		cout << "Base = Assignement Called" << endl;
		return *this;
	}

	Base(Base&& other)
	{
		cout << "Base Move constructor Called" << endl;
	}

	virtual ~Base()
	{
		cout << "Base destroyed" << endl;
	}

	virtual void func()
	{
		cout << "Base func() called" << endl;;
	}
};

class Derived : public Base
{
public:

	Derived() : Base()
	{
		cout << "Derived Constructed" << endl;
	}

	

	Derived(Derived& other)
	{
		cout << "Derived Copy constructor called" << endl;
	}

	Derived(Derived&& other)
	{
		cout << "Derived Move constructor called" << endl;
	}
	
	~Derived()
	{
		cout << "Derived destroyed" << endl;
	}

	virtual void func() override
	{
		cout << "Derived func() called" << endl;
	}
};

