#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <vector>
# include <list>
# include <stack>

template<typename T, typename C = std::deque<T> >
class	MutantStack : public std::stack<T, C>
{
	public:
		typedef typename C::iterator		iterator;
		typedef typename C::const_iterator	const_iterator;
		MutantStack();
		MutantStack(const C& cont);
		MutantStack(const MutantStack& src);
		MutantStack& operator=(const MutantStack& rhs);
		~MutantStack();
		typename C::iterator		begin();
		typename C::iterator		end();
		typename C::const_iterator	begin() const;
		typename C::const_iterator	end() const;
};

# include "MutantStack.tpp"

#endif
