#ifndef REGISTER_H
#define REGISTER_H
#include "Elite.h"
#include "Runner.h"

class Register
{
public:
	Register();
	Register(const Register &other);

	~Register();

	void addRunner(const std::string &name, const std::string &gender, int age);
	void addElite(const std::string &name, const std::string &gender, const std::string &club, int seasonCount);
	int getParticipantCount();
;	bool searchAttendie(std::string name);
	void dryClean();

	Register& operator=(const Register &other);
	std::string toString() ;

private:
	int nrOfAttendies;
	int cap;
	Participant** attendentsPtr;

};


#endif // !REGISTER_H
