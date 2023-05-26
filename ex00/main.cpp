#include "easyfind.h"

int main()
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	try
	{
	easyfind(v, 3);
	easyfind(v, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::list<int> l;
	for (int i = 0; i < 5; i++)
		l.push_back(i);
	try
	{
	easyfind(v, 3);
	easyfind(v, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
	easyfind(v, 3);
	easyfind(v, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}