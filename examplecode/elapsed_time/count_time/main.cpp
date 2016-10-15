#include <iostream>
#include <chrono>
#include <unistd.h>

//using namespace std;

// function prototype
void chrono_h();

int main() {

    chrono_h();

    return 0;
}

// time related calculations
void chrono_h() {

    using namespace std;

    /* uses high res clock for timing */

    // start taking time
	auto start_time = chrono::high_resolution_clock::now();

        sleep(2); // wait for two seconds

    // stop taking time
	auto end_time = chrono::high_resolution_clock::now();

    // if time since start >= 60 mins
    if((chrono::duration_cast<chrono::minutes>(end_time - start_time).count()) >= 60) {

        // print time in hours
        cout << chrono::duration_cast<chrono::hours>(end_time - start_time).count() << " hours" << endl;;

    }

    else {

        // print time in minutes
        cout << chrono::duration_cast<chrono::minutes>(end_time - start_time).count() << " minutes" << endl;

    }

    // get time in seconds
    // cout << chrono::duration_cast<chrono::seconds>(end_time - start_time).count() << " seconds" << endl;

}
