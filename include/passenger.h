#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <string>

using namespace std;

class passenger {
    
public:
    string name;
    int age;
    string phone;

    passenger(string n, int a, string p) {
        name = n;
        age = a;
        phone = p;
    }

    void display1() {
        cout << "Name: " << name << endl;
        
        cout << "Age: " << age << endl;
        
        cout << "Phone: " << phone << endl;
    }
}; 

#endif
