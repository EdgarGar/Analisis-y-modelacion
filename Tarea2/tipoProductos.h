#include "Desktop.h"
#include "Laptop.h"
#include "Tablet.h"
#include "Netbook.h"
#include <string.h>

class tipoProductos{
public:

  //Constructor
  tipoProductos(){}

  virtual Computadora* created(string) = 0;

  Computadora* procesos(string type){
    Computadora* newProduct = created(type);
    newProduct->componetSelection();
    newProduct->componentAssembly();
    newProduct->intallSoftware();
    newProduct->packaging();
    return newProduct;
  }
};
