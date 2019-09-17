#include <iostream>

using namespace std;

class Persona{
private:
    string nombre;
    string apellido;
    int ci;
public:
    Persona(string, string, int);
    void mostrarPer();
};

class Empleado : public Persona{
private:
    string CodEmpleado;
    string Direccion;
public:
    Empleado(string, string, int,  string, string );
    void mostrarEmp();
};

class Cliente : public Persona{
private:
    string NIT;
public:
    Cliente(string, string, int,  string);
    void mostrarCli();
};
Persona::Persona(string nom, string ape, int ced){
    nombre= nom;
    apellido= ape;
    ci= ced;
}

Empleado::Empleado(string nom, string ape, int ced, string cod, string dir): Persona(nom, ape, ced){
    CodEmpleado= cod;
    Direccion= dir;
}

Cliente::Cliente(string nom, string ape, int ced, string ni): Persona(nom, ape, ced){
    NIT=ni;
}

void Persona::mostrarPer(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"CI: "<<ci<<endl;
}

void Empleado::mostrarEmp(){
    mostrarPer();
    cout<<"Codigo Empleado: "<<CodEmpleado<<endl;
    cout<<"Direccion: "<<Direccion<<endl;
    cout<<"\n";
}

void Cliente::mostrarCli(){
    mostrarPer();
    cout<<"NIT: "<<NIT<<endl;
    cout<<"\n";
}
int main()
{
    Empleado empleado1("Gonzalo", "Fernandez", 7323565, "199801", "Av. 6 de Agosto");
    Cliente cliente1("Deyna","Perez", 7568993, "12000007");

    empleado1.mostrarEmp();
    cliente1.mostrarCli();
    return 0;
}
