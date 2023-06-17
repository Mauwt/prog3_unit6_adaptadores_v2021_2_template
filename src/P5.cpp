//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "P5.h"
using namespace std;
bool is_equation_balanced(string& source) {

    stack<char> stack;

    for (const auto &c: source) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty()) {
                return false; //No se encontro a la pareja del ultimo separador
                // Hay mas separadores de cierre que de apertura
            }
            auto sep = stack.top();
            stack.pop();
            if ((c == ')' && sep != '(') ||
                (c == '}' && sep != '{') ||
                (c == ']' && sep != '[')) {
                return false;
            }
        }
    }
    return stack.empty();
}

void question_5(){

}
