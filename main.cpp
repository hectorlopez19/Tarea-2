#include <iostream>
#include "Galaxy.h"
#include "Star.h"
#include "BlackHole.h"
#include "Planet.h"
#include "Satelite.h"

using namespace std;

int main() {
  cout << endl;

  Galaxy andromeda("Andromeda", "2.5 million light-years", "Spiral");
  andromeda.showInfo();

  Star betelgeuse("Betelgeuse", "643 light-years", "Red supergiant", 18.5);
  betelgeuse.showInfo();

  BlackHole sagittariusA("Sagittarius A*", "25 900 light-years", "Supermassive");
  sagittariusA.showInfo();

  Planet mars("Mars", "54 600 000 kilometers", "Rocky", "No");
  mars.showInfo();

  Satelite titan("Titan", "3 000 000 000 kilometers", "Jupiter");
  titan.showInfo();
}