#include "Register.h"

Register::Register()
    :cap(5), nrOfAttendies(0)
{
}

Register::~Register()
{
}

void Register::addRunner(const std::string& name, const std::string& gender, int age)
{
    
    this->attendentsPtr = new Runner (name,gender,age) ;
}

void Register::addElite(const std::string& name, const std::string& gender, const std::string& club, int seasonCount)
{
}

int Register::getParticipantCount()
{
    return 0;
}
