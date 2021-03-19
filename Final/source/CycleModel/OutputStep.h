#ifndef __OUTPUTSTEP_H__
#define __OUTPUTSTEP_H__

#include <memory>
#include "OutputBreakCondition/IOutputBreakCondition.h"
#include "common/Notifier.h"
#include "OutputType/IOutputType.h"
using namespace std;

class OutputStep
{
    public:
        OutputStep(unique_ptr<IOutputType> outputType, 
                   unique_ptr<IOutputBreakCondition> outputCondition, 
                   shared_ptr<Notifier> notifier);
        void run();

    private:
        unique_ptr<IOutputType> m_outputType;
        unique_ptr<IOutputBreakCondition> m_outputCondition;
        shared_ptr<Notifier> m_notifier;
};

#endif // __OUTPUTSTEP_H__