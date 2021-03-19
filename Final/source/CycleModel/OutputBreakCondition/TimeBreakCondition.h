#ifndef __TIMEBREAKCONDITION_H__
#define __TIMEBREAKCONDITION_H__

#include "IOutputBreakCondition.h"
using namespace std;

class TimeBreakCondition : public IOutputBreakCondition
{
    public:
        TimeBreakCondition(shared_ptr<Notifier> notifier);
        void startBreakCondition();

    private:
        shared_ptr<Notifier> m_notifier;
};

#endif // __TIMEBREAKCONDITION_H__