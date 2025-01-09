#include <iostream>
/*
* Here, we are exploring linkage. Remember, the concept of
* linkage entity that is declared in a different scope 
* within another translation unit. Notice that there's no main or
* header? (Ill advised on the lack of header but this is just
* for demonstration purposes)
*/
extern int share_me; // external linkage declaration

void display(){
	std::cout << "Linkage_A: share_me at " << &share_me   << '\n';
	std::cout << "Linkage_A: share_me is " <<  share_me++ << '\n';
}