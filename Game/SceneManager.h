#pragma once
#include "AbstractScene.h"

// シーンマネージャークラス
//各シーンの切り替えを管理する。
class SceneManager
{
private:
	AbstractScene* mScene; //現在のシーン

public:
	//コンストラクタ
	SceneManager(AbstractScene* scene) :mScene(scene) {}

	//デストラクタ
	~SceneManager() {
		delete mScene;
	}
	//描画以外の更新を実装する
	AbstractScene* Update() override;

	//描画に関する事を実装する
	void Draw()const override;
};

