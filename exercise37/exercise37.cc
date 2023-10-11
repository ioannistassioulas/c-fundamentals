#include <string>
int main(int argc, char **argv)
{
    double *example1 [8];                 // pointer to array of 8 doubles

    double **example2;                    // pointer to pointers to doubles

    std::string const **const *ptr;       // pointers to const pointers to
                                          // pointers to const strings

    std::string (*fun1()) [6][6];         // returns pointer to 6x6 array of 
                                          // strings

    typedef std::string (*StringMat)[6];  // function fun returning a pointer
    StringMat (*fun2()) [6];              // to array of 6 StringMats, where
                                          // StringMats = arrays of 6 strings

    char** const fun(char* *const ptr);   // function receiving a variable
                                          // ptr, a const pointer to NTBSs,
                                          // returning a const NTBS

}
