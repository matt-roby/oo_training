#ifndef __IOUTPUTBREAKCONDITION_H__
#define __IOUTPUTBREAKCONDITION_H__

#include <memory>
#include "common/Notifier.h"
using namespace std;

class IOutputBreakCondition
{
    public:
        ~IOutputBreakCondition() = default;
        virtual void startBreakCondition() = 0;
};

#endif // __IOUTPUTBREAKCONDITION_H__