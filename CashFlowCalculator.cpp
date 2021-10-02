#include "CashFlowCalculator.hpp"

#include <cmath>
#include <iostream>

CashFlowCalculator::CashFlowCalculator(double rate)
:m_rate(rate)
{

}

CashFlowCalculator::CashFlowCalculator(const CashFlowCalculator &v)
:m_rate(v.m_rate)
{

}

CashFlowCalculator::~CashFlowCalculator()
{

}

CashFlowCalculator &CashFlowCalculator::operator = (const CashFlowCalculator &v)
{
    if(this != &v)
    {
        this->m_cashPayments = v.m_cashPayments;
        this->m_rate = v.m_rate;
        this->m_timePeriods = v.m_timePeriods;
    }

    return *this;
}

void CashFlowCalculator::addCashPayment(double value, int timePeriod)
{
    m_cashPayments.push_back(value);
    // std::cout<< "cash payment: " << m_cashPayments[value] << std::endl;
    m_timePeriods.push_back(timePeriod);
    // std::cout << "time period: " << m_timePeriods[timePeriod] << std::endl;
    std::cout << "add Cash Payment used" << std::endl;
}

double CashFlowCalculator::presentValue(double futureValue, int timePeriod)
{
    double pValue = futureValue/pow(1+m_rate, timePeriod);
    std::cout << "future value " << pValue << std::endl;
    return pValue;
}

double CashFlowCalculator::presentValue() //if no argument is given to present value function/ member this runs 
{
    double total = 0;
    for(unsigned i = 0; m_cashPayments.size(); ++i)
    {
        total += presentValue(m_cashPayments[i], m_timePeriods[i]);
    }
    return total;
}