#include "UI.h"
#include <iostream>

UI::UI(Enemy& e) : enemy(e) {}

void UI::updateHealth() {
    std::cout << "UI: Health musuh sekarang: " << enemy.health << "\n";
}
