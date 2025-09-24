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
		Span				sp(n);
		std::ofstream		outfile;
		std::stringstream	file_name;
		std::string			command;

		file_name << n;
		v.reserve(n);
		outfile.open((file_name.str() + "_numbers").c_str());
		for (int i = 0; i < n; ++i)
			v.push_back(rand() % (n * 2) - n);
		for (int i = 0; i < n; ++i)
		{
			outfile << v[i];
			if (i != n - 1)
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
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
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
		std::cout << std::endl << "SYSTEM CHECK: " << std::endl;
		command = "< " + file_name.str() + "_numbers sort -n | awk 'BEGIN{minDist="
		+ file_name.str() +
		"} NR==1{min=$1; max=$1; next} {d=$1-max; if (d<minDist){minDist=d; a=max; b=$1} max=$1} END{print \"LONGEST SPAN: \" max-min \" BETWEEN \" max \" AND \" min; print \"SHORTEST SPAN: \" minDist \" BETWEEN \" a \" AND \" b}'";
		system (command.c_str());
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

	std::cout << std::endl << "===OVER LOAD TEST===" << std::endl << "sp.addNumber(6):" << std::endl;
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
