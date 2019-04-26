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
