/*
 * LoadCodePlug.cpp
 *
 *  Created on: Nov 9, 2018
 *      Author: dan
 */

#include <string.h>

#include "LoadCodePlug.h"

LoadCodePlug::LoadCodePlug() {
	m_pRadioId = 0;
	m_pTitle = 0;
	m_pFilename = 0;
}

LoadCodePlug::~LoadCodePlug() {
	if(m_pTitle != 0) delete [] m_pTitle;
	if(m_pRadioId != 0) delete [] m_pRadioId;
	if(m_pFilename != 0) delete [] m_pFilename;
}


void LoadCodePlug::setTitle(char *title)
{
	if(m_pTitle != 0)
	{
		delete [] m_pTitle;
		m_pTitle = 0;
	}
	m_pTitle = new char[strlen(title) + 1];
	strcpy(m_pTitle, title);
}

void LoadCodePlug::setMemberString(char *memberstring, char *string)
{

}


void LoadCodePlug::setRadioId(char *radioID)
{
	if(m_pRadioId != 0)
	{
		delete [] m_pTitle;
		m_pRadioId = 0;
	}
	m_pRadioId = new char[strlen(radioID) + 1];
	strcpy(m_pRadioId, radioID);
}

void LoadCodePlug::setFileName(char *filename)
{
	if(m_pFilename != 0)
	{
		delete [] m_pFilename;
		m_pFilename = 0;
	}
	m_pFilename = new char[strlen(filename) + 1];
	strcpy(m_pFilename, filename);
}

char *LoadCodePlug::getTitle(void)
{
	return m_pTitle;
}
char *LoadCodePlug::getRadioId( void )
{
	return m_pRadioId;
}

char *LoadCodePlug::getFileName( void )
{
	return m_pFilename;
}
