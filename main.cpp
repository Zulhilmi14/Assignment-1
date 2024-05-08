// Main.cpp
#include "Robot.h"
#include "RoboCop.h"
#include "Battlefield.h"
#include <iostream>
using namespace std;

int main() {
    int width, height;
    string robot;

    cout << "Choose the width of the battlefield: ";
    cin >> width;

    cout << "Choose the height of the battlefiled: ";
    cin >> height;

    cout << "Where you want to deploy your Robot ";
    cin >> robot;


    Battlefield battlefield(width, height);

    // Create robots and place them on the battlefield
    RoboCop roboCop("RoboCop", 10, 10);
    battlefield.placeRobot(roboCop);

    // Display the initial battlefield
    battlefield.display();

    // Run the simulation
    // Implement simulation logic here

    return 0;
}
