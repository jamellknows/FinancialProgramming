class IntRateCalculator{
    private:
    double m_rate;
    public:
    IntRateCalculator(double rate); //constructor
    IntRateCalculator(const IntRateCalculator &v); // copy
    ~IntRateCalculator(); //destructor
    IntRateCalculator &operator = (const IntRateCalculator &v); //assignment operator
    /*
     The assignment operator deals with 
    operations between two memebers of the same class
    You can specify how an object is transfered from one object to the next
    which can be done by reference or value. 
    (This is very similar to the copy constructor)

    */
    double singlePeriod(double value);

}