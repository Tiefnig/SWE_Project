/*
 * This header contains an example class and methods
 * nmt 2016
 */

// include guard
////////////////////////////
 #ifndef EXAMPLE_INCLUDE // name of file = example
 #define EXAMPLE_INCLUDE

// forward class depedencies
////////////////////////////
class example_class;

// dependencies
////////////////////////////
// #include ...

// global variables
/////////////////////////////
const unsigned int ARRAY_SIZE = 100;

// the class(es)
////////////////////////////
// the example class
class example_class {

 private:

     int a;
     int b;
     double result; //

 public:

     // constructors
     example_class();
     example_class(int x, int y);

     // methods
     // sets & gets
     void set_ab();
     void get_ab();
     // calculate something
     double calc_result();

 };

 #endif
