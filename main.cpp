#include "Register.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Register reg;
	reg.addElite("Elit", "Heavenly", "Demonic",4);  //fix here
	reg.addRunner("karma", "male", 33);
	reg.addRunner("Sora", "Heavenly", 33);

	std::cout<<reg.getParticipantCount()<<std::endl;
	
	if (reg.searchAttendie("instantkarma") == true) {
		std::cout<<"\n\nfound\n\n";
	}

	Register bReg;
	bReg = reg; //fix this here


	//std::cout<<bReg.getParticipantCount();
	std::cout << bReg.toString();



	return 0;
}



/*

//	Copy constructor
	deepCopy
	use dynamic cast		(Must Learn!!!)

*/

/*
// TIlldelning operator

	always selfCheck		if(this! = &other)

	
	*/