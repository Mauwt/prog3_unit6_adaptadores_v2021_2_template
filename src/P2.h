//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
template<typename T>
stack<T> join_stacks(stack<T> a, stack<T> b){

    stack<T> res;
    res.swap(a);

    vector<T> v1;
    while(!b.empty()){
        v1.push_back(b.top());
        b.pop();
    }

    for(int i = v1.size()-1; i >= 0; i--){
        res.push(v1[i]);
    }


    return res;
}
void question_2();

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P2_H
