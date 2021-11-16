//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <string>
#include <stack>
#include "P6.h"
using namespace std;

static void test_6() {
    stack<alumno_t> s1;
    int n{};
    cin >> n;
    string nombre;
    string apellido;
    double nota;
    while (n-- > 0) {
        cin >> nombre;
        cin >> apellido;
        cin >> nota;
        s1.push_back(alumno_t{nombre, apellido, nota});
    }
    string name_tobe_found;
    getline(cin, name_tobe_found);
    auto a1 = find_in_stack (s1, [=](auto a) { return a.get_nombre() == name_tobe_found; });
    cout << a1.get_nombre() << " " << a1.get_apellido() << " " << a1.get_nota() << endl;
}

TEST_CASE("Question #6") {
    execute_test("test_6.in", test_6);
}