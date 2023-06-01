#include "Title.h"
#include "KeyManager.h"


Title::Title(){
	//���j���[�̓���
	MenuNum = 0;
	//�^�C�g���̉摜
	GameTitleImage = LoadGraph("images/GameTitleImage.png");

}

AbstractScene* Title::Update() {
	//���j���[�I��
	if (KeyManager::OnClick(KEY_INPUT_SPACE)) {
		switch (MenuNum)
		{
		case 0:
			return new GameMainScene();	//�Q�[����ʂ�
			break;

		}
	}

	return this;
}

void Title::Draw() const {
	//�^�C�g���摜�̕\��
	DrawGraph(0, 0, GameTitleImage, FALSE);
}