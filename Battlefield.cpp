//Battlefield.cpp
#include "Battlefield.h"
#include <iostream>

Battlefield::Battlefield(int width, int height) : width(width), height(height) {
    // Initialize grid with empty cells
    grid.resize(height, std::vector<char>(width, '.'));
}

Battlefield::~Battlefield() {}

void Battlefield::display() const {
    // Implement display method to print the battlefield
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Battlefield::placeRobot(const Robot& robot) {
    // Implement method to place a robot on the battlefield
    // For now, let's assume the robot is placed at its initial position
    // We can modify this to place the robot at specific coordinates later
    //grid[robot.posY][robot.posX] = 'R'; // 'R' represents the robot on the grid
}

