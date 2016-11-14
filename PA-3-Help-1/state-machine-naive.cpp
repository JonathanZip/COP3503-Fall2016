#include <iostream>

#define STATE_FOR_OR_OP 0
#define STATE_PROCESS_FOR 1
#define STATE_PROCESS_END 2
#define STATE_PROCESS_FOR_1 3

// a state machine using constant values. NOT reccomended!

int main() {
	std::ifstream file("input.txt");
	for (;;) {
		std::string nextInput;
		file >> nextInput;
		int state = STATE_FOR_OR_OP;
		switch (state) {
		case STATE_PROCESS_FOR:
			stateOneAction();
			break;
		case STATE_PROCESS_END:
		case 2:
			stateTwoAction();
			break;
		}
	}
}
