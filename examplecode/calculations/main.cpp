#include <iostream>

class mean_values {

private:
    // attributes = mean values to calculate
    double mean_speed;
    double mean_consumption;

public:
    // constructor to initialize mean values to zero
    mean_values() {

        mean_speed = 0.0;
        mean_consumption = 0.0;

    }

    // GETs
    double get_mean_speed() {

        return mean_speed;

    }

    double get_mean_consumption() {

        return mean_consumption;

    }

    // calculations
    double calculate_mean_speed(double distance_total, double time_total) {

        // calculates mean speed from total distance / total time
        mean_speed = distance_total / time_total;
        return mean_speed;

    }

    double calculate_mean_consumption(double consumption_total, double time_total) {

        // calculates mean speed from total distance / total time
        mean_consumption = consumption_total / time_total;
        return mean_consumption;

    }

};

int main() {

    // create object
    mean_values *m_vals = new mean_values();

        std::cout << m_vals->get_mean_speed() << std::endl;
        std::cout << m_vals->get_mean_consumption() << std::endl;

        // test for 65 m total distance and 9 seconds time
        std::cout << m_vals->calculate_mean_speed(65, 9) << std::endl;

        // test for 0.002833 liters (7.5 liters/100km) and 9 seconds time
        std::cout << m_vals->calculate_mean_consumption(0.01875, 9) << std::endl;

    delete(m_vals);

return 0;
}
