#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>

int	main()
{
	{
		std::cout << "===VECTOR===" << std::endl;
		std::vector<int>	v;
		std::cout << "try easyfind(v, 4) whith empty vector: " << std::endl;
		try
		{	
			std::cout << *easyfind(v, 4) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "The vector is filled with 10 numbers from 0 to 9" << std::endl;
		for (int i = 0; i < 10; ++i)
			v.push_back(i);
		std::cout << "easyfind(v, 4) = " << *easyfind(v, 4) << std::endl
		<< "try easyfind(v, 10): " << std::endl;
		try
		{	
			std::cout << *easyfind(v, 10) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "===LIST===" << std::endl;
		std::list<int>	l;
		std::cout << "The list is filled with 10 numbers from 0 to 9" << std::endl;
		for (int i = 0; i < 10; ++i)
			l.push_back(i);
		std::cout << "easyfind(l, 4) = " << *easyfind(l, 4) << std::endl
		<< "try easyfind(l, 10): " << std::endl;
		try
		{	
			std::cout << *easyfind(l, 10) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "===DEQUE===" << std::endl;
		std::deque<int>	d;
		std::cout << "The deque is filled with 10 numbers from 0 to 9" << std::endl;
		for (int i = 0; i < 10; ++i)
			d.push_back(i);
		std::cout << "easyfind(d, 4) = " << *easyfind(d, 4) << std::endl
		<< "try easyfind(d, 10): " << std::endl;
		try
		{	
			std::cout << *easyfind(d, 10) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}