#include "State.hpp"
#include "Matcher.hpp"

int	main(int, char **av)
{
	FSA		fsa;

	/* LAMBDA EDGE */
	State *state0 = State::createState();
	State *state18 = State::createState();
	state18->setFinal(true);

	/* MECHANT */

	State *state1 = State::createState();
	State *state2 = State::createState();
	State *state3 = State::createState();
	State *state4 = State::createState();
	State *state5 = State::createState();
	State *state6 = State::createState();
	State *state7 = State::createState();
	State *state8 = State::createState();

	/* CRIMINEL */
	State *state9 = State::createState();
	State *state10 = State::createState();
	State *state11 = State::createState();
	State *state12 = State::createState();
	State *state13 = State::createState();
	State *state14 = State::createState();
	State *state15 = State::createState();
	State *state16 = State::createState();
	State *state17 = State::createState();

	/* LINK */
	state0->setLink("S1", Edge(0));
	state0->setLink("S9", Edge(0));

	state1->setLink("S2", Edge('m'));
	state2->setLink("S3", Edge('e'));
	state3->setLink("S4", Edge('c'));
	state4->setLink("S5", Edge('h'));
	state5->setLink("S6", Edge('a'));
	state6->setLink("S7", Edge('n'));
	state7->setLink("S8", Edge('t'));
	state8->setLink("S18", Edge(0));

	state9->setLink("S10", Edge('c'));
	state10->setLink("S11", Edge('r'));
	state11->setLink("S12", Edge('i'));
	state12->setLink("S13", Edge('m'));
	state13->setLink("S14", Edge('i'));
	state14->setLink("S15", Edge('n'));
	state15->setLink("S16", Edge('e'));
	state16->setLink("S17", Edge('l'));
	state17->setLink("S18", Edge(0));	

	/* ADDSTATE */
	fsa.addState(*state0);
	fsa.addState(*state1);
	fsa.addState(*state2);
	fsa.addState(*state3);
	fsa.addState(*state4);
	fsa.addState(*state5);
	fsa.addState(*state6);
	fsa.addState(*state7);
	fsa.addState(*state8);
	fsa.addState(*state9);
	fsa.addState(*state10);
	fsa.addState(*state11);
	fsa.addState(*state12);
	fsa.addState(*state13);
	fsa.addState(*state14);
	fsa.addState(*state15);
	fsa.addState(*state16);
	fsa.addState(*state17);
	fsa.addState(*state18);

	fsa.closure(*state0);

	fsa.move('m');
	fsa.move('c');

//	Matcher matcher(fsa);

//	std::cout << "matcher created" << std::endl;
	
/*	if (matcher.find("mechant")) {
		std::cout << "matched :D" << std::endl;
	}
	*/
	return 1;
}
