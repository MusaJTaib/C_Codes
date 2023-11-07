#include <iostream>

using namespace std;


class base
{
private:
	virtual void do_op() = 0;

public:
	void op()
	{
	
	}
};

class derived : public base
{
public:
	void do_op()
	{
		cout << "This is do_op() in derived class\n";
	}
};

int main()
{
	base *bptr;
	derived d;

	bptr = &d;
	bptr->op(); /* Invoking the overriden do_op() of derived class through the public
				function op() of base class */
	//bptr->do_op(); /* E
	
	system("pause");
	return 0;
}