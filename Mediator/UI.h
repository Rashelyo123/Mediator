#ifndef UI_H
#define UI_H

#include "Enemy.h"

class UI {
public:
    UI(Enemy& e);
    void updateHealth();

private:
    Enemy& enemy;
};

#endif
