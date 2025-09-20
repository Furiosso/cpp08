#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

class	NoOccurrenceFoundException : public std::exception
{
	const char* what() const throw()
	{
		return "No occurrence found";
	}
};

template <typename T>
typename T::iterator	easyfind(T& hay, int needle)
{
	typename T::iterator	occurrence;

	occurrence = std::find(hay.begin(), hay.end(), needle);
	if (occurrence == hay.end())
		throw NoOccurrenceFoundException();
	return occurrence;
}

#endif
