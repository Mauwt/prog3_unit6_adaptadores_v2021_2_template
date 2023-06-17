//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H
#define POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H
#include <stack>
#include <functional>
using namespace std;

template<typename T>
T find_in_stack(stack<T> s, function<bool(T)> cmpr){
    while(!s.empty()){
        if (cmpr(s.top())){
            return s.top();
        }
        s.pop();
    }
    return T{};
}

void question_6();

#endif //POO2_UNIT6_ADAPTADORES_POO_V2021_2_P6_H
