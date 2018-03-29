//
//  main.cpp
//  项目3-车辆管理系统
//
//  Created by mac on 18/3/21.
//  Copyright © 2018年 zt. All rights reserved.
//

#include <iostream>
#include "EmergencyVehicle.hpp"
#include "Decision.hpp"
using namespace std;
//#include "LoadVehicle.hpp"
void menue()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~～～～～～～～～～～～～～～\n");
    printf("~        1.显示所有车辆信息                                      \n");
    printf("~        2.显示所有救护车信息                                    \n");
    printf("~        3.显示能提供的床位总数                                  \n");
    printf("~        4.显示能够救助的乘客数量                                \n");
    printf("~        5.显示在不加油能行驶800米以上的车辆数量                   \n");
    printf("~        6.退出                                               \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~～～～～～～～～～～～～～～\n");
}
/*
void menue1()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~～～～～～～～～～～～～～～\n");
    printf("~        1.添加卡车信息                                          \n");
    printf("~        2.添加公交车信息                                        \n");
    printf("~        3.添加急救车信息                                        \n");
    printf("~        4.退出                                                \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~～～～～～～～～～～～～～～\n");
}
void addImigin(list<Vehicle*>& VehicleList)
{ 
//    list<Vehicle*> VehicleList;
    int numberwheels=0,numofpassages=0,numofworks=0,numofbeds,snd;
    double loadcapacity=0,  towingcapacity=0;
    char lisence[10]="";
    char* type=nullptr,*driver=nullptr,*station=nullptr;
    char* make=nullptr;
    double gasTankSize=0, fuelConsumption=0;
    int i;
    while (1)
{
    
    menue1();
    cout<<"请输入你的选择"<<endl;
    cin>>i;
    if(i==4)
        break;
    switch (i) 
    {
        case 1:
//            cout<<"请输入轮胎数：";
//            cin>>numberwheels;
//            cout<<"请车载负荷：";
//            cin>>loadcapacity;
//            cout<<"请输入车辆能够拖曳的重量:";
//            cin>>towingcapacity;
//            cout<<"车牌：";
//            cin>>lisence;
//            type="van";
//            cout<<"请输入制造商：";
//            cin>>make;
//            cout<<"请输入燃油量：";
//            cin>>gasTankSize;
//            cout<<"请输入邮箱容量：";
//            cin>>fuelConsumption;
            LoadVehicle *t=new LoadVehicle( numberwheels,  loadcapacity,  towingcapacity,lisence,  type,make,gasTankSize, fuelConsumption);
            VehicleList.push_back(t);
            break;
        case 2:
            passagerVehicle *k=new passagerVehicle(numofpassages,lisence,type,make,gasTankSize, fuelConsumption);
            VehicleList.push_back(k);    
            break;
        case 3:
            EmergencyVehicle *q=new EmergencyVehicle(driver,station,numofworks,lisence,type,make,gasTankSize, fuelConsumption,numberwheels,  loadcapacity,  towingcapacity,numofpassages,snd,numofbeds);
            VehicleList.push_back(q);
            break;
        default:
            break;
    }
}

}*/
int main(int argc, const char * argv[]) {
    /*
  
     */
    ///*
    Vehicle a;
    
    list<Vehicle*> VehicleList;
    int i;
//    int j;
    Decision decision(VehicleList);
    
    
    LoadVehicle *v1=new LoadVehicle(10, 500, 1000, "k12", "van", "wuling", 200,6 );
    cout<<v1->computeTravelDistance()<<endl;
    VehicleList.push_back(v1);
    passagerVehicle *v2=new passagerVehicle(20,"Q33", "tempalte", "beiqi", 100,11);
    cout<<v2->computeTravelDistance()<<endl;
    VehicleList.push_back(v2);
    EmergencyVehicle *v3=new EmergencyVehicle("wang", "kai", 3, "abc111", "ambulance", "wuling", 100,6,4, 500, 100, 6, 600, 6);
    cout<<v3->computeTravelDistance()<<endl;
    VehicleList.push_back(v3);
    EmergencyVehicle *v4=new EmergencyVehicle("wang", "kai", 3, "j155", "fire_truck", "wuling", 150,6,6, 500, 100, 6, 600, 6);
    cout<<v4->computeTravelDistance()<<endl;
    VehicleList.push_back(v4);
    cout<<v4->computeTravelDistance()<<endl;
  /*
   
    
  */  
    
    
    
    
   
    
    while (1)
    {
        menue();
        cout<<"请输入你的选择：";
        cin>>i;
        if(i==6)
        break;
        switch (i) 
        {
            case 1:
                decision.printVehiclesSpecifications();
                cout<<"车辆总数:"<<VehicleList.size()<<endl;
                break;
              case 2:
                decision.printEmergencyVehicles() ;
                
                break;
            case 3:
                cout<<"能提供的床位数量：" <<  decision.numBeds()<<endl ;
                break;
            case 4:
                 cout<<"能救助的乘客数量：" <<  decision.numPassengers()<<endl;
                break;
            case 5:
                cout<<"能行驶800米以上的紧急车辆数量：" <<decision.numberLongDistanceEmergencyVehicles() <<endl;
                break;
          
                
            default:
                break;
        }
    }
    
    
//    decision.printVehiclesSpecifications();
//    decision.printEmergencyVehicles() ;
     
  
//EmergencyVehicle(char*driver,char *station,int numworks,char *licence,char*type,char* make, double gasTankSize, double fuelConsumption,int numberOfWheels, double loadCapacity, double towingCapacity,int numPassagers,int SND,int numbeds);
//    EmergencyVehicle b("wang","tian",3,"1111","car","ben",100,100,6,100,100,6,2,2);
//    b.printSpecifications();
//    Vehicle d("1111","car","本",100,100);
//    d.printSpecifications();
//    LoadVehicle a(6,100,100,"1111","car","本",100,100);
//    EmergencyEquipment
//    std::cout << "Hello, World!\n";
//    list<Vehicle*>::iterator iter=VehicleList.begin();
//    while (iter!=VehicleList.end())
//    {
//        auto *t=*iter++;
//        delete t;
//    }
    delete v1;
    delete v2;
    delete v3;
    delete v4;
//   
    
  // */ 
    return 0;
}
