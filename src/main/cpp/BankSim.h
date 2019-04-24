/*
 * Roy Dawson	<roy10194464@live.missouristate.edu>
 * @file		BankSim.h
 *
 */

#ifndef LAB09_HEALTHTRACKER_H

class HealthTracker {
private:

    double weight;
    double fatPercent;

public:

    HealthTracker(double theWeight, double theFatPercent);
    double getWeight() const;
    void setWeight(double theWeight);
    double getFatPercent() const;
    void setFatPercent(double theFatPercent);

    friend std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker);
};



#endif //LAB09_HEALTHTRACKER_H