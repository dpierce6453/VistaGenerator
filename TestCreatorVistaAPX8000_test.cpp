/*
 * LoadCodePlugTestCreatorVistaAPX8000_test.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: dan
 */


#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>

#include "TestCreatorVistaAPX8000.h"


TEST_GROUP(TestCreatorVistaAPX8000Tests)
{
	void setup()
	{

	}

	void teardown()
	{

	}
};

const char  testString1[] = "\
      <Step Text=\"Load Radio 1 codeplug\">\n\
        <Action Id=\"LOADCODEPLUG\" ControllerId=\"Radio1\">\n\
          <Property Id=\"LOADCODEPLUG\" Value=\"AMP_IPS_TC1_TC2_SU1.pba\">\n\
            <Property Id=\"LOADTYPE\" Value=\"{PBA}\" />\n\
          </Property>\n\
        </Action>\n\
      </Step>\n";

TEST(TestCreatorVistaAPX8000Tests, OpenTest)
{
	iTestCreator *tc = new TestCreator_VistaAPX8000();

	char *title = (char *)"Load Radio 1 codeplug";
	char *filename = (char *)"AMP_IPS_TC1_TC2_SU1.pba";
	char *radioid = (char *)"Radio1";
	LoadCodePlug *lcp = new LoadCodePlug();
	lcp->setTitle(title);
	lcp->setFileName(filename);
	lcp->setRadioId(radioid);

	void *vCP = tc->LoadCodeplug_creator(lcp);
	if (vCP == 0) FAIL("Test Creation Failed");
	STRCMP_EQUAL((char *)vCP, testString1);

	delete [] (char *)vCP;

	delete tc;
	delete lcp;

}
