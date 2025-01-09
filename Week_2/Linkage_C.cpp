#include <iostream>
/*
* Now let's take a look at internal linkage, using the static keyword.
* Here, again, we're just creating a static variable in the global scope 
* of this file and a display function. The static keyword tells the 
* compiler that the symbol (variable or function) is local to the
* current translation unit and should not be seen or linked by other 
* translation units.
*/
static int local = 4;

void display(){
    std::cout << "Linkage_C: local at " << &local   << '\n';
    std::cout << "Linkage_C: local is " <<  local++ << '\n';
}