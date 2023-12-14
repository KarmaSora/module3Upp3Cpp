#include "Register.h"

Register::Register()
    :cap(5), nrOfAttendies(0)
{
    attendentsPtr = new Participant*[cap];
}

Register::Register(Register& other)

{
    if (this != &other) {

        //copy
        this->nrOfAttendies = other.nrOfAttendies;
        this->cap = other.cap;
        this->attendentsPtr = other.attendentsPtr;

    }
}

Register::~Register()
{
    for (int i = 0; i < nrOfAttendies; i++) {
        delete attendentsPtr[i];

    }
    delete[] attendentsPtr;
}

void Register::addRunner(const std::string& name, const std::string& gender, int age)
{
    if (this->nrOfAttendies == this->cap) {
        this->cap++;
    }
    this->attendentsPtr[nrOfAttendies++] = new Runner(name, gender, age);

}

void Register::addElite(const std::string& name, const std::string& gender, const std::string& club, int seasonCount)
{
    if (this->nrOfAttendies == this->cap) {
        this->cap++;
    }
    this->attendentsPtr[nrOfAttendies++] = new Elite(name, gender, club, seasonCount);

}

int Register::getParticipantCount()
{
    return this->nrOfAttendies;
}

bool Register::searchAttendie(std::string name)
{
    bool status=false;
    for (int i = 0; i < this->nrOfAttendies; i++) {
        if (attendentsPtr[i]->getName() == name) {
            status = true;

        }
    }
    return status;
}

bool Register::operator=(Register& other)
{
    for (int i = 0; i < this->nrOfAttendies; i++) {
       delete this->attendentsPtr[i];
    }
    delete[] this->attendentsPtr;

    this->nrOfAttendies = other.nrOfAttendies;
    this->cap = other.cap;
    this->attendentsPtr = other.attendentsPtr;

    return true;
}
