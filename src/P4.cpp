//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P4.h"
using namespace std;
string process_text_by_queue(const string& source){

    string res;
    queue<char> q;

    for(const auto&c: source){
        if(c == '*'){
            if(!q.empty()){
                res += q.front();
                q.pop();
            }
            continue;
        }

        q.push(c);
    }

    return res;


};

void question_4(){

}
