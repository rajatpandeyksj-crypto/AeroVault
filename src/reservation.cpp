#include "flight.h"
#include "passenger.h"
#include "reservation.h"

void makeReservation(vector<Flight>& flights, vector<passenger>& passengers) {

    string name;
    string number;

    cout << "\nEnter Passenger Name: ";
    cin >> name;

    bool passengerFound = false;

    for (int i = 0; i < passengers.size(); i++) {

        if (name == passengers[i].name) {

            passengerFound = true;

            cout << "\nPassenger Found!" << endl;
            passengers[i].display1();

            break;
        }
    }

    if (!passengerFound) {
        cout << "\nPassenger not found." << endl;
        return;
    }

    cout << "\nEnter Flight Number: ";
    cin >> number;

    bool flightFound = false;

    for (int i = 0; i < flights.size(); i++) {

        if (number == flights[i].flightnumber) {

            flightFound = true;

            if (flights[i].bookseat()) {

                Reservation r1(name, number);

                r1.display();

                cout << "Seats Left: "
                     << flights[i].seats << endl;
            }
            else {
                cout << "\nNo seats left." << endl;
            }

            break;
        }
    }

    if (!flightFound) {
        cout << "\nFlight not found." << endl;
    }
}
