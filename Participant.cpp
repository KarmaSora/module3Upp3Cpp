#include "Participant.h"

Participant::Participant()
    : name("huMan"), gender("Man")
{
}

Participant::Participant(std::string name, std::string gender)
    : name(name),gender(gender)
{
}

Participant::~Participant()
{
}

std::string Participant::toString() const
{
    return "name: "+ name+" gender: " +gender;
}

bool Participant::contains(std::string str)
{   
    if (this->toString().find(str)) {
        return true;
    }
    return false;
}

std::string Participant::getName() const
{
    return this->name;
}

std::string Participant::getGender() const
{
    return this->gender;
}
