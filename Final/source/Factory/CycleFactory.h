#ifndef __CYCLEFACTORY_H__
#define __CYCLEFACTORY_H__

#include "OutputStepFactory.h"
#include "CycleModel/Cycle.h"
#include "DAO/ICycleDAO.h"
#include <string>
using namespace std;

class CycleFactory
{
    public:
        CycleFactory(shared_ptr<ICycleDAO> cycleDAO, shared_ptr<OutputStepFactory> outputStepFactory);
        Cycle buildCycle(string id);
    private:
        shared_ptr<ICycleDAO> m_cycleDAO;
        shared_ptr<OutputStepFactory> m_outputStepFactory;
};

#endif // __CYCLEFACTORY_H__