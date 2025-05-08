#include "ScoreSystem.h"
#include <iostream>

ScoreSystem::ScoreSystem(Enemy& e) : enemy(e) {}

void ScoreSystem::addScoreIfEnemyDead() {
    if (enemy.isDead() && !alreadyScored) {
        std::cout << "ScoreSystem: Musuh mati. Tambah skor!\n";
        alreadyScored = true;
    }
    else if (!enemy.isDead()) {
        std::cout << "ScoreSystem: Musuh belum mati.\n";
    }
}
