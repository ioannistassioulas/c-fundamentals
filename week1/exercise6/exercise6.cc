#include <iostream>

using namespace std;
int main()
{
    size_t value;
    cin >> value;

    // If modulo 2 is 0, then 2 is a factor and therefore even
    cout << (value % 2 == 0 ? "even" : "odd") << '\n';
    
    // If bitand 1 is 0, then no 1 in 2^0 place therefore even!
    cout << (value bitand 1 == 0 ? "even" : "odd") << '\n';

    // 
    cout << '\n';
    
    // 
    cout << '\n';

    //
    cout << '\n';

    //
    cout << '\n';
}