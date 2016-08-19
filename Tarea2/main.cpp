#include "FactoryConcrete.h"

int main() {
  //funciones estaticas
  Computadora* Desk = FactoryConcrete::getInstance()->procesos("desktop");
  Computadora* Net = FactoryConcrete::getInstance()->procesos("netbook");
  Computadora* Lap = FactoryConcrete::getInstance()->procesos("laptop");
  Computadora* Tab = FactoryConcrete::getInstance()->procesos("tablet");
  return 0;
}
