//
// Created by Kris on 1/5/2021.
//

#include <iostream>
#include "../headers/Stretch.h"

using namespace headers;
using namespace std;

Stretch::Stretch(short pKmStart, short pKmEnd, short pFirmness, short pHumidity, short pGrip) {
    kmStart = pKmStart;
    kmEnd = pKmEnd;
    firmness = pFirmness;
    humidity = pHumidity;
    grip = pGrip;
}
