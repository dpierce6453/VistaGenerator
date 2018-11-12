/*
 * LoadCodePlug_test.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#include "LoadCodePlug.h"
#include "CppUTest/TestHarness.h"

TEST_GROUP(LoadCodePlugTests)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};

const char *test = "Mystring";

const char * codeplug1 = "\
      <Step Text=\"Load Radio 1 codeplug\">\n\
        <Action Id=\"LOADCODEPLUG\" ControllerId=\"Radio1\">\n\
          <Property Id=\"LOADCODEPLUG\" Value=\"AMP_IPS_TC1_TC2_SU1.pba\">\n\
            <Property Id=\"LOADTYPE\" Value=\"{PBA}\" />\n\
          </Property>\n\
        </Action>\n\
      </Step>\n";

TEST(LoadCodePlugTests, LoadSimpleCodePlug)
{

}
