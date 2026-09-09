#include <iostream>
#include <vector>
#include "../include/Flight.h"

using namespace std;

int main(){

vector < Flight> flights;

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


  string number;
int n = flights.size ();
 
    cout << "============================" << endl;
    cout << "         AEROVAULT" << endl;
    cout << "============================" << endl;

  cout << "\n Enter The Flight Number: "
cin >> number;

  bool found = false;

  for (int i =0; i < n; i++){
  if (number == flights[i].flightnumber){
   found = true;
    break;
  
  }
  }
     if (!found) {
        cout << "\nFlight not found." << endl;
    }

  return 0;
    
}
