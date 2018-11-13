/*
 * LoadCodePlug_test.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#include <CppUTest/TestHarness.h>

#include "LoadCodePlug.h"


TEST_GROUP(LoadCodePlugTests)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};


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
	char *title = (char *)"Load Radio 1 codeplug";
	char *filename = (char *)"AMP_IPS_TC1_TC2_SU1.pba";
	char *radioid = (char *)"Radio1";
	LoadCodePlug *lcp = new LoadCodePlug();
	lcp->setTitle(title);
	lcp->setFileName(filename);
	lcp->setRadioId(radioid);
	STRCMP_EQUAL(title, lcp->getTitle());
	STRCMP_EQUAL(filename, lcp->getFileName());
	STRCMP_EQUAL(radioid, lcp->getRadioId());

	delete lcp;
}
