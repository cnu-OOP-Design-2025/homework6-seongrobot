#include <iostream>
#include "bird.h"

void Duck::cry() {
    std::cout << "Quack!" << std::endl;
}

Duck::Duck() : Bird("Duck") { 
    this->cry(); 
}

Duck::~Duck() { 
    this->cry(); 
}

void Penguin::cry() {
    std::cout << "Squawk!" << std::endl;
}

void Penguin::fly() {
    std::cout << "This bird can't fly." << std::endl;
}

Penguin::Penguin() : Bird("Penguin") {
    this->cry();
}

Penguin::~Penguin() {
    this->cry();
}

void Eagle::cry() {
    std::cout << "Screech!" << std::endl;
}

void Eagle::swim() {
    std::cout << "This bird can't swim." << std::endl;
}

Eagle::Eagle() : Bird("Eagle") {
    this->cry();
}

Eagle::~Eagle() {
    this->cry();
}