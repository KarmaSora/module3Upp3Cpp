#ifndef RUNNER_H
#define RUNNER_H
#include "Participant.h"

class Runner:public Participant
{
public:
	Runner();
	Runner(std::string name, std::string gender,int age);
	virtual ~Runner();
	Runner(const Runner& other);
	int getAge() const;
	std::string toString() const override;
	Runner* clone() const override;
private:
	int age;
};

#endif // !RUNNER_H
