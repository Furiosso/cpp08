#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(const unsigned int N) : _N(N) {}

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