//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <string>
#include "P4.h"
using namespace std;

static void test_4() {
    string text;
    getline(cin, text);
    cout << process_text_by_queue(text);
}

TEST_CASE("Question #4") {
    execute_test("test_4.in", test_4);
}