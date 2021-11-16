//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <string>
#include <stack>
#include "P1.h"
using namespace std;

static void test_1() {
    stack<int> stack_a;
    stack<int> stack_b;
    int n {};
    cin >> n;
    while (n-- > 0) {
        int value {};
        cin >> value;
        stack_a.push(value);
    }
    cin >> n;
    while (n-- > 0) {
        int value {};
        cin >> value;
        stack_b.push(value);
    }

    auto stack_result = merge_stacks(stack_a, stack_b);

    while (!stack_result.empty()) {
        cout << stack_result.top() << " ";
        stack_result.pop();
    }
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", test_1);
}