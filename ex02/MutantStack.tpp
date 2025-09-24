template <typename T, typename C>
MutantStack<T, C>::MutantStack() : std::stack<T, C>() {}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const C& cont) : std::stack<T, C>(cont) {}

template <typename T, typename C>
MutantStack<T, C>::MutantStack(const MutantStack& src) : std::stack<T, C>(src) {}

template <typename T, typename C>
MutantStack<T, C>& MutantStack<T, C>::operator=(const MutantStack& rhs)
{
	if (this != &rhs)
		std::stack<T, C>::operator=(rhs);
	return *this;
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack() {}

template <typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::begin()
{
	return this->c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator	MutantStack<T, C>::end()
{
	return this->c.end();
}
