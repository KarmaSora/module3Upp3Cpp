#ifndef REGISTER_H
#define REGISTER_H
#include "Elite.h"
#include "Runner.h"

class Register
{
public:
	Register();
	~Register();

	void addRunner(const std::string &name, const std::string &gender, int age);
	void addElite(const std::string &name, const std::string &gender, const std::string &club, int seasonCount);
	int getParticipantCount();



private:
	int nrOfAttendies;
	int cap;
	Participant* attendentsPtr = nullptr;

};


#endif // !REGISTER_H
