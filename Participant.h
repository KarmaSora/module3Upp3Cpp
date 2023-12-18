#ifndef PARTICIPANT_H
#define PARTICIPANT_H
#include <iostream>
#include <string>
class Participant
{

public:
	Participant();
	Participant(std::string name, std::string gender);
	virtual ~Participant();

	virtual std::string toString() const =0;
	bool contains(std::string str);
	
	virtual Participant *clone() const = 0;

	std::string getName() const;
	std::string getGender() const;
private:
	std::string name;
	std::string gender;

};


#endif // !PARTICIPANT_H
