

#include "GameBase.h"
#include <stdio.h>
//extern ChnMathBase *NewMath();
//extern    void DelMath(ChnMathBase *);
//extern    void GetVersion(char *);
//extern    int NewCreateUser(char *recdata);
//========================================================================
// 以下的函式 在class還沒有實體前, 為了取得 static 資料(GameInfo).
GameInfo_t GameBase::m_GameInfo;
ChnMathBase *NewMath()
{
    return new GameBase();
}

void DelMath( ChnMathBase *math)
{
    delete math;
}

void GetVersion(char *version)
{
    GameBase::GetVersion(version);// static 資料.
}

int NewCreateUser(char *recordData)
{
    GameBase::InitialGameInfo();  //裏面都是 static 資料
//
    return GameBase::NewCreateUser( recordData);
	// return 0;
}

//======================================
GameBase::GameBase(int num)
{	
	GameBase::showNumber = num;
}

GameBase::GameBase()
{	
	//GameBase::showNumber = 0;
}

GameBase::~GameBase()
{
	
}

//
void GameBase::InitialGameInfo()
{
	// multi-threa prevant multi-times initial.
    if((m_GameInfo.m_Version%10000) == (GAME_VERSION_DATA%10000))
	{
		//最多十位數，不能大於2147483647
		//10碼 2年.2月.2日.4版本(改版本才會歸零)
		m_GameInfo.m_Version = GAME_VERSION_DATA;	//更新日期
		return;
	}
	m_GameInfo.m_Version = GAME_VERSION_DATA;     //更新日期，與版本
}


// 給 server 用的, m_GameInfo 不一樣者 機率師  請自行修改
void GameBase::GetVersion(char *version) 
{
    sprintf(version, "%d", m_GameInfo.m_Version);
}

int GameBase::NewCreateUser(char *recordData) 
{
    return 0;
}


// 注:取版號, server 用, 可判斷是否需要更新.
void GameBase::GetMathInfo(char *data)
{

}

// 注:取版號, server 用, 可判斷是否需要更新.
void GameBase::UserLogIn(char *data)
{

}

// 注:取版號, server 用, 可判斷是否需要更新.
long long GameBase::GameBets(char *data)
{
	SYSTEM_DATA sys_data={0};
	GameLoop(&sys_data);
	return 1;
}

int GameBase::GameLoop(SYSTEM_DATA *sys_data)
{
	GameBase::showNumber++;
	return 1;
}
