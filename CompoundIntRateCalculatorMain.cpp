#include "CompoundIntRateCalculator.hpp"

#include <iostream>

//The program function recieves parameters passed to the program
using namespace std;
int main(int argc, const char* argv[])
{
    if(argc != 4) //ensuring the correct number of arguments
    {
        std::cout<< "usage: progName <interest rate> <present value> <num periods>"
        <<std::endl;
        return 1;
    }

    double rate = atof(argv[1]);
    double value = atof(argv[2]);
    int num_periods = atoi(argv[3]);

    CompoundIntRateCalculator cIRCalc(rate);

    double res = cIRCalc.multiplePeriod(value, num_periods);
    double contRes = cIRCalc.continuousCompounding(value, num_periods);

    cout<<"future value for multiple period compounding is " << res << endl;
    cout<< "future value for continuous compoundinig is " << contRes << endl;

    return 0; 
}