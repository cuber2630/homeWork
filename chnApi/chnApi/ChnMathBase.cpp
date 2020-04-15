
#include "ChnMathBase.h"

ChnMathBase::ChnMathBase()
{
}

ChnMathBase::~ChnMathBase()
{
	
}


// 新建玩家時初始資料
void ChnMathBase::NewCreateUser()
{
    // 初始化新加入會員, 基礎資料歸0
}

// 玩家 Login 時( 沒有 Logout 時!?)
void ChnMathBase::UserLogIn()
{
}

// ==================== 每手呼叫一次 =========================
// return WIN Prize 0 up,  -1 is error code
long long ChnMathBase::GameBets()
{
    return 0;
}


