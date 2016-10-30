#include <iostream>
#include <chrono>
#include <unistd.h>

// function to test accuracy of UNIX sleep(), sleep time in sec as argument
void measure_time(int sleep_time) {

    std::cout << "measure time accuracy for " << sleep_time << " seconds" << std::endl;
     // create two timepoints
     std::chrono::time_point<std::chrono::system_clock> start, end;

     // set start time
     start = std::chrono::system_clock::now();

     sleep(sleep_time); // wait 1 second

     // set stop time
     end = std::chrono::system_clock::now();

     // calculate time difference start - stop, cast to double
     std::chrono::duration<double> elapsed_seconds = end-start;

     // datatype conversion
     std::time_t end_time = std::chrono::system_clock::to_time_t(end);

     // show execution time and system time
     std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";

}

// sleeps for one second
void onesectick() {

  std::cout << "tick" << std::endl;
  sleep(1);

}

// a countdown timer
void countdown() {

    int counter = 10;
        //When changed, a second has passed
        int second = (unsigned)time(NULL);
        //If not equal to each other, counter is printed
        int second_timer = second;
        while (counter > 0) {
            second = (unsigned)time(NULL);
            while (second != second_timer) {
                //Do something
                std::cout << counter-- << ", " << std::endl;
                //New value is assigned to match the current second
                second_timer = second;
            }
        }
        std::cout << "0" << std::endl;

}

int main() {

  int i;
  int onesec = (unsigned)time(NULL);
  std::cout << "onesec = " << onesec << std::endl;


  // test sleep for two seconds
  measure_time(2);

  // tick once
  onesectick();

  for(i = 0; i < 5; i++) {

      onesectick();

  }

  countdown();

  return 0;
}
