#include "reservation.h"
#include "flight.h"
#include "passenger.h"

void makeReservation(Flight& flight, passenger& p) {

    if (flight.bookseat()) {

        Reservation r1(p.name, flight.flightnumber);

        r1.display();

        cout << "Seats Left: " << flight.seats << endl;
    }
    else {
        cout << "No seats left." << endl;
    }
}
