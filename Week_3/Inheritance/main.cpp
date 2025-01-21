#include "Student.h"
#include "Employee.h"

int main(){
    Person A("Tavis", 10294822, 492939);
    Person B("Cassandra", 3888123, 472939);

    Employee C("Susan", 48843587, 38239484893, 1009323, 3);
	Student D(3.98, 4, "Harsimran", 3859292938585, 492939);

	A.display(std::cout);
	B.display(std::cout);
	C.display(std::cout);
	D.display(std::cout);

    C.addDep(A);
    C.addDep(B);

    C.display(std::cout);

    Employee E(C);
    E.setName("Craig");

    E.display(std::cout);

    return 0;
}