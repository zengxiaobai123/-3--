//
//  LoadVehicle.cpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "LoadVehicle.hpp"
using namespace std;
//LoadVehicle:: LoadVehicle()
//{
//    loadCapacity   =  6500;
//    towingCapacity =  5000;
//    numberOfWheels =  4;
//}

LoadVehicle:: LoadVehicle(int numberwheels, double loadcapacity, double towingcapacity,char*lisence,  char *type,char *make,double gasTankSize, double fuelConsumption):Vehicle(lisence,type,make,gasTankSize,fuelConsumption),loadCapacity(loadcapacity),towingCapacity(towingcapacity)
{
    

    if (numberwheels%2==0) 
    {
        numberOfWheels = numberwheels;  
    }else
        cout<<"输入有误！"<<endl;

 
}
void LoadVehicle:: setLoad(int load)
{
    loadCapacity=load;
}
void LoadVehicle:: printSpecifications()
{
    Vehicle::printSpecifications();
    cout<<"车轮数量："<<numberOfWheels<<endl;
    cout<<"车载负荷："<<loadCapacity<<endl;
    cout<<"车辆能够拖曳的重量:"<<towingCapacity<<endl;
    
}
void LoadVehicle::print1()
{
    cout<<"车轮数量："<<numberOfWheels<<endl;
    cout<<"车载负荷："<<loadCapacity<<endl;
    cout<<"车辆能够拖曳的重量:"<<towingCapacity<<endl;

}

double LoadVehicle:: computeTravelDistance()
{

    double travelDistance = _gasTankSize*_fuelConsumption*(100- (numberOfWheels-4)/2*5)/100;
    return travelDistance;
}
