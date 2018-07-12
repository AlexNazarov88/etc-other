/*
*    Наибольший общий делитель
*    По данным двум числам 1 ≤ a, b ≤ 2⋅10^9 найдите их наибольший общий делитель.
*/

#include <cassert>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {
    if (a==0)
        return b;
    else if (b==0)
        return a;
    else if (a>=b)
        return gcd(a % b, b);
    else if (b>=a)
        return gcd(a, b % a);
}

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}