#include <iostream>
#include <string.h>

class Computadora{
protected:
  int id;
  string type;

public:
  //Constructor
  Computadora(){}
  //Destructor
  ~Computadora(){}

  virtual int getId(){
    return this->id;
  }

  virtual int getType(){
    return this->type;
  }
  virtual void componentSelection() = 0;
  virtual void componentAssembly() = 0;
  virtual void intallSoftware() = 0;
  virtual void packaging() = 0;
};
