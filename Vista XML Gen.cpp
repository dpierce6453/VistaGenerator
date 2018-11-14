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

#include "TestCreatorVistaAPX8000.h"
#include "RAMBufferDriver.h"

int main(int ac, char** av) {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	return CommandLineTestRunner::RunAllTests(ac,av);
}

TEST_GROUP(End2EndTests)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};

TEST(End2EndTests, LoadCodePlug)
{
	// create the test creator
	//iTestCreator *ptc = new TestCreator_VistaAPX8000();

	// create the test driver
	//iTestDriver *ptd = new RAMBufferDriver();



}
