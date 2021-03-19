#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal
{
    public:
        Bird(int age, string gender, int weightInLbs):
            Animal(age,gender,weightInLbs),
            m_age(age),
            m_gender(gender),
            m_weightInLbs(weightInLbs)
        {
        }

        void move() override
        {
            cout << "Flapping wings..." << endl;
        }

    private:
        int m_age;
        string m_gender;
        int m_weightInLbs;
};

#endif