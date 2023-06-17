//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H

#include <stack>

using namespace std;

template<typename T>
std::stack<T> merge_stacks(std::stack<T> a, std::stack<T> b){

    std::stack<T> temp;

    while(!a.empty() && !b.empty()){
        temp.push(b.top());
        b.pop();
        temp.push(a.top());
        a.pop();
    }
    while(!a.empty()){
        temp.push(a.top());
        a.pop();
    }
    while(!b.empty()){
        temp.push(b.top());
        b.pop();
    }


    std::stack<T> res;
    while(!temp.empty()){
        res.push(temp.top());
        temp.pop();
    }


    return res;

}



void question_1();

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P1_H
