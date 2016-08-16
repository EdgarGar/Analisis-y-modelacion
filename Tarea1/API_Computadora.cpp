/*
  A01021730
  Edgar Adrián García Villegas
  Creación de API de computadoras
*/


#include <iostream>
using namespace std;

int component_selection(int computer_type);
int component_assembly(int computer_type);
int software_instalation(int computer_type);
int packing_computer(int computer_type);

int main(){
  std::cout << "Hi, Select A Computer...\n 1 - Desktop\n 2 - Laptop\n 3 - Netbook\n 4 - Tablet\n" << std::endl;

  int comp_type;
  std::cin >> comp_type;

  component_selection(comp_type);
  component_assembly(comp_type);
  software_instalation(comp_type);
  packing_computer(comp_type);
  
  return 0;
}

int component_selection(int computer_type){
  std::cout << "Selecting laptop components" << computer_type << std::endl;
  std::cout << "..........................." << std::endl;
  return 0;
}

int component_assembly(int computer_type){
  std::cout << "Assembling laptop parts" << computer_type << std::endl;
  std::cout << "..........................."<< std::endl;
  return 0;
}

int software_instalation(int computer_type){
  std::cout << "Installing software of the laptop" << computer_type << std::endl;
  std::cout <<"..........................."  << std::endl;
  return 0;
}

int packing_computer(int computer_type){
  std::cout << "Ready !!!" << computer_type << std::endl;
  std::cout << "..........................." << std::endl;
  return 0;
}