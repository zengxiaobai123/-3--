//
//  EmergencyEquipment.hpp
//  C++
//
//  Created by mac on 18/3/26.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef EmergencyEquipment_hpp
#define EmergencyEquipment_hpp

#include <stdio.h>
class EmergencyEquipment
{
private:
    int sirenNoiseDistance;// 汽笛声被听到的距离 ,   500m
    int numBeds;//可以同时提供的床位
public:
    EmergencyEquipment(int SND=500,int numbeds=2);
    int getnumofBeds();
    void printSpecifications();
    

};
#endif /* EmergencyEquipment_hpp */
