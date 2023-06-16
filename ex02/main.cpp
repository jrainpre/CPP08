#include "MutantStack.hpp"


// int main()
// {
	// MutantStack<int> mstack;
	// mstack.push(5);
	// mstack.push(17);
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ite--;
	// std::cout << *it << std::endl;
	// std::cout << *ite << std::endl;
	// mstack.pop();
	// std::cout << mstack.top() << std::endl;
	// std::cout << mstack.size() << std::endl;
	// it = mstack.begin();





// }


int main()
{
    MutantStack<std::string> mstack;
    mstack.push("Hello");
    mstack.push("World");
    mstack.push("!");
    MutantStack<std::string>::iterator it = mstack.begin();
    MutantStack<std::string>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
}

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);


//     std::list<int> mlist;
//     mlist.push_back(5);
//     mlist.push_back(17);
//     std::cout << mlist.back() << std::endl;
//     mlist.pop_back();
//     std::cout << mlist.size() << std::endl;
//     mlist.push_back(3);
//     mlist.push_back(5);
//     mlist.push_back(737);
//     mlist.push_back(0);
//     std::list<int>::iterator it_list = mlist.begin();
//     std::list<int>::iterator ite_list = mlist.end();
//     ++it_list;
//     --it_list;
//     while (it_list != ite_list) {
//         std::cout << *it_list << std::endl;
//         ++it_list;
//     }

//     std::list<int> l(mlist);
// }
