/*
 * LoadCodePlug.h
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#ifndef LOADCODEPLUG_H_
#define LOADCODEPLUG_H_

#include "iTestCreator.h"

class LoadCodePlug  {
public:
	LoadCodePlug();
	virtual ~LoadCodePlug();

	void setTitle(char *title);
	void setRadioId(char *radioID);
	void setFileName(char *filename);

	char *getTitle(void);
	char *getRadioId( void );
	char *getFileName( void );

private:
	char *m_pTitle;
	char *m_pRadioId;
	char *m_pFilename;

	void setMemberString(char *memberstring, char *string);

};

#endif /* LOADCODEPLUG_H_ */
