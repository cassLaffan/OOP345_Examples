#ifndef TEMP_FUNCS
#define TEMP_FUNCS

#include <iostream>

/*
* In this file, we're looking at the template syntax for
* just functions. We'll start from basic syntax, and go from
* there.
*/

// A basic template!
template <typename T>   
T multiply(T a, T b) {
    return a * b;
}

// Another basic template!
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}


// Specializing a template for a specific type
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Specialization for 'const char*'
template <> // Empty diamond brackets!
const char* add(const char* a, const char* b) {
    char* result = (char *)malloc(sizeof(a) + sizeof(b));
    strcpy(result, a);
    strcat(result, b);

    return result;
}

#endif