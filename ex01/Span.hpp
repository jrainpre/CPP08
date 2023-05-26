// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor.
// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
// Of course, you will write your own tests and they will be way more thorough than the
// ones below. Test your Span at least with a minimum of 10 000 numbers. More would be
// even better

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <exception>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_v;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();
		void	addNumber(int i);
		int		shortestSpan();
		int		longestSpan();
		std::vector<int> getV();
		class Full : public std::exception
		{
			public:		
				virtual const char* what() const throw(){return "container is full";}
		};
		class NoSpan : public std::exception
		{
			public:		
				virtual const char* what() const throw(){return "there is no span with this number pair";}
		};
};

std::ostream &operator<<(std::ostream &stream, const Span &span);



#endif