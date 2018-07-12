/*
*	string reversal algorithm without whole string traversal and local variables
*/

#include <iostream>
#include <string>
#include <algorithm>

template <typename T >
void invert_string( T &a )
{
    typename T::size_type length = a.size();
    for(typename T::size_type i = 0; i < (length/2); ++i)
    {
        std::swap(a[i], a[length - i - 1]);
    }
}

int main() {
	
	std::string str = "abcdefg";
	std::cout << "Input string contents: " << str << std::endl;	
	
	invert_string(str);
	
	std::cout << "Reversed string: " << str << std::endl;
}

