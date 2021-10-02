#include "CashFlowCalculator.hpp"
#include <iostream>

using namespace std;
int main(int argc, const char * argv[])
{
    if(argc !=2)
    {
        cout << "usage: progName <interest rate>" << endl;
        return 1;
    }

    double rate = atof(argv[1]);
    CashFlowCalculator cfc(rate);
    cout << "To finish entering calculations say time period = -1" <<endl;
    // int period = 0;
    // while(period != -1)
    // {
    //     cout << "Enter a period <period>" <<endl;
    //     int period;
    //     cin >> period;
    //     cout << "Enter the value <value>" <<endl;
    //      double value;
    //     cin >> value;
    //     cfc.addCashPayment(value, period);

    // }
    do
    {

    cout << "Enter a period <period>" <<endl;
    int period;
    cin >> period;
    if(period == -1){
            break;
        }
    cout << "Enter the value <value>" <<endl;
    double value;
    cin >> value;
    cfc.addCashPayment(value, period);
    } while (1);
    cout << "The size of cash payments is " << cfc.m_cashPayments.size() << endl;

    double result = cfc.presentValue();
    cout << "The present value is " << result << endl;
    return 0;
}
// For some reason this doesn't work