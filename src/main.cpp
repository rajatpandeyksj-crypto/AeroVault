#include "passenger.h"
#inlcude <iostream>
#inlcude <vector>
#include <string>

using namespace std;

int main (){

  vector <passenger> passengers;

  passenger p1("rajat", 19, 8077016775);
  passengers.push_back(p1);

  passenger p2("Naman", 25, 8077016700);
  passengers.push_back(p2);

  passenger p3("Deepak", 23, 9897272454);
  passengers.push_back(p3);

  passenger p4("Rohit", 27, 8077099915);
  passengers.push_back(p4);

  string name;
  int m = passengers.size();

  cin >> name;

  bool found = false;

  for (int i =0; i < m; i++){
  if (name == passengers[i]){
      found = true;
    passengers[i].display();
    break;
  }
    
  }

  if (!found){
    cout << "\n Passenger not Found";
  }

}



