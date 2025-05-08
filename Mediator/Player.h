#ifndef PLAYER_H
#define PLAYER_H

#include "GameEventMediator.h"
#include "Enemy.h"

class Player {
public:
    Player(GameEventMediator& m, Enemy& e);
    void attack();

private:
    GameEventMediator& mediator;
    Enemy& enemy;
};

#endif
