#ifndef __SIGNALGENCYCLECONTROLLER_H__
#define __SIGNALGENCYCLECONTROLLER_H__

#include "DAO/ICycleDAO.h"
#include "Factory/CycleFactory.h"
#include "Factory/OutputStepFactory.h"
#include "CycleModel/Cycle.h"
#include "CycleModel/OutputStepData.h"
#include <string>
#include <memory>
using namespace std;

class SignalGenCycleController
{
    public:
        SignalGenCycleController();
        void newCycle(string id);
        void newStep(string parent, OutputStepData outputStep);
        void runCycle(string id);

    private:
        shared_ptr<ICycleDAO> m_cycleDAO;
        unique_ptr<CycleFactory> m_cycleFactory;
        shared_ptr<OutputStepFactory> m_outputStepFactory;
};

#endif // __SIGNALGENCYCLECONTROLLER_H__