#include "Sparrow.h"
#include "Fish.h"
#include "memory"

using namespace std;

void moveAnimal(shared_ptr<Animal> animal)
{
    animal->move();
}

int main()
{
    shared_ptr<Animal> sparrow1 = make_shared<Sparrow>(1,"M",4);
    moveAnimal(sparrow1);

    shared_ptr<Animal> fish1 = make_shared<Fish>(1, "M", 2);
    moveAnimal(fish1);

    auto flyingBird = make_shared<Sparrow>(1,"M",4);
    flyingBird->fly();

    return 0;
}

