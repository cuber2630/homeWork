
#include "ChnMathApi.h"

extern    ChnMathBase *NewMath();
extern    void DelMath(ChnMathBase *);
extern    void GetVersion(char *);
extern    int NewCreateUser(char *recdata);


ChnMathApi::ChnMathApi()
{
}

ChnMathApi::~ChnMathApi()
{

}

void ChnMathApi::GetVersion(char *version)
{
    // call C function
    ::GetVersion( version); 
}

void ChnMathApi::CreateNewChance(char *recordData)
{
    // initial record data
    char  recBuf[MAXIMUM_USER_RECORD_DATA_SIZE/2];
	int size = NewCreateUser( recBuf);
	/*
		time(time_t *);                         // get current time seconds from 1970 0:0:0
		struct tm *localtime(const time_t *);   // time structure for check date/time
		char *asctime( const tm *);             // show date/time
	*/
    // save data to DB.
    //StructTransfer2Asc(recordData, recBuf, size);
}


//---------------------------------------------------------------------------------------------------------------
void ChnMathApi::UserLogIn(char* cd, long long credit, char *recordBuf, char *infoBuf)
{
    ChnMathBase *gmb = NewMath();   // new math class


    DelMath( gmb);      // delete math class
}

void ChnMathApi::Bet(const char *in, long long totalbet, long long rngValue, const char* inUserInfo, long long credit, BetResult *res)
{
	ChnMathBase *gmb = NewMath();   // new math class


    DelMath( gmb);     
}
