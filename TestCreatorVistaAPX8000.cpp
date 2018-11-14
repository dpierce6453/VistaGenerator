/*
 * LoadCodePlugTestCreatorVistaAPX8000.cpp
 *
 *  Created on: Nov 12, 2018
 *      Author: dan
 */


#include <cstring>
#include <stdio.h>

#include "TestCreatorVistaAPX8000.h"


const char  testString1[] = "\
      <Step Text=\"%s\">\n\
        <Action Id=\"LOADCODEPLUG\" ControllerId=\"%s\">\n\
          <Property Id=\"LOADCODEPLUG\" Value=\"%s\">\n\
            <Property Id=\"LOADTYPE\" Value=\"{PBA}\" />\n\
          </Property>\n\
        </Action>\n\
      </Step>\n";


TestCreator_VistaAPX8000::TestCreator_VistaAPX8000() {
	// TODO Auto-generated constructor stub

}

TestCreator_VistaAPX8000::~TestCreator_VistaAPX8000() {
	// TODO Auto-generated destructor stub
}

void *TestCreator_VistaAPX8000::LoadCodeplug_creator(LoadCodePlug *lcp)
{
	//create a buffer big enough to hold the string
	unsigned int length;
	length = strlen((const char *)lcp->getTitle()) + strlen ((const char *)lcp->getRadioId()) + strlen((const char *)lcp->getFileName()) + strlen(testString1);
	char *pBuf = new char[length];
	sprintf(pBuf, testString1, lcp->getTitle(), lcp->getRadioId(), lcp->getFileName());

	return (void *)pBuf;
}

