#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <exception>

class	Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_v;
		class FullCapacityReachedException : public std::exception
		{
			const char* what() const throw()
			{
				return "Full capacity reached";
			}
		};
	public:
		Span();
		Span(const unsigned int N); 
		Span(const Span& src);
		Span& operator=(const Span& rhs);
		~Span();
		void	addNumber(int i);
};

#endif
