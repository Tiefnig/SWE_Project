#include <iostream>
#include "example.h"
#include "example.cpp"

using namespace std;

int main() {

    double res; // result from calculation

    // create objects
    example_class *e1;
    example_class e2(5,2);

    // set pointer
    e1 = &e2;

    // call methods
    e1->get_ab();
    res = e1->calc_result();

    cout << "res = " << res << endl;

return 0;

}
