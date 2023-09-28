#pragma once
#include <iostream>
using namespace std;

class Dog {

private:
    int age;
    std::string name;
    bool hasOwner;
    std::string breed;

public:
    string getName();
    Dog(int _age, const std::string& _name, bool _hasOwner, const std::string& _breed) :
        age(_age), name(_name), hasOwner(_hasOwner), breed(_breed) {}
};