#include "Elite.h"

Elite::Elite()
    :Participant(), club("clover"), seasonCount(3)
{
}

Elite::Elite(std::string name, std::string gender, std::string club, int seasonCount)
    :Participant(name,gender), club(club), seasonCount(seasonCount)
{
}

Elite::~Elite()
{
}


Elite::Elite(const Elite& other)
{
    this->club = other.club;
    this->seasonCount = other.seasonCount;
   
}

std::string Elite::toString() const
{
    return Participant::toString() + " club: " + club+ " seasonCOunt "+ std::to_string(seasonCount);
}

std::string Elite::getClub() const
{
    return this->club;
}

Elite* Elite::clone() const
{
    return new Elite(*this);
}
