#ifndef PASSENGER_H
#define PASSENGER_H

passenger{

string name;
int age;
string phone;

passenger( string n, int a, string p){

name = n;
age = a;
phone = p;
  
}
void display(){

cout << "Name: "<< name;
cout << "age: " << age;
cout << "Phone: " << phone;
  
}


};
