//
//  Decision.hpp
//  C++
//
//  Created by mac on 18/3/26.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef Decision_hpp
#define Decision_hpp

#include <stdio.h>
#include <list>
//#include "Vehicle.hpp"
#include "EmergencyVehicle.hpp"
using namespace std;
class Decision
{
private:
    list<Vehicle*>& _vehicleList;
public:
//    Decision(){};
    Decision( list<Vehicle*>& vehicleList);
    void printVehiclesSpecifications() ;
    void printEmergencyVehicles();
    int numberLongDistanceEmergencyVehicles() ;//打印800米以上行程的车辆；
    int numBeds();//所有床位
    int numPassengers();//可转移的乘客数
    
    
};
#endif /* Decision_hpp */
