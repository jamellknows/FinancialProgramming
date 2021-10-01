#ifndef __FinancialSamples__CompoundInteresetRateCalculator__
#define __FinancialSamples__CompoundInteresetRateCalculator__

class CompoundIntRateCalculator{
    private:
        double m_rate;
    
    public:
        CompoundIntRateCalculator(double m_rate); //constructor
        CompoundIntRateCalculator(const CompoundIntRateCalculator &v); //copy
        CompoundIntRateCalculator &operator =(const CompoundIntRateCalculator &v); // copy assignment 
        ~CompoundIntRateCalculator(); //destuctor


        double multiplePeriod(double value, int numPeriods);
        double continuousCompounding(double value, int numPeriods);
};

#endif