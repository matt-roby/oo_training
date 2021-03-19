#ifndef __OUTPUTSTEPFACTORY_H__
#define __OUTPUTSTEPFACTORY_H__

#include "CycleModel/OutputStep.h"
#include "CycleModel/OutputStepData.h"
#include <memory>
#include <vector>
#include <string>
using namespace std;

static const string OUTPUTTYPE_SQUARE {"square"};
static const string OUTPUTTYPE_SINE {"sine"};
static const string BREAKCONDITION_TIME {"time"};
static const string BREAKCONDITION_TEMP {"temp"};
static const string BREAKCONDITION_MAXTEMP {"temp_max"};

class OutputStepFactory
{
    public:
        OutputStepFactory();
        unique_ptr<OutputStep> createOutputStep(OutputStepData step);
        bool isStepDataValid(OutputStepData step);

    private:
        vector<string> VALID_OUTPUTTYPE;
        vector<string> VALID_BREAKCONDITION;
};

#endif // __OUTPUTSTEPFACTORY_H__