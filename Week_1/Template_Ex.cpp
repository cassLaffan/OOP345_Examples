#include "Template_Ex.h"

int main(){
    Person<int> personA;
    personA.setName(18);

    Person<std::string> personB;
    personB.setName("Cass");

    std::cout << "Number name: " << personA.getName() << std::endl;
    std::cout << "Actual name: " << personB.getName() << std::endl;

    aPrintFunction("Cass", 1994);

    aPrintFunction(3.333, 3.333);

    float exA = 3.14;
    int exB = 1;

    swap(exA, exB);
    
    std::cout << "Swapped values are: " << exA << " and " << exB << std::endl;

    std::string exC = "Cheetos";

    // An example where casting may not work correctly!
    // Consider why (as in, memory sizing) this doesn't work as expected.
    char exE = 'a';
    float exF = 9.888;

    swap(exE, exF);

    std::cout << "Swapped values are: " << exE << " and " << exF << std::endl;

    return 0;
}