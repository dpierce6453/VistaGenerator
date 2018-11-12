/*
 * CreateTestBase.h
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#ifndef ITESTCREATOR_H_
#define ITESTCREATOR_H_

class iTestCreator {
public:
	iTestCreator();
	virtual ~iTestCreator();

	virtual void create() = 0;
};

#endif /* ITESTCREATOR_H_ */
