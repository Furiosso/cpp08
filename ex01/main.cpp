#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <sstream>

void	check_span(int n)
{
	std::vector<int> v;

	try
	{
		Span	 sp(n);
		std::ofstream outfile;
		std::stringstream file_name;

		file_name << n;
		v.reserve(n);
		outfile.open((file_name.str() + "_numbers").c_str());
		for (int i = 0; i < n; ++i)
			v.push_back(rand() % n - n / 2);
		for (int i = 0; i < n; ++i)
		{
			outfile << v[i] << " | ";
			if (i != 0 && i % 10 == 0)
				outfile << std::endl;
		}
		outfile.close();
		try
		{
			sp.addNumber(v.begin(), v.end());
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		try
		{
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

}

int main()
{
	std::srand(time(NULL));

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	for (int i = 1; i < 1000000; i *= 10)
	{
		std::cout << "With " << i << " numbers:" << std::endl;
		check_span(i);
	}
}
