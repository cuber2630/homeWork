#ifndef _CHNMATHBASE_H
#define _CHNMATHBASE_H

#include "Protocol.h"

class ChnMathBase
{
public:
	ChnMathBase();
	~ChnMathBase();
	virtual void  GetMathInfo(char *ret) {};    // version check for server
	virtual void  NewCreateUser();      // new user register
	virtual void  UserLogIn();          // user login
	virtual long long GameBets();

private:

public:
	short  m_RecordSize;     // data structure size.
	char   m_RecordBuf[MAXIMUM_USER_RECORD_DATA_SIZE/2];
};

#endif