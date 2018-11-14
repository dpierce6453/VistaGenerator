/*
 * LoadCodePlugTestCreatorVistaAPX8000.h
 *
 *  Created on: Nov 12, 2018
 *      Author: dan
 */

#ifndef TESTCREATORVISTAAPX8000_H_
#define TESTCREATORVISTAAPX8000_H_

#include "iTestCreator.h"
#include "LoadCodePlug.h"

class TestCreator_VistaAPX8000: public iTestCreator {
public:
	TestCreator_VistaAPX8000();
	virtual ~TestCreator_VistaAPX8000();

	virtual void *LoadCodeplug_creator(LoadCodePlug *lcp);

};

#endif /* TESTCREATORVISTAAPX8000_H_ */
