#include "Span.hpp"

int main()
{
	srand(time(NULL));

	Span sp = Span(100);
	for (int i = 0; i < 100; i++)
		sp.addNumber(rand());
	std::cout << "shortest span: " << sp.longestSpan() << std::endl;
}