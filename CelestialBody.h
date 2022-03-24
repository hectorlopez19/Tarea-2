#pragma once
#include <iostream>
using namespace std;

class CelestialBody {
  private:
    string name, distance;

  public:
    CelestialBody(string name, string distance) {
      this -> name = name;
      this -> distance = distance;
    }
    
    virtual void showInfo() {
      cout << name << endl;
      cout << "Distance to Earth: " << distance << endl;
    }
};
