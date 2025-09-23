#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <exception>

class	Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_v;
		class	FullCapacityReachedException : public std::exception
		{
			const char* what() const throw();
		};
		class	NotEnoughElementsException : public std::exception
		{
			const char* what() const throw();
		};
		class	NoSpaceLeftException : public std::exception
		{
			const char* what() const throw();
		};
	public:
		Span();
		Span(const unsigned int N); 
		Span(const Span& src);
		Span& operator=(const Span& rhs);
		~Span();
		void			addNumber(int i);
		unsigned int	longestSpan() const;
		unsigned int	shortestSpan() const;
		template <typename Iter>
		void			addNumber(Iter begin, Iter end)
		{
			std::ptrdiff_t	spaceLeft;

			spaceLeft = _N - _v.size();
			if (std::distance(begin, end) > spaceLeft)
				throw NoSpaceLeftException();
			_v.insert(_v.end(), begin, end);
		}
};

#endif
