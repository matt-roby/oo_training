#ifndef __JSONCYCLEDAO_H__
#define __JSONCYCLEDAO_H__

#include "ICycleDAO.h"
#include "CycleModel/OutputStepData.h"
#include "library/rapidjson/include/rapidjson/document.h"
#include <string>
#include <vector>
using namespace std;

static const string JSON_DATABASE_FILE_NAME {"database.json"};

class JSONCycleDAO : public ICycleDAO
{
    public:
        JSONCycleDAO();
        void createNewCycle(string id);
        void createNewStep(string parent, OutputStepData step);
        vector<OutputStepData> getCycleSteps(string id);
    private:
        rapidjson::Document openJsonFile();
};

#endif // __JSONCYCLEDAO_H__