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
    for (int i = 0; i < this->nrOfAttendies; i++) {
        delete this->attendentsPtr[i];

    }
    delete[] this->attendentsPtr;
    this->cap = 5;
    this->nrOfAttendies = 0;
}

Register& Register::operator=(const Register& other)
{
    if (this != &other) {
        dryClean();

            // Rest of the assignment logic...
        this->attendentsPtr = new Participant * [other.cap] {nullptr};

        this->nrOfAttendies = other.nrOfAttendies;
        this->cap = other.cap;

        /*for (int i = 0; i < nrOfAttendies; i++){
            this->attendentsPtr[i] = other.attendentsPtr[i]->clone();
                
        }*/

        for (int i = 0; i < nrOfAttendies; i++) {
            
            Elite* elPtr = dynamic_cast<Elite*>(other.attendentsPtr[i]);
            if(elPtr){
            this->attendentsPtr[i] = new Elite(*elPtr);
            }
            Runner* runPtr = dynamic_cast<Runner*>(other.attendentsPtr[i]);
             if(runPtr){
                this->attendentsPtr[i] = new Runner(*runPtr);
             }
        }
        
    
    }
    return *this;
}

