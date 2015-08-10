//
//  main.cpp
//  algorithm
//
//  Created by Wu Jiaxi on 15/8/10.
//  Copyright (c) 2015年 Wu Jiaxi. All rights reserved.
//

#include <iostream>
#include "two sum.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> test{0, 4, 3, 0};
    int target{0};
    twoSum(test, target);
    return 0;
}
