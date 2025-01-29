#include <iostream>

/*
* In this file, courtesy of my friend Dmitri, we see how C++ can actually
* have ambiguities in the inheritance tree. Notice that this tree, if we
* drew it out, looks like a diamond.
*    A
*  /   \
* B     C
*  \   /
*    D
* You actually need to specify which path in the inheritance tree
* a function needs to take, or C++'s compiler will complain!
*/

class A {
	int x;
public:
	A(int x) : x(x) {}

	int get() {
		return x;
	}
};

class B: public A {
public:
	B(int x): A(x) {}
};

class C: public A {
public:
	C(int x): A(x) {}
};

class D: public B, public C {
public:
	D(int x, int y) : B(x), C(y) {}
};

int main() {
   D d(1,2);
   //std::cout << d.get() << std::endl; // generates an error because we have two copies of get() coming from B::A and C::A
   std::cout << d.B::get() << " " << d.C::get() << std::endl; // print "1 2"
}
