#include "MutantStack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl;
		s.pop();
		std::cout << s.top() << std::endl;
	}
	{
		std::cout << std::endl << "===LIST===" << std::endl;
		std::list<int> lstack;
		lstack.push_back(5);
		lstack.push_back(17);
		std::cout << lstack.back() << std::endl;
		lstack.pop_back();
		std::cout << lstack.size() << std::endl;
		lstack.push_back(3);
		lstack.push_back(5);
		lstack.push_back(737);
		//[...]
		lstack.push_back(0);
		std::list<int>::iterator it = lstack.begin();
		std::list<int>::iterator ite = lstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > ss(lstack);
		std::cout << ss.top() << std::endl;
		ss.pop();
		std::cout << ss.top() << std::endl;
		MutantStack<int, std::list<int> > ms(lstack);
		std::cout << ms.top() << std::endl;
		ms.pop();
		std::cout << ms.top() << std::endl;
	}
	{
		std::cout << std::endl << "===VECTOR===" << std::endl;
		std::vector<int> vstack;
		vstack.push_back(5);
		vstack.push_back(17);
		std::cout << vstack.back() << std::endl;
		vstack.pop_back();
		std::cout << vstack.size() << std::endl;
		vstack.push_back(3);
		vstack.push_back(5);
		vstack.push_back(737);
		//[...]
		vstack.push_back(0);
		std::vector<int>::iterator it = vstack.begin();
		std::vector<int>::iterator ite = vstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::vector<int> > ss(vstack);
		std::cout << ss.top() << std::endl;
		ss.pop();
		std::cout << ss.top() << std::endl;
		MutantStack<int, std::vector<int> > ms(vstack);
		std::cout << ms.top() << std::endl;
		ms.pop();
		std::cout << ms.top() << std::endl;
	}
	return 0;
}