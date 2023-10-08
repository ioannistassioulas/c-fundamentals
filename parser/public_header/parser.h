#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_

#include <string>
#include "../../line/public_header/line.hh"
class Parser
{

    Line d_object;                       // line object to parser substrings
    bool d_integral;                     // true if integral datatype
    enum Return                          // give meaning to magic numbers
    {
        NO_NUMBER,
        NUMBER,
        EOLN
    };
                                         // Private functions used to convert
                                         // string into parsed doubles
    Return convert(double *dest, std::string const &str);
    bool pureDouble(double *dest, std::string const &str);

    public:
        Parser();                        // constructer

        bool reset();                    // public functions for saving input
        Return number(double *dest);     // as string and saving data to the
        bool isIntegral();               // data members 
};

#endif
