#include <iostream>
#include "CelestialBody.h"

using namespace std;

class BlackHole : public CelestialBody {
  private:
    string blakHoleType;

  public:
    BlackHole(string name, string distance, string blackHoleType) : CelestialBody(name, distance) {
      this -> blakHoleType = blackHoleType;
    }
    
    void showInfo() {
      cout << "Black hole: ";
      CelestialBody :: showInfo();
      cout << "Type: " << blakHoleType << endl << endl;
    }
};