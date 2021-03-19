#ifndef __MAXTEMPBREAKCONDITION_H__
#define __MAXTEMPBREAKCONDITION_H__

#include <iostream>
#include "IOutputBreakCondition.h"
using namespace std;

class MaxTempBreakCondition : public IOutputBreakCondition
{
    public:
        MaxTempBreakCondition(shared_ptr<Notifier> notifier){}
        void startBreakCondition()
        {
            cout << "MaxTempBreakCondition not implemented. Moving to next step..." << endl;
        }
};

#endif // __MAXTEMPBREAKCONDITION_H__