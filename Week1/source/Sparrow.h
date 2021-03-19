#ifndef SPARROW_H
#define SPARROW_H

#include "Bird.h"
#include "Flyable.h"

class Sparrow : public Bird, Flyable
{
    public:
        Sparrow(int age, string gender, int weightInLbs):
            Bird(age,gender,weightInLbs),
            m_age(age),
            m_gender(gender),
            m_weightInLbs(weightInLbs)
        {
        }
        
        void fly()
        {
            cout << "Sparrow flying high..." << endl;
        }

    private:
        int m_age;
        string m_gender;
        int m_weightInLbs;
};

#endif