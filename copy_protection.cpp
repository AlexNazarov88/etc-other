/*
*	Copy protection semantics
*/

class NonCopyable
{
public:
    NonCopyable(){}

private:
    NonCopyable(NonCopyable&){}
    
private:
    void operator=(const NonCopyable&){}
};

int main() {
	NonCopyable a; 
	NonCopyable b = a; 	//Error] 'NonCopyable::NonCopyable(NonCopyable&)' is private
	a = b; 				// [Error] 'void NonCopyable::operator=(const NonCopyable&)' is private
}

