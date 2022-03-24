#include <iostream>
#include "CelestialBody.h"

using namespace std;

class Galaxy : public CelestialBody {
  private:
    string galaxyType;

  public:
    Galaxy(string name, string distance, string galaxyType) : CelestialBody(name, distance) {
      this -> galaxyType = galaxyType;
    }
    
    void showInfo() {
      cout << "Galaxy: ";
      CelestialBody :: showInfo();
      cout << "Type: " << galaxyType << endl << endl;
    }
};