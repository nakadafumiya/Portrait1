#pragma once
#include "DxLib.h"
#include "AbstractScene.h"
#include "SceneManager.h"

class Title:public AbstractScene
{
private:
	int GameTitleImage; //�Q�[���̃^�C�g���摜�p�ϐ�

	int GameTitleMusic; //�Q�[���̃^�C�g�����y�p�ϐ�
	int GameTitleButtun; //�Q�[���̃^�C�g���{�^�����p�ϐ�

	int MenuNum;  //���j���[

public:
	Title();
	virtual ~Title() {};
	virtual AbstractScene* Update() override;
	virtual void Draw() const override;

};

