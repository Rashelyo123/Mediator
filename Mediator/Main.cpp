#include "GameEventMediator.h"
#include "Player.h"
#include "UI.h"
#include "Sound.h"
#include "ScoreSystem.h"
#include "Enemy.h"

int main() {
    Enemy enemy;
    GameEventMediator mediator;

    UI ui(enemy);
    Sound sound;
    ScoreSystem score(enemy);
    Player player(mediator, enemy);

    // Register event
    mediator.registerEvent("attack", [&]() { ui.updateHealth(); });
    mediator.registerEvent("attack", [&]() { sound.playAttackSound(); });
    mediator.registerEvent("attack", [&]() { score.addScoreIfEnemyDead(); });

    // Dua kali serangan ke enem7y
    player.attack();
    player.attack();

    return 0;
}
