/*
 * CreateTestBase.h
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#ifndef ITESTCREATOR_H_
#define ITESTCREATOR_H_

class LoadCodePlug;

class iTestCreator {
public:
	iTestCreator();
	virtual ~iTestCreator();

	virtual void *LoadCodeplug_creator(LoadCodePlug *lcp) = 0;
};

#endif /* ITESTCREATOR_H_ */
