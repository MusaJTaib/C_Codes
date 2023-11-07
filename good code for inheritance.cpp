class Base
{
public:
void operate_on(some thing);
private:
	virtual void do_operate_on(some thing) = 0;
};

void Base::operate_on(some thing)
{
	// check preconditions
	do_operate_on(thing);
	// check postconditions
}

class Derived : public Base
{
	// this overrides Base::do_operate_on
	void do_operate_on(some thing);
};

void Derived::do_operate_on(some thing)
{
	// do something
}

int main()
{
	some thing;
	Base* p = new Derived;

	// this calls Base::operate_on, which in turn calls the overridden
	// Derived::do_operate_on, not Base::do_operate_on (which doesn't have an
	// implementation anyway)
	p->operate_on(thing);

	delete p;
}