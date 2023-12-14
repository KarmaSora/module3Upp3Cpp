#ifndef RUNNER_H
#define RUNNER_H
#include "Participant.h"

class Runner:public Participant
{
public:
	Runner();
	Runner(std::string name, std::string gender,int age);
	~Runner();
	int getAge() const;
	std::string toString() const override;
private:
	int age;
};

#endif // !RUNNER_H
