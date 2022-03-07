#include <iostream>

int add(int x, int y) { return x + y; }

int multiply(int x, int y) { return x * y; }

int returnFive() { return 5; }

int main() {
	std::cout << returnFive << '\n';

	// main();  // hmm, learncpp.com wrong, again!!?  &-:

	std::cout << add(4, 5) << '\n';

	// within add() x=3, y=12, so x+y=15
	std::cout << add(1 + 2, 3 * 4) << '\n';

	int a{ 5 };
	std::cout << add(a, a) << '\n';

	// evaluates 1 + (2 * 3)
	std::cout << add(1, multiply(2, 3)) << '\n';

	// evaluates 1 + (2 + 3)
	std::cout << add(1, add(2, 3)) << '\n';

	return 0;
}
