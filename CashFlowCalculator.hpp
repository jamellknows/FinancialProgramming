#ifndef __FinancialSamples__CashFlowCalculator__
#define __FinancialSamples__CashFlowCalculator__

#include <vector>

class CashFlowCalculator{
    public:
        CashFlowCalculator(double rate); //constructor
        CashFlowCalculator(const CashFlowCalculator &v); //copy
        CashFlowCalculator &operator = (const CashFlowCalculator &v); //copy assignment
        ~CashFlowCalculator(); // destructor

        void addCashPayment(double value, int timePeriod);
        double presentValue();
        double presentValue(double futureValue, int timePeriod);
        std::vector<double> m_cashPayments;
        std::vector<int> m_timePeriods;

    private:
       
        double m_rate;
};

#endif /* #defined (__FinancialSamples__CashFlowCalculator) */
