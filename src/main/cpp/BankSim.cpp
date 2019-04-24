/*
 * Roy Dawson	<roy10194464@live.missouristate.edu>
 * @file		BankSim.h
 *
 */

#include "BankSim.h"


BankSim::BankSim(int theEnterTime, int theProcessTime) : enterTime(theEnterTime), processTime(theProcessTime){

}

int BankSim::getEnterTime() const {
    return enterTime;
}

void BankSim::setEnterTime(int theEnterTime) {

}

int BankSim::getProcessTime() const {
    return processTime;
}

void BankSim::setProcessTime(int theProcessTime) {

}

//std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker) {
    // Insert health tracker data into os so that it prints out the following format:
    // Weight: 219.5, Fat Percent: 25.9%
//    os << "Weight: " << healthTracker.weight << ", Fat Percent: " << healthTracker.fatPercent << "%" ;
    //healthTracker.fatPercent;
//    return os;
//} 
