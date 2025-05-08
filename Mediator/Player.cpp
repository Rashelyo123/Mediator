#include "Player.h"
#include <iostream>

Player::Player(GameEventMediator& m, Enemy& e) : mediator(m), enemy(e) {}

void Player::attack() {
    std::cout << "\nPlayer menyerang musuh!\n";
    enemy.takeDamage(50);
    mediator.triggerEvent("attack");
}
