#include "tipoProducto.h"

class FactoryConcrete : public Producto{
public:
  Computadora* created(string type){
    if (type == "desktop") {
      Desktop* d = new Desktop(id);
      return d
    } else if (type == "tablet") {
      Tablet* t = new Tablet(id);
      return t;
    } else if (type == "netbook") {
      Netbook* n = new Netbook(id);
      return n;
    } else if (type == "laptop") {
      Laptop* l = new Laptop(id);
      return l;
    } else {
      std::cout << "Type whithout found" << std::endl;
      return NULL;
    }
  }
  static FactoryConcrete* getInstance(){
    static FactoryConcrete* instance = new FactoryConcrete();
    return instance;
   }
private:
  FactoryConcrete(){}
};
