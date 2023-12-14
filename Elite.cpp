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

std::string Elite::toString() const
{
    return Participant::toString() + " club: " + club+ " seasonCOunt "+ std::to_string(seasonCount);
}

std::string Elite::getClub() const
{
    return this->club;
}
