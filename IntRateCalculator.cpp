#include "IntRateCalculator.hpp"

IntRateCalculator::IntRateCalculator(double rate) //constructor
: m_rate(rate)
{

}
IntRateCalculator::~IntRateCalculator() // destructor
{

}
IntRateCalculator::IntRateCalculator(const IntRateCalculator &v) //copy
: m_rate(v.m_rate)
{
//this copy method/member copies the object and sets a new rate
}
IntRateCalculator &IntRateCalculator::operator=(const IntRateCalculator &v) // copy assignment
{
    if(&v != this)
    {
        this->m_rate = v.m_rate;
    }
    return *this;
}
//assignment operators modify the value of an object
//copy assignment operator replaces the contents of the object with a copy 
//of the contents of b 
//methods 3 and 4 are both needed in copying an object