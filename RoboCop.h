//Robocop.h
#pragma once
#ifndef ROBOCOP_H
#define ROBOCOP_H

#include <string>
#include "Robot.h"

class RoboCop : public Robot {
public:
    RoboCop(const std::string& name, int posX, int posY);
    virtual ~RoboCop();

    // Override methods for RoboCop's actions
    void look() const override;
    void move(int deltaX, int deltaY) override;
    void fire(int targetX, int targetY) override;
};

#endif // ROBOCOP_H
