//Battlefield.h
#pragma once
#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include <vector>
#include "Robot.h"

class Battlefield {
public:
    Battlefield(int width, int height);
    ~Battlefield();

    void display() const;
    void placeRobot(const Robot& robot);

private:
    int width;
    int height;
    std::vector<std::vector<char>> grid;
};

#endif // BATTLEFIELD_H
