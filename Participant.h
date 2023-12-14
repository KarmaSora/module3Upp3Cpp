#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <iostream>
#include <string>
class Participant
{

public:
	Participant();
	Participant(std::string name, std::string gender);
	~Participant();

	virtual std::string toString() const =0;
	bool contains(std::string str);
private:
	std::string name;
	std::string gender;

};


#endif // !PARTICIPANT_H
