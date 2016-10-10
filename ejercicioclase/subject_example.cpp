/*
Lucia Garza
Max Segovia 
Edgar Garcia
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Departamento
{
    //string _departamento;
    vector<string> _producto = {"Manzana", "Naranja", "Platano"};
    
  public:
    string _departamento;
    Departamento(string departamento)
    {
      _departamento = departamento;
    }    
    bool update(string producto)
    {
       for(int i = 0; i < _producto.size(); i++)
       {
            if(_producto[i].compare(producto) == 0)
               return true;
       }
       return false;
    }
    
};

class Subject
{
    string _fruta;
    Departamento d_producto;
    bool check;
  public:
    Subject(): d_producto("frutas"){}
    void set_fruta(string fruta)
    {
        _fruta = fruta;
        notify();
    }
    void notify()
    {
        check = d_producto.update(_fruta);
        
        if (check)
            cout<<"Si existe " << _fruta << " en el departamento de "<< d_producto._departamento <<endl;
        else
            cout<<"No existe " << _fruta << " en el departamento de "<< d_producto._departamento <<endl;
    }
};

int main()
{
  Subject subj;
  subj.set_fruta("Platano");
}