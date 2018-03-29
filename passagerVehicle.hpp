//
//  passagerVehicle.hpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef passagerVehicle_hpp
#define passagerVehicle_hpp
#include "Vehicle.hpp"
#include <stdio.h>
class passagerVehicle: public virtual Vehicle
{
private:
    int numberOfPassengers;


public:
    passagerVehicle(int numPassagers=5,char *licence="",char*type="",char* make="", double gasTankSize=100, double fuelConsumption=11);
    void setNumPassengers(int numPassengers);
    int getnumPassengers();
    void printSpecifications();
    void print();
    double computeTravelDistance();
    
};
#endif /* passagerVehicle_hpp */
