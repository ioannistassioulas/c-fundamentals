#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << *(*argv + 2) << '\n';
    cout << ++*(*argv + 2) << '\n';
    cout << *(*argv + 2) << '\n';
}
/*
./a.o
0x7fffe584fdf8
0x7fffe584fdf8
0x7fffe584fe00
1
0x7fffe584fe00
*/
