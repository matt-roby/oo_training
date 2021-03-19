#ifndef __SINEOUTPUT_H__
#define __SINEOUTPUT_H__

#include <iostream>
#include "IOutputType.h"
using namespace std;

class SineOutput : public IOutputType
{
    public:
        SineOutput(){}
        void startOutput()
        {
            cout << "Starting sine wave output..." << endl;
        }
};

#endif // __SINEOUTPUT_H__