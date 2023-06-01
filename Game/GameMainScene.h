#pragma once
#include "AbstractScene.h"
#include "common.h"

class GameMainScean : public AbstractScene
{
private:

public:
	//•`‰æˆÈŠO‚ÌXV‚ğÀ‘•‚·‚é
	virtual AbstractScene* Update() override;

	//•`‰æ‚ÉŠÖ‚·‚é–‚ğÀ‘•‚·‚é
	virtual void Draw() const override;
};

