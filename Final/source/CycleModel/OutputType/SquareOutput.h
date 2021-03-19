#ifndef __SQUAREOUTPUT_H__
#define __SQUAREOUTPUT_H__

#include <iostream>
#include "IOutputType.h"
using namespace std;

class SquareOutput : public IOutputType
{
    public:
        SquareOutput(){}
        void startOutput()
        {
            cout << "Starting square wave output..." << endl;
        }
};

#endif // __SQUAREOUTPUT_H__