#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <exception>

// A first easy exercise is the way to start off on the right foot.
// Write a function template easyfind that accepts a type T. It takes two parameters.
// The first one has type T and the second one is an integer.
// Assuming T is a container of integers, this function has to find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, you can either throw an exception or return an error value
// of your choice. If you need some inspiration, analyze how standard containers behave.
// Of course, implement and turn in your own tests to ensure everything works as expected.

class NotFound : public std::exception
{
	public:		
		virtual const char* what() const throw(){return "value not found in container";}
};


template <typename T>
void	easyfind(T &container, int i)
{
	if (std::find(container.begin(), container.end(), i) != container.end())
		std::cout << "value found" <<std::endl;
	else
		throw NotFound();
}

#endif