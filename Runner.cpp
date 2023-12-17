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

Runner::Runner(const Runner& other)
    : Participant(other.getName(), other.getGender())
{
    
    this->age = other.age;
}

int Runner::getAge() const
{
    return this->age;
}

std::string Runner::toString() const
{
    return Participant::toString() + " age: " +std::to_string(age) ;
}

Runner* Runner::clone() const
{
    return new Runner(*this);
}
