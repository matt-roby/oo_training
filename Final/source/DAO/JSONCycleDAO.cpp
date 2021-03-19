#include "JSONCycleDAO.h"

#include <iostream>
#include <fstream>

JSONCycleDAO::JSONCycleDAO() 
{
    
}

rapidjson::Document openJsonFile()
{
    rapidjson::Document document;
    ifstream jsonFile(JSON_DATABASE_FILE_NAME);
    string json;
    jsonFile >> json;
    return document;
}

void JSONCycleDAO::createNewCycle(string id) 
{
    rapidjson::Document document = openJsonFile();
    
    bool isIdInDB = false; //TODO

    if(isIdInDB)
    {
        cerr << "Id \"" << id << "\" alread exists in database" << endl;
        return;
    }


}

void JSONCycleDAO::createNewStep(string parent, OutputStepData step) 
{
    
}

vector<OutputStepData> JSONCycleDAO::getCycleSteps(string id) 
{
    vector<OutputStepData> steps;


    return steps;
}
