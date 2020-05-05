//************************************************************
//REPÚBLICA BOLIVARIANA DE VENEZUELA
//MINISTERIO DEL PODER POPULAR PARA LA DEFENSA
//UNIVERSIDAD NACIONAL EXPERIMENTAL DE LA FUERZAS ARMADAS
//T.S.U. ANÁLISIS Y DISEÑO DE SISTEMAS
//@IbrahimVelasquez
//19.435.308
//©2020
//*************************************************************
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;

void imprimil(string str)
{
    cout <<str;
}
bool booleano(char opc)
{
    if (opc =='y') return true;
    else return false;
    }

bool confirmar(int inumtab)
{
    if (inumtab >0) return true;
    else return false;
    }


#endif // FUNCIONES_H_INCLUDED
//************************************************************************************
#include <iostream>
#include <fstream>
#include "funciones.h"
using namespace std;
//************************************************************************************
//1er Programa
//*************************************************************************************
void programcargadata();
void escritarchi(int ici[2],string cnombres[2],string capellidos[2],string cdireccion[2]);
//************************************************************************************
//2do Programa
//************************************************************************************
void programanumtabla();
void tabsuma(int inumtab,int*&pi);
void tabrest(int inumtab,int*&pi);
void tabmult(int inumtab,int*&pi);
void tabdivi(int inumtab,int*&pi);
//*************************************************************************************
//3er Programa
//*************************************************************************************
void programintentocla();
struct registro{
    string iclaveing;
} clave;

void iclavecoor(){
    ofstream archivo("clave.txt");
    archivo << "12345";
    archivo.close();
}

bool login( string password){
    ifstream archivo("clave.txt");
    string busqueda;
    busqueda = password;
    string linea;
    while(!archivo.eof()){
        getline(archivo, linea);
        if(linea == busqueda){
            return true;
        }
        else{
            return false;
        }
    }
}
//*************************************************************************************

int main()
{
    char yn;
    int choise,i;
    bool gameon=true, run=true;

    while (run){
system("CLS");
cout << "**.========================================.**\n";
cout << "**·========================================'**\n";
cout << "**|      __  __   ____   _    _  _   _     |**\n";
cout << "**|     |   /  | |  __| | '  | || | | |    |**\n";
cout << "**|     |      | | |__  |  ' | || | | |    |**\n";
cout << "**|     | | /| | |  __| |  . | || | | |    |**\n";
cout << "**|     | |  | | | |___ | | '  || |_| |    |**\n";
cout << "**|     |_|  |_/ |____/ |_|  '_| |___/     |**\n";
cout << "**'----------------------------------------'**\n";
cout << "**| 1. Programa Carga y Muestra de datos   |**\n";
cout << "**|                                        |**\n";
cout << "**| 2. Programa Numeros de la Tabla        |**\n";
cout << "**|                                        |**\n";
cout << "**| 3. Programa Intentos de Clave          |**\n";
cout << "**|                                        |**\n";
cout << "**-----------------------------------------**\n";
cout << "*|                0.- Salir                 |*\n";
cout << "**-----------------------------------------**\n";
cout << " Introduzca su Opcion: ";
cin >> choise;
gameon=true;
switch (choise)
    {
    case 1:
           programcargadata();
        system("pause");
          break;

    case 2:
            programanumtabla();
        system("pause");
          break;
    case 3:
            programintentocla();
        system("pause");
        break;
    case 0:
        system("CLS");
cout << "**.========================================.**\n";
cout << "**·========================================'**\n";
cout << "**|      __  __   ____   _    _  _   _     |**\n";
cout << "**|     |   /  | |  __| | '  | || | | |    |**\n";
cout << "**|     |      | | |__  |  ' | || | | |    |**\n";
cout << "**|     | | /| | |  __| |  . | || | | |    |**\n";
cout << "**|     | |  | | | |___ | | '  || |_| |    |**\n";
cout << "**|     |_|  |_/ |____/ |_|  '_| |___/     |**\n";
cout << "**'----------------------------------------'**\n";
cout << "**|                                        |**\n";
cout << "**|                                        |**\n";
cout << "**|          POwering OFF SYSTEM!          |**\n";
cout << "**|                                        |**\n";
cout << "**|                GOOD BYE!               |**\n";
cout << "**|                                        |**\n";
cout << "**|                                        |**\n";
cout << "**-----------------------------------------**\n";
cout << "*|                0.- Salir                 |*\n";
cout << "**-----------------------------------------**\n";
            run=false;
          break;
    }//Fin Switch
}//Fin While Menu
    return 0;
}//fin main
void programcargadata(){
    system("CLS");
ofstream archivo("Datos - Problema 1.txt",ios::app);
    int ici[2],*pi[1];
    string cnombres[2],capellidos[2],cdireccion[2],*pi2[4];
    char opc;
    bool run=true;

    while (run){
    for(int i=0;i<2;i++){
        cout<<"\n\n\tCarga de datos " <<i<<" vez"<<endl;
        cout<<"\tCI.-: ";cin>>ici[i];
        cin.ignore();
        cout<<"\tNombres: ";getline(cin,cnombres[i]);
        cout<<"\tApellidos: ";getline(cin,capellidos[i]);
        cout<<"\tDireccion: ";getline(cin,cdireccion[i]);

    }
       /* system("cls");
        pi[0]=&ici[0];
        pi2[0]=&cnombres[0];
        pi2[1]=&capellidos[0];
        pi2[2]=&cdireccion[0];*/
        cout<<"\n\n\tMuestra de datos a introducir en archivo "<<endl<<endl;
        for(int i=0;i<2;i++){
        pi[0]=&ici[i];
        pi2[0]=&cnombres[i];
        pi2[1]=&capellidos[i];
        pi2[2]=&cdireccion[i];
        cout<<"\tCI.-: \t\t"<<*pi[0]<<endl;
        cout<<"\tNombres: \t"<<*pi2[0]<<endl;
        cout<<"\tApellidos: \t"<<*pi2[1]<<endl;
        cout<<"\tDireccion: \t"<<*pi2[2]<<endl<<endl;
    }
        cout<<"\tDesea agregar estos datos al archivo?(y/n) ";
        cin>>opc;
        if (booleano(opc)==true){
            escritarchi(ici,cnombres,capellidos,cdireccion);//Funcion Escribir en Archivo.

            cout<<"\tDatos Agregados Correctamente"<<endl<<endl;
        }
        else if (booleano(opc)==false){
           cout<<"\tDatos no agregados"<<endl<<endl;
        }//else opc
        cout<<"\tDesea agregar mas datos al archivo?(y/n) ";
        cin>>opc;
        if (booleano(opc)==true){
            system("CLS");
            cout<<"\tIntroduzca los nuevos datos "<<endl<<endl;}

        else if (booleano(opc)==false){
            cout <<endl<<"\t Hasta luego...";
            run=false;}
            //run=true;

    }//while run
}

void escritarchi(int ici[2],string cnombres[2],string capellidos[2],string cdireccion[2])
{
    ofstream archivo("Datos - Problema 1.txt",ios::app);
for(int i=0;i<2;i++){
                archivo <<"\tCI.-: \t\t"<<ici[i]<<endl;
                archivo <<"\tNombres: \t"<<cnombres[i]<<endl;
                archivo <<"\tApellidos: \t"<<capellidos[i]<<endl;
                archivo <<"\tDireccion: \t"<<cdireccion[i]<<endl<<endl;
//archivo.close();
            }
}
//**************************************************************************************
//**************************************************************************************
void programanumtabla(){
    int inumtab, *pi;

    ofstream archivero("Tablas - Problema 2.txt",ios::trunc);//Creacion de archivo con trunc
    cout<<"\t\tNumero de la Tabla:";cin>>inumtab;
    //if (inumtab >0){
    if (confirmar(inumtab)==true){
    system("CLS");
    pi=&inumtab;
    //   for(int i=1; i<=10; i++)
    //      cout<<"\t\t"<<i<<" + "<<inumtab<<" = "<<i+inumtab<<endl;

                tabsuma(inumtab,pi);//Funcion Suma

      //   for(int i=1; i<=10; i++)
      //      cout<<"\t\t"<<i<<" - "<<inumtab<<" = "<<i-inumtab<<endl;

                  tabrest(inumtab,pi);//Funcion Resta

       //  for(int i=1; i<=10; i++)
       //     cout<<"\t\t\t"<<i<<" * "<<inumtab<<" = "<<i*inumtab<<endl;

                   tabmult(inumtab,pi);//Funcion Multiplicacion

        //for(int i=1; i<=10; i++)
        //   cout<<"\t\t\t\t"<<i<<" / "<<inumtab<<" = "<<i/inumtab<<endl;

                     tabdivi(inumtab,pi);//Funcion Division
    }
    else {
        cout<<"\t\t Numero Invalido"<<endl;
    }
}
void tabsuma(int inumtab, int *&pi)
{
    ofstream archivero("Tablas - Problema 2.txt",ios::app);
    for(int i=1; i<=10; i++){
            //pi=&inumtab; //puntero señalando a inumerotabla
            archivero <<"\t"<<i<<" + "<<inumtab<<" = "<<i+inumtab<<endl;
            cout<<"\t"<<i<<" + "<<*pi<<" = "<<i+*pi<<endl;
    }
    archivero.close();
}
void tabrest(int inumtab, int *&pi)
{
    ofstream archivero("Tablas - Problema 2.txt",ios::app);
    for(int i=1; i<=10; i++){
                archivero <<"\t\t"<<i<<" - "<<inumtab<<" = "<<i-inumtab<<endl;
                cout<<"\t\t"<<i<<" - "<<*pi<<" = "<<i-*pi<<endl;

            }
    archivero.close();
}
void tabmult(int inumtab, int *&pi)
{
    ofstream archivero("Tablas - Problema 2.txt",ios::app);
    for(int i=1; i<=10; i++){
                archivero <<"\t\t\t"<<i<<" * "<<inumtab<<" = "<<i*inumtab<<endl;
                cout<<"\t\t\t"<<i<<" * "<<*pi<<" = "<<i*(*pi)<<endl;

    }
    archivero.close();
}
void tabdivi(int inumtab, int *&pi)
{
    ofstream archivero("Tablas - Problema 2.txt",ios::app);
    for(int i=1; i<=10; i++){
                archivero <<"\t\t\t\t"<<i<<" / "<<inumtab<<" = "<<i/inumtab<<endl;
                cout<<"\t\t\t\t"<<i<<" / "<<*pi<<" = "<<i/ *pi<<endl;

    }
    archivero.close();
}
//**************************************************************************************
//**************************************************************************************
void programintentocla(){
    //int iclavecoor = 1234, iclaveing,
    int iintentos=0, *po;
    bool berror=false;
    iclavecoor();
    cout <<"Bienvenido!!";
        while (!berror){



                   system("cls");
                cout << endl << "Introduzca su clave: ";
                cin>> clave.iclaveing;


              if(login(clave.iclaveing) == true){
                    cout<<"\n\CORRRECTA!!! ";
                    po=&iintentos;
                    if (*po <= 0)
                        cout << " al primer intento, ENHORABUENA!"<<endl<<endl;
                    else if (*po >= 0)
                        cout<<" con el numero de intentos fallidos: "<<iintentos<<endl<<endl;
                    berror=true;;
                }
                else{
                    cout << endl << endl << "Login incorrecto."<<endl<<endl;
                    iintentos++;
                     cout<<" Intentos fallidos: "<<iintentos<<endl<<endl;
                         system("pause");
                    //goto inicio;
                }

        }
}
