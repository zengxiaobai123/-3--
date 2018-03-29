//
//  LoadVehicle.hpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef LoadVehicle_hpp
#define LoadVehicle_hpp

#include <stdio.h>
#include "Vehicle.hpp"
class LoadVehicle:public virtual Vehicle
{
public:
//    LoadVehicle()
//    {
//    
//    }
    LoadVehicle(int numberwheels=4, double loadcapacity=6500, double towingcapacity=5000,char*lisence="",  char *type="", char *make="", double gasTankSize=0, double fuelConsumption=0);
    //:numberOfWheels(numberOfWheels=4),loadCapacity(loadcapacity=6500),towingCapacity(towingcapacity=5000)
//    LoadVehicle(int numberOfWheels, double loadCapacity, double towingCapacity);
    void setLoad(int load);
    void printSpecifications();
    void print1();
    double computeTravelDistance();//行程
protected:
    int numberOfWheels;  
private:
        //车轮数量       
    double loadCapacity;    //车辆负荷  
    double towingCapacity; //车辆能够拖曳的重量

};
#endif /* LoadVehicle_hpp */
