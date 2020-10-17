#include <iostream>

using namespace std;

// ESTRUCTURAS

struct animal{
    string nombre;
    string tipo;
    int garrapatas;
    bool amistoso;
}animalito;

struct persona{
    string nombre;
    string rut;
    int edad;
}personita;

typedef persona comuna[20]; 

// ANIMAL

void crearAnimal(animal *animalejo){
    cout<<"Creando Animal"<<endl;
    cout<<"Nombre del animal: ";
    cin>>(*animalejo).nombre;
    fflush(stdin);
    cout<<endl<<"Tipo de bestia: ";
    cin>>(*animalejo).tipo;
    fflush(stdin);
    cout<<endl<<"Garrapatas del animal: ";
    cin>>(*animalejo).garrapatas;
    (*animalejo).amistoso = false; 
}

void desplegarAnimal(animal animalejo){
    cout<<"Desplegando "<<animalejo.nombre<<endl;
    cout<<"Tipo: "<<animalejo.tipo<<endl;
    cout<<"Este animal es: ";
    if(animalejo.amistoso == false){ cout<<"Peligroso "; }
    else{ cout<<"Amistoso" ;}
}

// PERSONA

// void crearPersona(persona *personaje){
//     cout<<"Creando Persona"<<endl;
//     cout<<"Nombre de la persona: ";
//     cin>>(*personaje).nombre;
//     fflush(stdin);
//     cout<<endl<<"RUT de la persona: ";
//     cin>>(*personaje).rut;
//     fflush(stdin);
//     cout<<endl<<"Edad de la persona: ";
//     cin>>(*personaje).edad; 
// }

void desplegarPersona(persona personaje){
    cout<<"Desplegando a "<<personaje.nombre<<endl;
    cout<<"RUT: "<<personaje.rut<<endl;
    cout<<"Edad: ";
    cout<<personaje.edad<<endl;
}

int main(){
    // animal animalito;
    // crearAnimal(&animalito);
    // cout<<endl;
    // desplegarAnimal(animalito);
    // cout<<endl<<endl;

    comuna puenteAlto;
    // AGREGANDO PERSONA
    for(int i=0; i<20; i++){ 
        puenteAlto[i].nombre = "Jose";
        puenteAlto[i].rut = "15.776.386-8";
        puenteAlto[i].edad = 24;
    }
    // MOSTRAR PERSONA
    for(int j=0; j<20; j++){ cout<<"Persona Numero "<<j+1<<" ";
        desplegarPersona(puenteAlto[j]); 
        cout<<endl;
    }
    return 0;
}