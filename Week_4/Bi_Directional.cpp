#include <iostream>
/*
* Here, we're looking at a bi-directional association. In
* this kind of association, both classes know about each other.
*/

// Forward declaration because Teacher won't know about Student otherwise
class Student;

class Teacher {
	std::string name;
	// Teacher teaches a Student
	Student* student; 
public:
	Teacher(std::string n){
		name = n;
	}

	void setStudent(Student* s){
		student = s;
	}

	void teach(){
	std::cout << "Teaching student..." << std::endl;
	}
};

class Student {
	std::string name;
	// Student is taught by a Teacher
	Teacher* teacher;
public:
	Student(std::string n){
		name = n;
	}

	void setTeacher(Teacher* t){
		teacher = t;
	}

	void learn(){
		std::cout << "Learning from teacher.." << std::endl;
	}
};

int main(){
	Student aStudent("Harry");
	Teacher aTeacher("Cass");

	aStudent.setTeacher(&aTeacher);
	aTeacher.setStudent(&aStudent);

	aTeacher.teach();
	aStudent.learn();
	return 0;
}