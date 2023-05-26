#include "Span.hpp"

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	_N = copy._N;
	_v = copy._v;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int i)
{
	if (_v.size() >= _N)
		throw Span::Full();
	_v.push_back(i);
}

int		Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> copy = _v;
	std::sort(copy.begin(), copy.end());
	int min = copy[1] - copy[0];
	for (unsigned int i = 1; i < copy.size(); i++)
	{
		if (copy[i] - copy[i - 1] < min)
			min = copy[i] - copy[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if (_v.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> copy = _v;
	std::sort(copy.begin(), copy.end());
	return copy[copy.size() - 1] - copy[0];
}

std::ostream &operator<<(std::ostream &stream, const Span &span)
{
	for (unsigned int i = 0; i < span._v.size(); i++)
		stream << span._v[i] << " ";
	return stream;
}