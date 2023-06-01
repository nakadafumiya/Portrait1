#pragma once
#include "AbstractScene.h"
#include "common.h"

class GameMainScean : public AbstractScene
{
private:

public:
	//描画以外の更新を実装する
	virtual AbstractScene* Update() override;

	//描画に関する事を実装する
	virtual void Draw() const override;
};

