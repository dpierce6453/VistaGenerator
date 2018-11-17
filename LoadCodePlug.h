/*
 * LoadCodePlug.h
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#ifndef LOADCODEPLUG_H_
#define LOADCODEPLUG_H_

using namespace std;
#include <string>

#include "iTestCreator.h"

class LoadCodePlug  {
public:
	LoadCodePlug();
	virtual ~LoadCodePlug();

	void setTitle(string &title) {m_strTitle = title;};
	void setRadioId(string &radioID) {m_strRadioId = radioID;} ;
	void setFileName(string &filename) {m_strFilename = filename;} ;

	void setTitle(const char *str) {m_strTitle.assign(str);};
	void setRadioId(const char *str) {m_strRadioId.assign(str);};
	void setFileName(const char *str) {m_strFilename.assign(str);};

	const char *getTitle(void) {return m_strTitle.c_str();} ;
	const char *getRadioId( void ) {return m_strRadioId.c_str();} ;
	const char *getFileName( void ) {return m_strFilename.c_str();} ;

private:
	string m_strTitle;
	string m_strRadioId;
	string m_strFilename;

};

#endif /* LOADCODEPLUG_H_ */
