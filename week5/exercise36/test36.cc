#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << ++argv[0]<< '\n';
    cout << argv[0] << '\n';
    
    cout << ++*argv<< '\n';
    cout << *argv << '\n';
}

