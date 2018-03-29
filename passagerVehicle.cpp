//
//  passagerVehicle.cpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "passagerVehicle.hpp"
using namespace std;
passagerVehicle:: passagerVehicle(int numPassagers,char *licence,char*type,char* make, double gasTankSize, double fuelConsumption):Vehicle(licence,type,make,gasTankSize,fuelConsumption),numberOfPassengers(numPassagers)
{
    
}
int passagerVehicle::getnumPassengers()
{
    return numberOfPassengers;
}
void passagerVehicle::setNumPassengers(int numPassengers)
{

    numberOfPassengers=numPassengers;
}
void passagerVehicle::printSpecifications()
{
    Vehicle::printSpecifications();
    cout<<"载客人数："<<numberOfPassengers<<endl;
}
 void passagerVehicle::print()
{
    cout<<"载客人数："<<numberOfPassengers<<endl;
}
double passagerVehicle::computeTravelDistance()
{

    double travelDistance= _gasTankSize*_fuelConsumption*(100-(numberOfPassengers- 5)*2.5)/100;
    return travelDistance;
}