#include "CompoundIntRateCalculator.hpp"
#include <cmath>

CompoundIntRateCalculator::CompoundIntRateCalculator(double rate)
:m_rate(rate)
{

}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator &v)
:m_rate(v.m_rate) //What this does is pass the referenced m_rate to the new m_rate
{

}

CompoundIntRateCalculator::~CompoundIntRateCalculator()
{

}

//Copying assignment which returns the pointere of copied object
CompoundIntRateCalculator &CompoundIntRateCalculator::operator = (const CompoundIntRateCalculator &v)
{
    if (this != &v)
    {
        this->m_rate = v.m_rate;
    }

    return *this; 

}

double CompoundIntRateCalculator::multiplePeriod(double value, int numPeriods)
{
    double f = value * pow(1 + m_rate, numPeriods);

    return f;
}

double CompoundIntRateCalculator::continuousCompounding(double value, int numPeriods)
{
    double f = value * exp(m_rate * numPeriods);

    return f; 
}