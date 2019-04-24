/*
 * Roy Dawson	<roy10194464@live.missouristate.edu>
 * @file		BankSim.h
 *
 */

#ifndef HW06_BANKSIM_H

class BankSim {
private:

    double enterTime;
    double processTime;

public:

    BankSim(int theEnterTime, int theProcessTime);
    int getEnterTime() const;
    void setEnterTime(int theEnterTime);
    int getProcessTime() const;
    void setProcessTime(int theProcessTime);

//    friend std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker);
};



#endif