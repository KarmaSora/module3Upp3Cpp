#include "Runner.h"

Runner::Runner()
    :Participant(), age(12)
{
}

Runner::Runner(std::string name, std::string gender, int age)
    : Participant(name,gender), age(age)
{
}

Runner::~Runner()
{
}

int Runner::getAge() const
{
    return this->age;
}

std::string Runner::toString() const
{
    return Participant::toString() + " age: " +std::to_string(age) ;
}
