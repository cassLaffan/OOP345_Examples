#include <iostream>

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
