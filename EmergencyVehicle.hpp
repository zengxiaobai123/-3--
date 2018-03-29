//
//  EmgergencyEquipmen.hpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef EmergencyVehicle_hpp
#define EmergencyVehicle_hpp
#include "LoadVehicle.hpp"
#include "passagerVehicle.hpp"
#include "EmergencyEquipment.hpp"
#include <stdio.h>
class EmergencyVehicle: public LoadVehicle, public passagerVehicle,public EmergencyEquipment
{
private:
    int _numWorkers;
    char *_driver;
    char *_station;
public:
    EmergencyVehicle(char*driver=nullptr,char *station=nullptr,int numworks=0,char *licence=nullptr,char*type=nullptr,char* make=nullptr, double gasTankSize=100, double fuelConsumption=11,int numberOfWheels=6, double loadCapacity=0, double towingCapacity=0,int numPassagers=5,int SND=0,int numbeds=0);
    ~ EmergencyVehicle();
    void printSpecifications();//防止出现二义性；
    double  computeTravelDistance();

};
#endif /* EmgergencyEquipmen_hpp */
