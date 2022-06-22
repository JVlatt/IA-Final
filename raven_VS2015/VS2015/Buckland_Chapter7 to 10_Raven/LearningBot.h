#pragma once
#include "Raven_Bot.h"
#include "Raven_Game.h"
#include "CData.h"
#include "CNeuralNet.h"

class LearningBot : public Raven_Bot
{
private:
	CNeuralNet m_ModeleAppris;
	float timeAlive = 0;
	int hitNb = 0;

public:

	LearningBot(Raven_Game* world, Vector2D pos);
	~LearningBot();


	void Update();
	void SetDead(); 
	bool HandleMessage(const Telegram& msg);

};

