#include "CelestialBody.h"

using namespace std;

class Star : public CelestialBody {
  private:
    string starType;
    float solarMass;

  public:
    Star(string name, string distance, string starType, float solarMass) : CelestialBody(name, distance) {
      this -> starType = starType;
      this -> solarMass = solarMass;
    }

    void showInfo() {
      cout << "Star: ";
      CelestialBody :: showInfo();
      cout << "Type: " << starType << endl;
      cout << "Solar mass: " << solarMass << endl << endl;
    }
};