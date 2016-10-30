#include <iostream>
#include <time.h>
#include <chrono>
#include <unistd.h>

//using namespace std;

void time_h();
void chrono_h();

int main() {

    time_h();
    chrono_h();

    return 0;
}

void time_h() {

    // start timer
    time_t start = time(0);

    // wait for two seconds
    sleep(2);

    // calc difference
    double seconds_since_start = difftime( time(0), start);
    // show stop time
    std::cout << "time.h: stop time -> " << seconds_since_start << "s" << std::endl;

    return;

}

void chrono_h() {

    using namespace std;

    /* uses high res clock for timing */

    // start taking time
	auto start_time = chrono::high_resolution_clock::now();

        sleep(65); // wait for two seconds

    // stop taking time
	auto end_time = chrono::high_resolution_clock::now();

    // print time in seconds and milliseconds
    cout << "chrono -> ";
    cout << chrono::duration_cast<chrono::hours>(end_time - start_time).count() << "h - ";
    cout << chrono::duration_cast<chrono::minutes>(end_time - start_time).count() << "m - ";
	cout << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << "s - ";
	cout << chrono::duration_cast<chrono::microseconds>(end_time - start_time).count() << "ms" << endl;

}
