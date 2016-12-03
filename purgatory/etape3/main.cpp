#include "State.hpp"
#include "Matcher.hpp"

int	main(int, char **av)
{
	FSA		fsa;

	State *state0 = State::createState();
	state0->setLink("S1", Edge('m'));
	fsa.addState(*state0);
	std::cout << "state0 added" << std::endl;
	State *state1 = State::createState();
	state1->setLink("S2", Edge('e'));
	fsa.addState(*state1);
	std::cout << "state1 added" << std::endl;
	State *state2 = State::createState();
	state2->setLink("S3", Edge('c'));
	fsa.addState(*state2);
	std::cout << "state2 added" << std::endl;
	State *state3 = State::createState();
	state3->setLink("S4", Edge('h'));
	fsa.addState(*state3);
	std::cout << "state3 added" << std::endl;
	State *state4 = State::createState();
	state4->setLink("S5", Edge('a'));
	fsa.addState(*state4);
	std::cout << "state4 added" << std::endl;
	State *state5 = State::createState();
	state5->setLink("S6", Edge('n'));
	fsa.addState(*state5);
	std::cout << "state5 added" << std::endl;
	State *state6 = State::createState();
	state6->setLink("S7", Edge('t'));
	fsa.addState(*state6);
	std::cout << "state6 added" << std::endl;
	State *state7 = State::createState();
	state7->setFinal(true);
	fsa.addState(*state7);
	std::cout << "state7 added" << std::endl;

	Matcher matcher(fsa);

	std::cout << "matcher created" << std::endl;
	
	if (matcher.find("mechant")) {
		std::cout << "matched :D" << std::endl;
	}

	return 1;
}
