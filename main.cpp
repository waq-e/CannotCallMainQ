#include <iostream>

int returnFive() {
	return 5;
}

int main() {
	std::cout << returnFive << '\n';

	main();  // hmm, learncpp.com wrong, again!!?  &-:
	return 0;
}
