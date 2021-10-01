//
// IntRateCalculator.h

#ifndef __FinancialSamples__IntRateCalculator__

#define __FinancialSamples__IntRateCalculator__

#include <iostream>

class IntRateCalculator{
    public:
        IntRateCalculator(double rate); //constructor
        IntRateCalculator(const IntRateCalculator &v); // copy
        IntRateCalculator & operator = (const IntRateCalculator &v); //assignment 
        ~IntRateCalculator(); //destructor

        double singlePeriod(double value);

    private:

        double m_rate;
};

inline double IntRateCalculator::singlePeriod(double value)
{
        double f = value * (1 + this->m_rate);
        return f;
}

#endif /* defined(__FinancialSamples__IntRateCalculator__)*/
//
