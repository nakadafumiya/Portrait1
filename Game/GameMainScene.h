#pragma once
#include "AbstractScene.h"
#include "common.h"

class GameMainScean : public AbstractScene
{
private:

public:
	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() override;

	//�`��Ɋւ��鎖����������
	virtual void Draw() const override;
};

