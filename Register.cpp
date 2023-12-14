#include "Register.h"

Register::Register()
    :cap(5), nrOfAttendies(0)
{
    attendentsPtr = new Participant*[cap];
}

Register::Register(const Register &other)

{
    if (this != &other) {


        //tom ptr
        dryClean();


        //copy
        this->nrOfAttendies = other.nrOfAttendies;
        this->cap = other.cap;

        //this->attendentsPtr = other.attendentsPtr;


        for (int i = 0; i < nrOfAttendies; i++)
        {
            this->attendentsPtr[i] = other.attendentsPtr[i];

        }

    }
}

Register::~Register()
{
    dryClean();

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
    for (int i = 0; i < this->nrOfAttendies; i++) {
        if (attendentsPtr[i]->getName() == name) {
            return true;

        }
    }
    return false;
}

/*clears everything*/
void Register::dryClean()
{
    for (int i = 0; i < nrOfAttendies; i++) {
        delete attendentsPtr[i];

    }
    delete[] attendentsPtr;
}

bool Register::operator=(Register& other)
{
    if (this != &other) {

        dryClean();
        this->nrOfAttendies = other.nrOfAttendies;
        this->cap = other.cap;

        for (int i = 0; i < nrOfAttendies; i++)
        {
            this->attendentsPtr[i] = other.attendentsPtr[i];

        }

        return true;
    
    }
}

