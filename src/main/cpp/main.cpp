/*
 * Roy Dawson	<roy10194464@live.missouristate.edu> 
 * @file		Main.cpp
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "BankSim.h"

int main(int argc, char* argv[]) {
    std::cout << "program start" << std::endl;

    std::ifstream data{"input.dat"};
    if (!data) {
        std::cerr << "Error occured when attempting to open input.dat." << std::endl;
        return EXIT_FAILURE;
    }

    int enterTime;
    int processTime;
    std::vector<BankSim> member;
//    double sumWeight = 0;
//    double sumFatPercent = 0;

    while (data >> enterTime >> processTime) {
        BankSim bs{enterTime, processTime};
        member.push_back(bs);
    }

//    double healthItems = health.size();

//    for(int i=0; i<healthItems; i++){
//        sumWeight += health.at(i).getWeight();
//        sumFatPercent += health.at(i).getFatPercent();
//    }

//    double aveWeight = sumWeight/healthItems;
//    double aveFPer = sumFatPercent/healthItems;

//    HealthTracker average{aveWeight, aveFPer};
//    std::cout << "Averages: " << average << std::endl;

    data.close();

    return EXIT_SUCCESS;
}