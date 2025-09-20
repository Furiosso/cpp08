#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
    std::cout << "=== EASYFIND TESTS ===\n\n";
    
    // TEST 1: Vector básico
    {
        std::vector<int> v;
        v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4);
        
        std::cout << "TEST 1 - Vector: ";
        try {
            std::vector<int>::iterator it = easyfind(v, 3);
            if (it != v.end() && *it == 3) {
                std::cout << "PASS\n";
            } else {
                std::cout << "FAIL\n";
            }
        } catch (...) {
            std::cout << "FAIL - threw exception\n";
        }
    }
    
    // TEST 2: No encontrado
    {
        std::vector<int> v;
        v.push_back(1); v.push_back(2); v.push_back(4);
        
        std::cout << "TEST 2 - Not found: ";
        try {
            std::vector<int>::iterator it = easyfind(v, 3);
            if (it == v.end()) {
                std::cout << "PASS\n";
            } else {
                std::cout << "FAIL\n";
            }
        } catch (...) {
            std::cout << "PASS - threw exception\n";
        }
    }
    
    // TEST 3: Lista
    {
        std::list<int> l;
        l.push_back(5); l.push_back(1); l.push_back(8);
        
        std::cout << "TEST 3 - List: ";
        try {
            std::list<int>::iterator it = easyfind(l, 1);
            if (it != l.end() && *it == 1) {
                std::cout << "PASS\n";
            } else {
                std::cout << "FAIL\n";
            }
        } catch (...) {
            std::cout << "FAIL - threw exception\n";
        }
    }
    
    // TEST 4: Contenedor vacío
    {
        std::vector<int> v;
        
        std::cout << "TEST 4 - Empty: ";
        try {
            std::vector<int>::iterator it = easyfind(v, 42);
            if (it == v.end()) {
                std::cout << "PASS\n";
            } else {
                std::cout << "FAIL\n";
            }
        } catch (...) {
            std::cout << "PASS - threw exception\n";
        }
    }
    
    // TEST 5: Deque
    {
        std::deque<int> d;
        d.push_back(10); d.push_back(20); d.push_back(30);
        
        std::cout << "TEST 5 - Deque: ";
        try {
            std::deque<int>::iterator it = easyfind(d, 20);
            if (it != d.end() && *it == 20) {
                std::cout << "PASS\n";
            } else {
                std::cout << "FAIL\n";
            }
        } catch (...) {
            std::cout << "FAIL - threw exception\n";
        }
    }
    
    std::cout << "\n=== TESTS FINISHED ===\n";
    return 0;
}
