/*
*	Bubble sort for STL containers without local variables
*/

#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
void bubble_sort(T &a)
{
    for(typename T::size_type i = 0; a.size() && i < a.size() - 1; ++i)
    {
        for(typename T::size_type j = i; j + 1 > 0; --j)
        {
            if(a[j] > a[j+1])
                std::swap(a[j], a[j+1]);
        }
    }
}

int main() {
	
	std::vector<int> v;
	v.push_back(7);
	v.push_back(1000);
	v.push_back(134);
	v.push_back(23);
	v.push_back(1);
	
	std::cout << "Vector contents:" << std::endl;
	for (auto it : v)
		std::cout << it << " ";
		 
	bubble_sort(v);
	
	std::cout << "\nVector bubble-sorted:" << std::endl;
	for (auto it : v)
		std::cout << it << " ";
		
	return 0;
}

