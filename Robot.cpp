//Robot1.cpp
#include "Robot.h"

Robot::Robot(const std::string& name, int posX, int posY) : name(name), posX(posX), posY(posY) {}

Robot::~Robot() {}

void Robot::look() const {
    // Implement look action
}

void Robot::move(int deltaX, int deltaY) {
    // Implement move action
}

void Robot::fire(int targetX, int targetY) {
    // Implement fire action
}



