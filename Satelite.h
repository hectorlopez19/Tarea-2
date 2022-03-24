#include <iostream>
#include "CelestialBody.h"

using namespace std;

class Satelite : public CelestialBody {
  private:
    string orbitTo;

  public:
    Satelite(string name, string distance, string orbitTo) : CelestialBody(name, distance) {
      this -> orbitTo = orbitTo;
    }
    
    void showInfo() {
      cout << orbitTo << "'s moon: ";
      CelestialBody :: showInfo();
      cout << endl;
    }
};