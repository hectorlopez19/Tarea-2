#include <iostream>
#include "CelestialBody.h"

using namespace std;

class Planet : public CelestialBody {
  private:
    string planetType, habitable;

  public:
    Planet(string name, string distance, string planetType, string habitable) : CelestialBody(name, distance) {
      this -> planetType = planetType;
      this -> habitable = habitable;
    }
    
    void showInfo() {
      cout << "Planet: ";
      CelestialBody :: showInfo();
      cout << "Type: " << planetType << endl;
      cout << "habitable: " << habitable << endl << endl; 
    }
};