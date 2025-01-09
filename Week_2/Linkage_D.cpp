// Internal Linkage
// Module_b.cpp

#include <iostream>

void display();
static int local = 2;

int main(){
    display();
    display();
    std::cout << "Linkage_D: local at " << &local   << '\n';
    std::cout << "Linkage_D: local is " <<  local++ << '\n';
	return 0;
}