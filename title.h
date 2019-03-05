//=============================================================================
//
// タイトル処理 [title.h]
// Author : HAL東京昼間部 2年制ゲーム学科 GP11B341 24 中込和輝
//
//=============================================================================
#ifndef _TITLE_H_
#define _TITLE_H_


//*****************************************************************************
// インクルード
//*****************************************************************************
#include "main.h"


//*****************************************************************************
// マクロ・列挙型定義
//*****************************************************************************


//*****************************************************************************
// 構造体定義
//*****************************************************************************
// タイトル構造体
struct GAMETITLE {
	LPDIRECT3DTEXTURE9				pTexture;		// テクスチャへのポインタ
	VERTEX_2D						vertexWk[NUM_VERTEX];		// 頂点情報格納ワーク
	D3DXVECTOR3						pos;						// 座標
	D3DXVECTOR3						rot;						// 回転
};


//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
// タイトルの初期化処理
HRESULT InitTitle(int type);
// タイトルの終了処理
void UninitTitle(void);
// タイトルの更新処理
void UpdateTitle(void);
// タイトルの描画処理
void DrawTitle(void);


#endif