#include "Computadora.h"

class Desktop : public Computadora
{
  friend class FactoryConcrete;

public:
  void componentSelection(){
    std::cout << "Selecting components" << std::endl;
  }
  void componentAssembly(){
    std::cout << "Assembly componets" << std::endl;
  }
  void intallSoftware(){
    std::cout << "Intalling Software" << std::endl;
  }
  void packaging(){
    std::cout << "Packaging" << std::endl;
  }
private:
  Desktop(){
    this->type = "Desktop";
  }
};
