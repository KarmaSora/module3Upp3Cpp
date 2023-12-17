#ifndef ELITE_H
#define ELITE_H
#include "Participant.h"

class Elite: public Participant
{
public:
	Elite();
	Elite(std::string name , std::string gender,std::string club, int seasonCount );
	virtual ~Elite();
	Elite(const Elite& other);
	
	std::string toString() const override;
	std::string getClub() const;
	Elite* clone() const override;

private:
	std::string club;
	int seasonCount;
};

#endif // !ELITE_H
