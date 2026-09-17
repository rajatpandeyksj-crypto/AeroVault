#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include "flight.h"
#include "passenger.h"

using namespace std;

class Reservation {
private:
    string passengerName;
    string flightNumber;

public:

    Reservation(string name, string number) {
        passengerName = name;
        flightNumber = number;
    }

    void display() {
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Flight Number: " << flightNumber << endl;
    }
};

void makeReservation(Flight& flight, passenger& p);

#endif
