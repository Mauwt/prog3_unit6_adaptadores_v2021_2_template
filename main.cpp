#include <iostream>
#include <stack>
#include <queue>
#include "P1.h"
#include "P2.h"
#include "P3.h"
#include "P4.h"
#include "P5.h"
#include "P6.h"

using namespace std;

void p1(){
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
void p2(){
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

    auto stack_result = join_stacks(stack_a, stack_b);

    while (!stack_result.empty()) {
        cout << stack_result.top() << " ";
        stack_result.pop();
    }
}
void p3(){
    string text;
    getline(cin, text);
    cout << process_text_by_stack(text);
}
void p4(){
    string text;
    getline(cin, text);
    cout << process_text_by_queue(text);
}
void p5(){
    string text;
    getline(cin, text);
    cout << boolalpha << is_equation_balanced(text);
}
namespace test {
    class student_t {
        string name;
        string surname;
        double grade{};
    public:
        student_t() = default;
        student_t(string name, string surname, double  grade):
                name(std::move(name)), surname(surname), grade(grade) {}
        [[nodiscard]] string get_name() const { return name; }
        [[nodiscard]] string get_surname() const { return surname; }
        [[nodiscard]] double get_grade() const { return grade; }
    };
}

void p6(){
    stack<test::student_t> s1;
    int n{};
    cin >> n;
    string nombre;
    string apellido;
    double nota;
    while (n-- > 0) {
        cin >> nombre;
        cin >> apellido;
        cin >> nota;
        s1.push(test::student_t{nombre, apellido, nota});
    }
    string name_tobe_found;
    cin >> name_tobe_found;
    auto comp = [=](test::student_t a) -> bool {
        return a.get_name() == name_tobe_found;
    };
    auto a1 = find_in_stack<test::student_t> (s1, comp);

    cout    << a1.get_name() << " "
            << a1.get_surname() << " "
            << a1.get_grade() << endl;
}

int main() {
    //p1();
    //p2();
    //p3();
    //p4();
    //p5();
    p6();

    return 0;
}
