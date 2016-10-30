/* the cpp file for the header, define methods here */

#include <iostream>
#include "example.h"

using namespace std;

// constructor without parameters
example_class::example_class() {

    cout << "object created" << endl;

};

// constructor with parameters
example_class::example_class(int x, int y) {

    a = x;
    b = y;

}

// method 1
void example_class::set_ab() {

    cout << "enter a -> ";
    cin >> a;
    cout << "enter b -> ";
    cin >> b;

}
// method 2
void example_class::get_ab() {

    cout << a << endl;
    cout << b << endl;

}
// method 3
double example_class::calc_result() {

    result = (double)a / (double)b;
    return result;

}
