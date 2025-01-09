#ifndef NAMESPACES_H
#define NAMESPACES_H

#include <iostream>

/*
* In this example (taken mostly from the notes), I demonstrate the syntax
* and flexibility of namespaces. Note how I declare two in a single file!
* That's completely legal.
*/

namespace dot {
	const char* leader(char* s);
	const int ML = 15;
}

namespace hat {
	const char* leader(char* s);
	const int ML = 14;
}

#endif // LEADERS_H
