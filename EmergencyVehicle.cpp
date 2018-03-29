//
//  EmgergencyEquipmen.cpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "EmergencyVehicle.hpp"
#include <string>
using namespace std;
EmergencyVehicle:: EmergencyVehicle(char*driver,char *station,int numworks,char *licence,char*type,char* make, double gasTankSize, double fuelConsumption,int numberOfWheels, double loadCapacity, double towingCapacity,int numPassagers,int SND,int numbeds):Vehicle(licence,type,make,gasTankSize,fuelConsumption),LoadVehicle(numberOfWheels,loadCapacity,towingCapacity,licence,type,make,gasTankSize,fuelConsumption),passagerVehicle(numPassagers,licence,type,make,gasTankSize,fuelConsumption),EmergencyEquipment(SND,numbeds),_numWorkers(numworks)
{

    _driver=new char[strlen(driver)+1];
    strcpy(_driver, driver);
    _station=new char[strlen(station)+1];
    strcpy(_station, station);
    
//    fornumPassengers     5 gasTankSize      100 fuelConsumption     11
//    wheels      6

}
EmergencyVehicle::~ EmergencyVehicle()
{
      cout<<"EmergencyVehicle析构函数被调用！"<<endl;
    if (_driver)
    {
        delete []_driver;
        _driver=nullptr;
    }
    if (_station)
    {
        delete [] _station;
        _station=nullptr;
    }
}
void EmergencyVehicle::printSpecifications()
{
   
    Vehicle::printSpecifications();
    
    LoadVehicle::print1();
    passagerVehicle::print();
    EmergencyEquipment::printSpecifications();
    cout<<"分配的工作人数："<<_numWorkers<<endl;
    cout<<"分配的司机："<<_driver<<endl;
    cout<<"停靠的车站："<<_station<<endl;
    
}
double EmergencyVehicle:: computeTravelDistance()
{
    double a=this->LoadVehicle::computeTravelDistance(),b=this->passagerVehicle::computeTravelDistance();
//    cout<<a<<endl;
//    cout<<b<<endl;
    
    double travelDistance=a<b?a:b;
    return travelDistance;

}