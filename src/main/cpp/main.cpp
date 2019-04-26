/*
 * Roy Dawson	<roy10194464@live.missouristate.edu> 
 * @file		Main.cpp
 *
 * Notes:       1. CMakeLists.txt file was copied from lab09
 *              and edited to work for this homework.
 *              2. Commented out sections were for if the
 *              data was not in order so that it would sort
 *              before running the simulation, this idea was
 *              scrapped, as it was not required.
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
//#include <vector>
#include <queue>
#include "BankSim.h"

int main(int argc, char* argv[]) {

    std::ifstream data{"input.dat"};
    if (!data) {
        std::cerr << "Error occured when attempting to open input.dat." << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Day start." << std::endl;

    int enterTime;
    int processTime;
//	std::vector<BankSim> organize;
    std::queue<BankSim> member;

//    while (data >> enterTime >> processTime) {
//		bool placed = false;
//		BankSim bs{enterTime, processTime};
//		if (organize.empty()) organize.push_back(bs);
//		else{
//			for (int i = 0; i < organize.size() && !placed; i++){
//				if(bs.getEnterTime() < organize.at(i).getEnterTime()){
//					organize.insert (i, bs);
//					placed = true;
//				}
//
//			}
//			if (!placed) organize.push_back(bs);
//		}
//	}
//	while (!organize.empty()){
//		member.push(organize.front());
//		organize.erase(organize.begin());
//    }

    while (data >> enterTime >> processTime) {
        BankSim bs{enterTime, processTime};
        member.push(bs);
    }
	
	int time = member.front().getEnterTime();
	
	while (!member.empty()){
        int occupyTime = 0;
		std::cout << "Service start at: " << time << " minutes into day." << std::endl;
		occupyTime = member.front().getProcessTime();
		for (int i = 0; i < occupyTime; i++) time += 1;
		member.pop();
		std::cout << "Service ended at: " << time << " minutes into day." << std::endl;
	}

    data.close();

	std::cout << "Day end." << std::endl;

    return EXIT_SUCCESS;
}