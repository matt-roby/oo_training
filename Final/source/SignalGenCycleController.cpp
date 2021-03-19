#include "SignalGenCycleController.h"
#include "DAO/JSONCycleDAO.h"


SignalGenCycleController::SignalGenCycleController() 
{
    m_cycleDAO = make_shared<JSONCycleDAO>();
    m_outputStepFactory = make_shared<OutputStepFactory>();
    m_cycleFactory = make_unique<CycleFactory>(m_cycleDAO, m_outputStepFactory);
}

void SignalGenCycleController::newCycle(string id) 
{
    m_cycleDAO->createNewCycle(id);
}

void SignalGenCycleController::newStep(string parent, OutputStepData outputStep) 
{
    m_cycleDAO->createNewStep(parent, outputStep);
}

void SignalGenCycleController::runCycle(string id) 
{
    m_cycleFactory->buildCycle(id).run();
}
