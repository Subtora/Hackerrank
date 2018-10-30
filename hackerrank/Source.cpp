#include <iostream>
#include <string>
#include <vector>
#define Pause std::cin.get();

void vecForEach(const std::vector<std::string>& values, void(*func)(std::string)) {
	for (auto i : values)
		func(i);
}
int main() {
	std::vector<std::string> values;
	values.reserve(3);
	values = {"Hello"," ", "World", "!"};
	vecForEach(values, [](std::string i) {std::cout << i; });

	Pause;
}