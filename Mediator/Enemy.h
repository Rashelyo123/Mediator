#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
public:
    int health = 100;

    void takeDamage(int amount);
    bool isDead() const;
};

#endif
