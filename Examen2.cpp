#include <iostream>
#include <string.h>
#include <map>
using namespace std;


class CommandPena
{
    Person *object; //    
    void(Person:: *method)();
  public:
    CommandPena(Person *obj = 0, void(PenaNieto:: *meth)() = 0)
    {
        object = obj;
        method = meth;
    }
    void execute()
    {
        (object-> *method)();
    }
};

class PenaNieto
{
    string name;
    Command cmd; 
  public:
    Person(string n, Command c): cmd(c)
    {
        name = n;
    }
    void Noticia()
    {
        cout << name << "Esta creando una noticia" << endl;
        cmd.execute(); 
};

class CommandHilari
{
    Person *object; //    
    void(Person:: *method)();
  public:
    CommandPena(Person *obj = 0, void(Hilari:: *meth)() = 0)
    {
        object = obj;
        method = meth;
    }
    void execute()
    {
        (object-> *method)();
    }
};

class Hilari
{
    string name;
    Command cmd; 
  public:
    Person(string n, Command c): cmd(c)
    {
        name = n;
    }
    void Noticia()
    {
        cout << name << " Publico en" << endl;
        cmd.execute();
    }
};

class CommandHilari
{
    Person *object; //    
    void(Person:: *method)();
  public:
    CommandPena(Person *obj = 0, void(Trump:: *meth)() = 0)
    {
        object = obj;
        method = meth;
    }
    void execute()
    {
        (object-> *method)();
    }
};

class Trump
{
    string name;
    Command cmd; 
  public:
    Person(string n, Command c): cmd(c)
    {
        name = n;
    }
    void Noticia()
    {
        // "this" is the sender, cmd has the receiver
        cout << name << " is talking" << endl;
        cmd.execute(); // ask the "black box" to callback the receiver
    }
};

class MVSObserver
{
    int MVSNoticias;
  public:
    MVSObserver(int mvs)
    {
        MVSNoticias = mvs;
    }
    void update(int publicaMSV)
    {
        std::cout << publicaMSV << "Publicado por TVAzteca " << '\n';
    }
};

class TelevisaObserver
{
    int TelevisaNoticias;
  public:
    TelevisaObserver(int tel)
    {
        TelevisaNoticias = tel;
    }
    void update(int publicaTel)
    {
        std::cout << publicaTel << "Publicado por Televisa " << '\n';
    }
};

class TVObserver
{
    int TVANoticias;
  public:
    TVAzObserver(int azteca)
    {
        TVANoticias = azteca;
    }
    void update(int publicaAzteca)
    {
        std::cout << publicaAzteca << "Publicado por TVAzteca " << '\n';
    }
};

class RadioObserver
{
    int radioFormula;
  public:
    RadioObserver(int radioFor)
    {
        radioFormula = radioFor;
    }
    void update(int publicaRadio)
    {
        std::cout << publicaRadio << "Publicado por RadioFormula " << '\n';
    }
};

class CNNObserver
{
    int CNNoticias;
  public:
    CNNObserver(int cnn)
    {
        CNNoticias = cnn;
    }
    void update(int publicaCNN)
    {
        std::cout << publicaCNN << "Publicado por RadioFormula " << '\n';
    }
};

class publica
{
	
    string mensaje;
    MVSObserver m_MVS_publica;
    TelevisaObserver m_TELEVISA_publica;
    TVObserver m_TV_publica;
    RadioObserver m_RADIO_publica;
    CNNObserver m_CNN_publica
  public:
    Subject(): m_MVS_publica("PublicadoMVS"), 
    			m_TELEVISA_publica("PublicadoTelevisas"), 
    			m_TV_publica("PublicadoTV"), 
    			m_RADIO_publica("PlicadoRaio"), 
    			m_CNN_publica("PublicadoCNN"){}
    void set_value(int value)
    {
        m_value = value;
        notify();
    }
    void Notifica()
    {
        m_MVS_publica.update(m_value);
        m_TELEVISA_publica.update(m_value);
        m_TV_publica.update(m_value);
        m_RADIO_publica.update(m_value);
        m_CNN_publica.update(m.value);
    };

};

int main()
{
  Person wilma("Wilma", Command());
  Subject subj;
  //subj.set_value(14);
  return 0;
}