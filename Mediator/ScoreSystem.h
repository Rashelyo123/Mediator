#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "Enemy.h"

class ScoreSystem {
public:
    ScoreSystem(Enemy& e);
    void addScoreIfEnemyDead();

private:
    Enemy& enemy;
    bool alreadyScored = false;
};

#endif
