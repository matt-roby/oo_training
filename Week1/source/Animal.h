#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal(int age, string gender, int weightInLbs):
            m_age(age),
            m_gender(gender),
            m_weightInLbs(weightInLbs)
        {            
        }

        void eat()
        {
            cout << "Eating..." << endl;
        }

        void sleep()
        {
            cout << "Sleeping..." << endl;
        }

        virtual void move() = 0;

    private:
        int m_age;
        string m_gender;
        int m_weightInLbs;
};

#endif