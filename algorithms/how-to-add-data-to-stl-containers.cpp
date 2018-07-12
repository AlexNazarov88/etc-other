/*
*	What property should the object possess so that it can be added to the associative containers as a key?
*
*	Answer: values in associative containers are stored sorted, then the object should implement 
* 	the comparison operator <, and the remaining comparison operators can be expressed through it.
*
*	Without implementation of operator < object of class Foo could not be added to set, 
*	because their order within set'a would not be defined.

*	To find an item in STL containers, it itself determines the missing operators from the operator < . 
*	So, for example, to calculate the desired element, STL checks whether it is less current, then more, 
*	and if both conditions are false, then the element is equivalent to the one you are looking for.

*	In addition, for containers, a comparison class (Comparison class) can be defined in which the 
*	comparison logic of objects realized through the same operator will be defined less.
*/

#include <set>

struct Foo
{
    int i;
};
inline bool operator < (const Foo & lhs, const Foo & rhs)
{
    return lhs.i < rhs.i;
}

int main() {
	std::set<Foo> data;
	Foo a, b, c;
	a.i = 7;
	b.i = 1;
	c.i = 6;
	data.insert( a );
	data.insert( b );
	data.insert( c );
}
