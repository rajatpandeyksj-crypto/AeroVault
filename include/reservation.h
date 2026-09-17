#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>

using namepsace std;

class Reservation{
public:
string passengerName;
string flightNumber;

resrevation(string name, string number){
passengerName = name;
  flightNumber = number;
}

void display(){
  cout << "Passenger Name: " << passengerName << endl;
  cout << "Flight Number: " << flightNumber << endl;
  cout << "Reservation Confirmed" << endl;
}

};
