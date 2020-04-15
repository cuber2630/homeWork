#ifndef _MYPROTOCODE_H
#define _MYPROTOCODE_H

#include "Protocol.h"
#pragma pack(push)
#pragma pack(1)

// 遊戲初始資料設定的結構, 內容自訂, 資料結構名稱勿改, 避免麻煩
typedef struct
{       
    int m_Version;                // 版本檢查用, 網路更新.
    // ============= 設定資料 =================================
    char m_LineTables[100];      // 連線資料, 畫面左上No.1, 右下No.15
    int m_Odds[50];             // the bigest odds is m_Odds[0][2]    
} GameInfo_t;

#pragma pack(pop)
#endif