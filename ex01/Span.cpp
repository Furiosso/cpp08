#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(const unsigned int N) : _N(N)
{
	try
	{
		_v.reserve(_N);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl; 
	}
}

Span::Span(const Span& src) : _N(src._N)
{
	for (int i = 0; i < _N; ++i)
		this->_v.push_back(src._v[i]);
	*this = src;
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		for (int i = 0; i < _N; ++i)
			_v.push_back(rhs._v[i]);
		return *this;
	}
}

Span::~Span() {}

void	Span::addNumber(int i)
{
	if (this->_v.size() < this->_N)
		this->_v.push_back(i);
	else
		throw FullCapacityReachedException();
}

unsigned int	Span::shortestSpan()
{
	if (_v.size() < 2)
		throw NotEnoughElementsException();
}

unsigned int	Span::longestSpan()
{
	int	max;
	int min;

	if (_v.size() < 2)
		throw NotEnoughElementsException();
	max = *std::max_element(_v.begin(), _v.end());
	min = *std::min_element(_v.begin(), _v.end());
	return max - min;
}

const char* Span::FullCapacityReachedException::what() const throw()
{
	return "Full capacity reached";
}

const char* Span::NotEnoughElementsException::what() const throw()
{
	return "Not enough elements found for the operation";
}
