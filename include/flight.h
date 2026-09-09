#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <string>
using namespace std;

class Flight{
public:

string flightnumber;
string source;
string destination;
int price;
int seats;

Flight(string fn, string s, string d, int p, int st){
 flightnumber = fn;
  source = s;
  destination = d;
  price = p;
  seats = st;
}


void display(){
cout << "flightnumber: "<<flightnumber<< endl;
cout << "Source: "<< source << endl;
cout << "Destination: "<< destination << endl;
cout << "Price: "<< price << endl;
cout << "Seats: "<< seats << endl;
}
};

#endif
