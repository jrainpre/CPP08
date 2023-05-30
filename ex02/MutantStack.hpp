#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <list>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack &operator=(const MutantStack &copy);
		~MutantStack();
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return std::stack<T>::c.begin();}
		iterator  begin_const() const {return std::stack<T>::c.begin();}
		iterator end() {return std::stack<T>::c.end();}
		iterator  end_const()const {return std::stack<T>::c.end();}
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
	if (this != &copy)
		this->c = copy.c;
	return (*this);
}



#endif