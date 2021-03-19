#ifndef __TEMPBREAKCONDITION_H__
#define __TEMPBREAKCONDITION_H__

#include <iostream>
#include "IOutputBreakCondition.h"
using namespace std;

class TempBreakCondition : public IOutputBreakCondition
{
    public:
        TempBreakCondition(shared_ptr<Notifier> notifier){}
        void startBreakCondition()
        {
            cout << "TempBreakCondition not implemented. Moving to next step..." << endl;
        }
};

#endif // __TEMPBREAKCONDITION_H__