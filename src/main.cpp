#include <iostream>
#include <vector>
#include <string>

#include "reservation.h"
#include "flight.h"
#include "passenger.h"

using namespace std;

int main() {

    // =========================
    // FLIGHT OBJECTS
    // =========================

    vector<Flight> flights;

    Flight f1("AV1", "DELHI", "BANGLORE", 5500, 40);
    flights.push_back(f1);

    Flight f2("AV2", "CHENNAI", "BANGLORE", 6500, 50);
    flights.push_back(f2);

    Flight f3("AV3", "DEHRADUN", "CHENNAI", 5000, 60);
    flights.push_back(f3);

    Flight f4("AV4", "ODISHA", "BANGLORE", 7000, 45);
    flights.push_back(f4);

    Flight f5("AV5", "DELHI", "HYDERABAD", 3500, 20);
    flights.push_back(f5);


    // =========================
    // PASSENGER OBJECTS
    // =========================

    vector<passenger> passengers;

    passenger p1("Rajat", 19, "8077016775");
    passengers.push_back(p1);

    passenger p2("Naman", 25, "8077016700");
    passengers.push_back(p2);

    passenger p3("Deepak", 23, "9897272454");
    passengers.push_back(p3);

    passenger p4("Rohit", 27, "8077099915");
    passengers.push_back(p4);


    // =========================
    // SEARCH PASSENGER
    // =========================

    string name;

    cout << "============================" << endl;
    cout << "         AEROVAULT" << endl;
    cout << "============================" << endl;

    cout << "\nEnter The Passenger Name: ";
    cin >> name;

    bool passengerFound = false;
    int passengerIndex = -1;

    for (int i = 0; i < passengers.size(); i++) {

        if (name == passengers[i].name) {

            passengerFound = true;
            passengerIndex = i;

            passengers[i].display1();

            break;
        }
    }

    if (!passengerFound) {
        cout << "\nPassenger not found." << endl;
    }


    // =========================
    // SEARCH FLIGHT
    // ======================

    string number;

    cout << "\nEnter The Flight Number: ";
    cin >> number;

    bool flightFound = false;
    int flightIndex = -1;

    for (int i = 0; i < flights.size(); i++) {

        if (number == flights[i].flightnumber) {

            flightFound = true;
            flightIndex = i;

            flights[i].display();

            break;
        }
    }

    if (!flightFound) {
        cout << "\nFlight not found." << endl;
    }


    // =========================
    // MAKE RESERVATION
    // =========================

cout << endl;

    if (passengerFound && flightFound) {

cout << "Booking Done"<< endl;

        makeReservation(
            flights[flightIndex],
            passengers[passengerIndex]
        );
    }


    return 0;
}
