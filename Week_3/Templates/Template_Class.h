#ifndef TEMP_CLASS
#define TEMP_CLASS

/*
* This file contains all the template classes we'll be making.
*/

// A template class with a type pre-determined!
template <typename T, int size>
class Array {
	T arr[size];
public:
	int getSize() const {
		return size;
	}
};

// Passing a template an argument for another template
template <typename T>
class Container {
public:
	T data;
};

template <template <typename> class ContainerType, typename T>
class Wrapper {
public:
	ContainerType<T> container;
};

template <typename T>
class Counter {
public:
	static int count;
	Counter() { count++; }
};

// Outside of the class definition
template <typename T>
int Counter<T>::count = 0;  

#endif