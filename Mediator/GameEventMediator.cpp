#include "GameEventMediator.h"
#include <iostream>

void GameEventMediator::registerEvent(const std::string& eventName, std::function<void()> callback) {
    listeners[eventName].push_back(callback);
}

void GameEventMediator::triggerEvent(const std::string& eventName) {
    std::cout << "Event : " << eventName << "\n";
    for (const auto& callback : listeners[eventName]) {
        callback();
    }
}
