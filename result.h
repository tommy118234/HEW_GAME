//=============================================================================
//
// リザルト処理 [result.h]
// Author : HAL東京昼間部 2年制ゲーム学科 GP11B341 24 中込和輝
//
//=============================================================================
#ifndef _RESULT_H_
#define _RESULT_H_


//*****************************************************************************
// インクルード
//*****************************************************************************
#include "main.h"


//*****************************************************************************
// マクロ・列挙型定義
//*****************************************************************************
// リザルトタイプ
enum RESULT_TYPE {
	GAME_CLEAR,		// クリア
	GAME_OVER,		// ゲームオーバー
	RESULT_MAX		// リザルトの数
};

//*****************************************************************************
// 構造体定義
//*****************************************************************************
// リザルト構造体
struct GAMERESULT {
	LPDIRECT3DTEXTURE9				pTexture[RESULT_MAX];		// テクスチャへのポインタ
	VERTEX_2D						vertexWk[NUM_VERTEX];		// 頂点情報格納ワーク
	D3DXVECTOR3						pos;						// 座標
	D3DXVECTOR3						rot;						// 回転
};


//*****************************************************************************
// プロトタイプ宣言
//*****************************************************************************
// リザルトの初期化処理
HRESULT InitResult(int type);
// リザルトの終了処理
void UninitResult(void);
// リザルトの更新処理
void UpdateResult(void);
// リザルトの描画処理
void DrawResult(void);


#endif