//
// Created by Kris on 1/5/2021.
//

#ifndef PROYECTO2ANALISIS_STRETCH_H
#define PROYECTO2ANALISIS_STRETCH_H

#include <string>

using namespace std;

namespace headers {
    /*
     * This is the class Stretch, this will have the information from the JSON file (tramos)
     * */

    class Stretch {

    public:
        Stretch(short pKmStart, short pKmEnd, short pFirmness, short pHumidity, short pGrip);

    private:
        short kmStart;
        short kmEnd;
        short firmness;
        short humidity;
        short grip;
    };
}

#endif //PROYECTO2ANALISIS_STRETCH_H
