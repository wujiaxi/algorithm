//
//  two sum.cpp
//  algorithm
//
//  Created by Wu Jiaxi on 15/8/10.
//  Copyright (c) 2015年 Wu Jiaxi. All rights reserved.
//

#include "two sum.h"
std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    for(std::vector<int>::iterator first = nums.begin(); first != nums.end(); first++){
        for(std::vector<int>::iterator second = first+1; second != nums.end(); second++){
            if(*first + *second == target){
                cout<<"index1="<<first-nums.begin()+1<<",  index2="<<second-nums.begin()+1<<endl;
                vector<int> indiecs{} ;
                indiecs.push_back(first-nums.begin()+1);
                indiecs.push_back(second-nums.begin()+1);
                return indiecs;
            }
        }
    }
    return nums;
}