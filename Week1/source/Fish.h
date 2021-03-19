#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal
{
    public:
        Fish(int age, string gender, int weightInLbs):
            Animal(age,gender,weightInLbs),
            m_age(age),
            m_gender(gender),
            m_weightInLbs(weightInLbs)
        {
        }

        void swim()
        {
            cout << "Swimming..." << endl;
        }

        void move() override
        {
            cout << "fish is swimming..." << endl;
        }

    private:
        int m_age;
        string m_gender;
        int m_weightInLbs;
};

#endif