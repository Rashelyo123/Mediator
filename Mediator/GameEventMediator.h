#ifndef GAME_EVENT_MEDIATOR_H
#define GAME_EVENT_MEDIATOR_H

#include <string>
#include <vector>
#include <functional>
#include <unordered_map>

class GameEventMediator {
public:
    void registerEvent(const std::string& eventName, std::function<void()> callback);
    void triggerEvent(const std::string& eventName);

private:
    std::unordered_map<std::string, std::vector<std::function<void()>>> listeners;
};

#endif
