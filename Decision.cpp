//
//  Decision.cpp
//  C++
//
//  Created by mac on 18/3/26.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "Decision.hpp"
Decision:: Decision( list<Vehicle*>& vehicleList):_vehicleList(vehicleList)
{
    
}
void Decision:: printVehiclesSpecifications()
{
    list<Vehicle*>::iterator iter=_vehicleList.begin();
//    cout<<"车牌"<<"\t"<<"燃油量"<<"\t"<<"油箱容量"<<"\t"<<"类型"<<"\t"<<"制造商"<<"\t"<<"燃油量"<<"\t"<<"油箱容量"<<endl;
  
    while (iter!=_vehicleList.end())
    {
        
        (*iter++)->printSpecifications();
        cout<<endl;
    }
    cout<<"打印完所有车辆信息！"<<endl;
   
}
//打印所有紧急车信息
void  Decision::printEmergencyVehicles()
{
    list<Vehicle*>::iterator iter=_vehicleList.begin();
    while (iter!=_vehicleList.end())
    {
        if (auto t=dynamic_cast<EmergencyVehicle*>(*iter++))
        {
            t->EmergencyVehicle::printSpecifications();
             cout<<endl;
        }
        
    }
    cout<<"打印完所有急救车信息！"<<endl;
}
//打印800米以上行程的车辆；
int  Decision::numberLongDistanceEmergencyVehicles()
{
    int count=0;
    list<Vehicle*>::iterator iter=_vehicleList.begin();
    while (iter!=_vehicleList.end())
    {
        auto t=*iter++;
        if (t->computeTravelDistance()>=800)
        {
            
            count++;
        }
    
    }
    
    return count;
}
//可提供床位数量
int Decision::numBeds()
{
    int sum=0;
    list<Vehicle*>::iterator iter=_vehicleList.begin();
    while (iter!=_vehicleList.end())
    {
        if (auto t=dynamic_cast<EmergencyVehicle*>(*iter++)) 
        {
            sum=sum+t->getnumofBeds();
        }
    
    
    }
    return sum;

}
//可转移的乘客数
int Decision::numPassengers()
{
    int sum=0;
    list<Vehicle*>::iterator iter=_vehicleList.begin();
    while (iter!=_vehicleList.end())
    {
        if (auto t=dynamic_cast<passagerVehicle*>(*iter++)) 
        {
            sum=sum+t->getnumPassengers();
        }
        
        
    }
    return sum;
    


}
