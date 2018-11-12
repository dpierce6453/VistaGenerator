/*
 * LoadCodePlug.h
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#ifndef LOADCODEPLUG_H_
#define LOADCODEPLUG_H_

#include "iTestCreator.h"

class LoadCodePlug: public iTestCreator {
public:
	LoadCodePlug();
	virtual ~LoadCodePlug();

	virtual void createTest() {};

};

#endif /* LOADCODEPLUG_H_ */
