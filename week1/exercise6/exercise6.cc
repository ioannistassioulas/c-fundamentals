#include <iostream>

using namespace std;
int main()
{
    int value;
    cin >> value;

    // If modulo 2 is 0, then 2 is a factor and therefore even
    cout << (value % 2 == 0 ? "even" : "odd") << '\n';
    
    // If bitand 1 is 0, then no 1 in 2^0 place therefore even!
    cout << ((value bitand 1) == 1 ? "odd" : "even") << '\n';

    // If bitor 0 is value, then final place is 1 and so odd
    cout << ((value bitor 1) == value ? "odd" : "even") <<'\n';
    
    // by pushing out one extra rhs place, we initialize to 0, so if only 
    // a 0 there in the first place (even), it will produce same value
    cout << (value >> 1 << 1 == value ? "even" : "odd") << '\n';

    // if all values are the same, then returns value again if odd 
    // will return value + 1
    cout << ((value ^ 1) == value - 1 ? "odd" : "even") << '\n';

    // if dividing by 2 leads to rounding down, then odd, otherwise even
    cout << (value / 2 * 2 == value ? "even" : "odd") << '\n';
}