#include "MutantStack.hpp"
#include <iostream>
#include <string>

int main()
{
	{
		std::cout << "===INT DEQUE===" << std::endl;
		MutantStack<int> mstack;
		if (mstack.empty())
			std::cout << "deque is empty" << std::endl;
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
		MutantStack<int>::const_iterator itc = mstack.begin();
		MutantStack<int>::const_iterator itec = mstack.end();
		++itc;
		--itc;
		while (itc != itec)
		{
			std::cout << *itc << std::endl;
			++itc;
		}
		std::stack<int> s(mstack);
		std::cout << s.top() << std::endl;
		s.pop();
		std::cout << s.top() << std::endl;
		mstack.push(32);
		s = mstack;
		std::cout << s.top() << std::endl;
		s.push(99);
		MutantStack<int> cmstack(s);
		std::cout << cmstack.top() << std::endl;
		cmstack.push(123);
		s.push(123);
		cmstack = s;
		std::cout << cmstack.top() << std::endl;
	}
	{
		std::cout << std::endl << "===LIST===" << std::endl;
		std::list<int> lstack;
		if (lstack.empty())
			std::cout << "list is empty" << std::endl;
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
		if (vstack.empty())
			std::cout << "vector is empty" << std::endl;
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
	{
		std::cout << std::endl << "===DOUBLE DEQUE===" << std::endl;
		MutantStack<double> mstack;
		if (mstack.empty())
			std::cout << "deque is empty" << std::endl;
		mstack.push(5.1);
		mstack.push(17.34);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3.2);
		mstack.push(5.897);
		mstack.push(737.076);
		//[...]
		mstack.push(0.65);
		MutantStack<double>::iterator it = mstack.begin();
		MutantStack<double>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<double> s(mstack);
		std::cout << s.top() << std::endl;
		s.pop();
		std::cout << s.top() << std::endl;
	}
	{
		std::cout << std::endl << "===DOUBLE LIST===" << std::endl;
		std::list<double> lstack;
		if (lstack.empty())
			std::cout << "list is empty" << std::endl;
		lstack.push_back(5.1);
		lstack.push_back(17.34);
		std::cout << lstack.back() << std::endl;
		lstack.pop_back();
		std::cout << lstack.size() << std::endl;
		lstack.push_back(3.2);
		lstack.push_back(5.897);
		lstack.push_back(737.076);
		//[...]
		lstack.push_back(0.65);
		std::list<double>::iterator it = lstack.begin();
		std::list<double>::iterator ite = lstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<double, std::list<double> > ss(lstack);
		std::cout << ss.top() << std::endl;
		ss.pop();
		std::cout << ss.top() << std::endl;
		MutantStack<double, std::list<double> > ms(lstack);
		std::cout << ms.top() << std::endl;
		ms.pop();
		std::cout << ms.top() << std::endl;
	}
	{
		std::cout << std::endl << "===DOUBLE VECTOR===" << std::endl;
		std::vector<double> vstack;
		if (vstack.empty())
			std::cout << "vector is empty" << std::endl;
		vstack.push_back(5.1);
		vstack.push_back(17.34);
		std::cout << vstack.back() << std::endl;
		vstack.pop_back();
		std::cout << vstack.size() << std::endl;
		vstack.push_back(3.2);
		vstack.push_back(5.897);
		vstack.push_back(737.076);
		//[...]
		vstack.push_back(0.65);
		std::vector<double>::iterator it = vstack.begin();
		std::vector<double>::iterator ite = vstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<double, std::vector<double> > ss(vstack);
		std::cout << ss.top() << std::endl;
		ss.pop();
		std::cout << ss.top() << std::endl;
		MutantStack<double, std::vector<double> > ms(vstack);
		std::cout << ms.top() << std::endl;
		ms.pop();
		std::cout << ms.top() << std::endl;
	}
	{
		std::cout << std::endl << "===STRING DEQUE===" << std::endl;
		MutantStack<std::string> mstack;
		mstack.push("five");
		mstack.push("seventeen");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push("three");
		mstack.push("five");
		mstack.push("sevenhundredthirtyseven");
		mstack.push("zero");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<std::string> s(mstack);
	}
	return 0;
}