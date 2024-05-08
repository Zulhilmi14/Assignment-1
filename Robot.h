// Robot1.h
#pragma once
#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
public:
    Robot(const std::string& name, int posX, int posY);
    virtual ~Robot();

    // Methods for actions (look, move, fire)
    virtual void look() const;
    virtual void move(int deltaX, int deltaY);
    virtual void fire(int targetX, int targetY);

protected:
    std::string name;
    int posX;
    int posY;
};

#endif // ROBOT_H
