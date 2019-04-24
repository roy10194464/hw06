/*
 * Roy Dawson	<roy10194464@live.missouristate.edu>
 * @file		BankSim.h
 *
 */

#include "HealthTracker.h"

// TODO: Implement member functions
// Implement member functions

HealthTracker::HealthTracker(double theWeight, double theFatPercent) : weight(theWeight), fatPercent(theFatPercent){

}

double HealthTracker::getWeight() const {
    return weight;
}

void HealthTracker::setWeight(double theWeight) {

}

double HealthTracker::getFatPercent() const {
    return fatPercent;
}

void HealthTracker::setFatPercent(double theFatPercent) {

}

std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker) {
    // Insert health tracker data into os so that it prints out the following format:
    // Weight: 219.5, Fat Percent: 25.9%
    os << "Weight: " << healthTracker.weight << ", Fat Percent: " << healthTracker.fatPercent << "%" ;
    //healthTracker.fatPercent;
    return os;
} 