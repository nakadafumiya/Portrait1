#pragma once
#include "DxLib.h"
#include "AbstractScene.h"
#include "SceneManager.h"

class Title:public AbstractScene
{
private:
	int GameTitleImage; //ゲームのタイトル画像用変数

	int GameTitleMusic; //ゲームのタイトル音楽用変数
	int GameTitleButtun; //ゲームのタイトルボタン音用変数

	int MenuNum;  //メニュー

public:
	Title();
	virtual ~Title() {};
	virtual AbstractScene* Update() override;
	virtual void Draw() const override;

};

