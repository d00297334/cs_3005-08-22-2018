#include <iostream>
using namespace std;

double do_calculation( double x, double y, string op) {
    double result;

    if (op == "+") {
        result = x + y;
    } else if (op == "-") {
        result = x - y;
    } else if (op == "*"){
        result = x * y;
    } else if (op == "/") {
        result = x / y;
    } else {
        result = 0.0;
    }
    return result;
}

int main() {
    double x;
    double y;
    double z;
    string operation;

    cout << "Number? ";
    cin >> x;

    cout << "Number? ";
    cin >> y;

    cout << "Operation? (+,-,*,/) ";
    cin >> operation;

    z = do_calculation(x, y, operation);

    cout << x << " " << operation << " " << y << endl;
    cout << "The answer is " << z << endl;
    return 0;
}