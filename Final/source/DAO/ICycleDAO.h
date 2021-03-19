#ifndef __ICYCLEDAO_H__
#define __ICYCLEDAO_H__

class ICycleDAO
{
    public:
        virtual void createNewCycle(string id) = 0;
        virtual void createNewStep(string parent, OutputStepData step) = 0;
        virtual vector<OutputStepData> getCycleSteps(string id) = 0;
};

#endif // __ICYCLEDAO_H__