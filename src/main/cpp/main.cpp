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
#include <queue>
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
	std::vector<BankSim> organize;
    std::queue<BankSim> member;

    while (data >> enterTime >> processTime) {
		bool placed = false;
		BankSim bs{enterTime, processTime};
		if (organize.empty()) organize.push_back(bs);
		else{
			for (int i = 0; i < organize.size() && !placed; i++){
				if(bs.getEnterTime() < organize.at(i).getEnterTime){
					organize.insert(i, bs);
				}
				
			}
			if (!placed) organize.push_back(bs);
		}
	}
	while (!organize.empty()){
        member.push(organize.front());
		organize.erase(organize.begin());
    }
	
	int time = member.front().getEnterTime();
	
	while (!member.empty()){
		std::cout << "service start at " << time << std::endl;
		int occupyTime = member.front().getProcessTime();
		for (int i = 0; i < occupyTime; i++) time += 1;
		member.pop();
		std::cout << "service ended at " << time << std::endl;
	}

    data.close();

    return EXIT_SUCCESS;
}