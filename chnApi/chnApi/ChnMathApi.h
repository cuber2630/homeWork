#ifndef _CHNMATHAPI_H
#define _CHNMATHAPI_H

#include    "ChnMathBase.h"

typedef struct
{
	int         is_finish;      // 只有1和0 1算一手結束,0算一手未結束
	long long       bet;	        //這次要扣多少錢
	long long       win;            //這次贏多少錢要大於等於0
	long long       cmd_result;     //1才算成功,其他失敗
    //GameMiscellaneous_t gmt;    // jp rtp 小數點 demo 等設定.
	char        jChanceData[MAXIMUM_USER_RECORD_DATA_SIZE];   //要存的機率資料
	char        out_chancedata[MAXIMUM_HTMLASC_SYNC_DATA_SIZE];//要傳到Client的資料
    char        recordOrder[MAXIMUM_USER_RECORD_DATA_SIZE];   // 注單資料
} BetResult;

class ChnMathApi 
{
public:
	ChnMathApi();
	~ChnMathApi();

    void GetVersion(char *version);
	void CreateNewChance(char *recordData);
	void UserLogIn(char *cd, long long credit, char *recordBuf, char *infoData);
	void Bet(const char * in, long long totalbet, long long rngValue, const char * inUserInfo, long long credit, BetResult *res);
	//void Bet(const char * in, long long totalbet, long long rngValue, const char * inUserInfo, long long credit, char *res);
	
};

#endif
