//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P3.h"
using namespace std;

string process_text_by_stack(string& source){

    string res;
    stack<char> stack_a;

    for(const auto &c: source){
        if (c == '*'){
            res += stack_a.top();
            stack_a.pop();
            continue;
        }
        stack_a.push(c);
    }
    return res;
}

void question_3(){

}
