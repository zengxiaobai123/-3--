//
//  EmergencyEquipment.cpp
//  C++
//
//  Created by mac on 18/3/26.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "EmergencyEquipment.hpp"
#include <iostream>
using namespace std;
EmergencyEquipment:: EmergencyEquipment(int SND,int numbeds)
{
    if (SND>500)
        sirenNoiseDistance=SND;
    else
        cout<<"您的输入有误！"<<endl;
    
    numBeds=numbeds;
}
int EmergencyEquipment::getnumofBeds()
{
    return numBeds;
}
void EmergencyEquipment:: printSpecifications()
{

    cout<<"汽笛可听见的距离："<<sirenNoiseDistance<<endl;
    cout<<"可提供的床位："<<numBeds<<endl;
}