#ifndef _GAMEBASE_H
#define _GAMEBASE_H

//#define _CRT_SECURE_NO_DEPRECATE
#include "ChnMathBase.h"
#include "MyProtocol.h"

#define GAME_VERSION_DATA	(2004150001) //10碼 2年.2月.2日.4版本(改版本才會歸零)

typedef struct{
	char userMode;
	char a2;
	char a3;
	short rate_set;	
	short max_bet_order;
	short bet_order;
	int big_bet;
	long long totalbet;
	long long totalIn30;
	long long totalOut30;	
	long long userModeIn;
	long long userModeOut;
	long long a9;
	long long a10;
}SYSTEM_DATA;

class GameBase: public ChnMathBase
{
	public:
		GameBase(int num);
		GameBase();		
		~GameBase();

		void  GetMathInfo(char *ret);    // version check for server
		static int   NewCreateUser(char *recordData);      // new user register
		void  UserLogIn(char *data);          // user login
		long long GameBets(char *data);

		static void  GetVersion(char *version);
		static void InitialGameInfo();
		//long long GameBets( uint32 rngNo, int64 totalbet, InterfaceBuffer_t *in, InterfaceBufferA_t *out, int64 credit);
		

		int GameLoop(SYSTEM_DATA *sys_data);
	private:

	public:
	  int showNumber;
	  static GameInfo_t m_GameInfo;     // version / Odds...
};

#endif