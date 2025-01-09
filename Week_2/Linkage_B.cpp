#include <iostream>
/*
* Notice that I don't include anything to do with Linkage_A.cpp?
* Yet, when you run the commage g++ Linkage_A.cpp Linkage_B.cpp,
* it runs! Give it a try. You can also run the makefile associated
* with this.
*/

void display();
int share_me = 0; // variable definition

int main(){
	// The share_me variable is declared in Linkage_A.cpp
	// but we set it, then call its functions here. That's the
	// power of the extern keyword!
    display();
    display();
    std::cout << "Module B: share_me at " << &share_me   << '\n';
    std::cout << "Module B: share_me is " <<  share_me++ << '\n';
	return 0;
}