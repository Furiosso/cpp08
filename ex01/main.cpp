#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(time(NULL));
	std::vector<int>	v;
	v.reserve(10000);
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	for (int i = 0; i < 10; ++i)
		v.push_back(rand() % 100);
	for (int i = 0; i < 10; ++i)
		std::cout << v[i] << " - ";
	std::cout << std::endl;
	Span sp2(10);
	sp2.addNumber(v.begin(), v.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}