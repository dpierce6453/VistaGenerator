//============================================================================
// Name        : Vista.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

int main(int ac, char** av) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	return CommandLineTestRunner::RunAllTests(ac,av);
}


