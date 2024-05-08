//Robocop.cpp
#include "RoboCop.h"

RoboCop::RoboCop(const std::string& name, int posX, int posY) : Robot(name, posX, posY) {}

RoboCop::~RoboCop() {}

void RoboCop::look() const {
    // Implement look action for RoboCop
}

void RoboCop::move(int deltaX, int deltaY) {
    // Implement move action for RoboCop
}

void RoboCop::fire(int targetX, int targetY) {
    // Implement fire action for RoboCop
}
