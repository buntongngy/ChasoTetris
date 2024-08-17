#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
	Game();
	~Game();
	int score;

	void Draw();
	void HandleInput();
	void HoldBlock();
	void MoveBlockDown();
	void Reset();
	void SetSpeed(double speed) { this->speed = speed; }

	bool gameOver;
	bool heldBlock;
	bool canHold;
	bool canRotate;
	

	std::vector<Block> GetAllBlocks();
	Block holdBlock;

	Music music;

	static double chaosTimer;

	void UpdateChaos(Game game);

private:
	double lockDelay = 0.05;
	double lockTime = 0;
	double speed = 0.2;
	int moveCounter = 0;
	int moveLimit = 5;

	Grid grid;

	void MoveBlockLeft();
	void MoveBlockRight();
	void RotateBlock();
	void LockBlock();
	void updateScore(int lineClear, int movePoint);

	bool isOutofBound();
	bool BlockFits();

	std::vector<Block> blocks;

	Block GetRandomBlock();
	Block currentBlock;
	Block nextBlock;
	

	Sound rotateSound;
	Sound clearSound;
	Sound gameOverSound;

	friend void UpdateChaos(Game game);
};

