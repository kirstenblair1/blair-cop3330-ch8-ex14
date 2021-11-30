/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution ch 8 ex 14
 *  Copyright 2021 kirsten blair
 */

#include "std_lib_facilities.h"



// Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might we want to do that? Why don’t people do that often? Try it; write a couple of small programs to see what works.


//Yes we can. No errors in runntime 

// We could do that so that the prematers inside will not be changed or modified since they are made constant. It will remain an integer, there can be an error if you try to change the int value

// ex: void x(std:: string& n)
//     void x(const int& n);{
//     f(n); -- this will complie with an error because the n was made a constant integer 

// people may not use it often because why would you? if you were to pass a value, its void so the return value doesn't matter regardless. 

