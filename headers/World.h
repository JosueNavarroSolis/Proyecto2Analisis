//
// Created by famil on 1/6/2021.
//
#include <iostream>
#include "Car.h"
#include "Ground.h"
#include <vector>

using namespace std;

#ifndef PROYECTO2ANALISIS_WORLD_H
#define PROYECTO2ANALISIS_WORLD_H

class World{

public:

    vector<Car> cars;
    vector<ground> grounds;
    int numbresofcars;
    int generation;

};

#endif //PROYECTO2ANALISIS_WORLD_H
