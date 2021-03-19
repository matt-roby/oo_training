#ifndef __CYCLE_H__
#define __CYCLE_H__

#include <vector>
#include <memory>
#include "OutputStep.h"
using namespace std;

class Cycle
{
    public:
        Cycle();
        void run();
        void addStep(unique_ptr<OutputStep> outputStep);
    private:
        vector<unique_ptr<OutputStep>> m_steps;
};

#endif // __CYCLE_H__