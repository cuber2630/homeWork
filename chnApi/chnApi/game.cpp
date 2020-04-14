#include "game.h"

GameBase::GameBase(int num)
{	
	GameBase::showNumber = num;
}

GameBase::~GameBase()
{

}

int GameBase::GameLoop(SYSTEM_DATA *sys_data)
{
	GameBase::showNumber++;
	return 1;
}
