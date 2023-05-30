#include "Span.hpp"

int main()
{
	srand(time(NULL));

	Span sp = Span(100);
	for (int i = 0; i < 100; i++)
		sp.addNumber(rand());
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;


	Span sp_small = Span(5);
	sp_small.addNumber(5);
	sp_small.addNumber(3);
	sp_small.addNumber(17);
	sp_small.addNumber(9);
	sp_small.addNumber(11);
	std::cout << "longest span: " << sp_small.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp_small.shortestSpan() << std::endl;
	std::cout << sp_small << std::endl;
	Span sp_small_copy = sp_small;
	std::cout << sp_small_copy << std::endl;

	// try
	// {
		
	// Span sp_error = Span(100);
	// for (int i = 0; i < 101; i++)
	// 	sp_error.addNumber(rand());
	// std::cout << "longest span: " << sp_error.longestSpan() << std::endl;
	// std::cout << "shortest span: " << sp_error.shortestSpan() << std::endl;

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	std::vector<int> range (10000, 2);
	range[9999] = 0;
	range[88] = 800;
	Span sp_to_fill = Span(10000);
	sp_to_fill.addNumber(range.begin(), range.end());
	std::cout << "longest span: " << sp_to_fill.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp_to_fill.shortestSpan() << std::endl;

	try
	{
		Span sp_to_fill_error = Span(10000);
		std::vector<int> range_error_insert (10001, 4);
		sp_to_fill_error.addNumber(range_error_insert.begin(), range_error_insert.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}