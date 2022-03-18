#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <map>
#include <cstdlib>

using namespace std;
list<string> local;
list<string> cartelera;
list<string> genero;
list<string> restriccion;
list<string> duracion;
list<string> idioma;
list<string> estrenos;
list<string> tandas;
list<list<string> > general;
list<string> cartelera1;
list<string> comedia;
list<string> accion;
list<string> ciencia_ficcion;
list<string> drama;
list<string> fantasia;
list<string> melodrama;
list<string> musical;
list<string> romance;
list<string> suspenso;
list<string> terror;
list<string> animada;
list <string> listacedulas;
list <string> listaedad;
list <string> listagenero;
list <string> liselecloca;
list <string> liselectan;
list <string> liselecpeli;
list <string> liscantcam;
list <string> liscatadul;
list <string> liscantnin;
list <string> listabutacas;
list <string> liscampocup;
list <string> ochonosala1;
list <string> ochonosala2;
list <string> ochonosala3;
list <string> ochonosala4;
list <string> ochonosala5;
list <string> josnosala1;
list <string> josnosala2;
list <string> josnosala3;
list <string> josnosala4;
list <string> josnosala5;
list <string> ranosala1;
list <string> ranosala2;
list <string> ranosala3;
list <string> ranosala4;
list <string> ranosala5;
void menu();
void pantallainicio ();
void listcompracliente();
void menuadmi();
void salas();
void validar ();
void menucambioydevolucion ();
void menuclientes();
void consultas ();
bool existe = false;
string a;
string ee;
// variables para las consultas
int cantidad= 0;
int generof =0;
int generom =0;
int tres=0;
int seis =0;
int ocho =0;
//Variables Factura
string ax;
string ll;
string xd;
string med;
string rac;
string sss;
string ay;

void factura ()
{
    cout<<"-----------------------------"<<endl;
    cout<<"         FACTURA  "<<endl;
    cout<<"Cliente: "<<ax<<endl;
    cout<<"Edad: "<<ll<<endl;
    cout<<"Genero: "<<xd<<endl;
    cout<<"Localidad: "<<med<<endl;
    cout<<"Pelicula: "<<rac<<endl;
    cout<<"Horario: "<<sss<<endl;
    cout<<"Cantidad de entradas: "<<ay<<endl;
    cout<<"Butacas: "<<sss<<endl;
    cout<<"-----------------------------"<<endl;
    menucambioydevolucion();

}
void horariopreferido()
{
    cout <<endl;
    int s=1;
    int h=1;
    tres =tres+s;
    seis =seis+h;
    if (tres >seis && seis > ocho){
        cout<<"El horario preferido por los clientes es el de las 3:00PM "<<endl;}
    if (seis >tres && tres >ocho){
        cout<<"El horario preferido por los clientes es el de las 6:00PM "<<endl;}
    if (ocho>seis && seis>ocho){
        cout<<"El horario preferido por los clientes es el de las 8:00PM "<<endl;}
    while (true){
        string q;
        cout << "Presione 1 para regresar al menu principal" <<endl;
        cin>> q;
        if (q=="1"){
        consultas ();
        }
        else {
        cout<<"Valor invalido"<<endl;}
    }

}
void cantidadhombresmujeres ()
{
    cout<<endl;
    int aa=1;
    generof=generof+aa;
    generom=generom+aa;
    cout<<" Cantidad de mujeres que realizaron la compra de entradas: "<< generof<<endl;
    cout<<" Cantidad de hombres que realizaron la compra de entradas: "<< generom<<endl;
    while (true){
        string q;
        cout << "Presione 1 para regresar al menu principal" <<endl;
        cin>> q;
        if (q=="1"){
        consultas ();
        }
        else {
        cout<<"Valor invalido"<<endl;}
    }
}
void cantidadentradasvendidas()
{
    cout<<endl;
    int ss=5; // cantidad de entradas de los datos establecidos por defecto
    cantidad =cantidad +ss;
    cout<<" Cantidad de entradas vendidas: "<< cantidad<<endl;
    while (true){
        string q;
        cout << "Presione 1 para regresar al menu principal" <<endl;
        cin>> q;
        if (q=="1"){
        consultas ();
        }
        else {
        cout<<"Valor invalido"<<endl;}
    }

}
void consultas ()
{
    while (true){
    string w;
    cout <<"::::Consultas::::"<<endl;
    cout << "Ingrese:"<<endl;
    cout << "   1 para ver la cantidad de entradas vendidas"<<endl;
    cout << "   2 para conocer la cantidad de hombres y mujeres que realizaron la compra de entradas"<<endl;
    cout << "   3 para ver el horario preferido por los clientes "<<endl;
    cout << "   4 para regresar"<<endl;
    cin >> w;
    if (w == "1"){
        cantidadentradasvendidas();
    }
    if (w == "2"){
        cantidadhombresmujeres ();
    }
    if (w == "3"){
        horariopreferido();
    }
    if (w == "4"){
        menuadmi();
    }
    else{
        cout<<"Valor invalido, favor digite un numero nuevamente"<<endl;}
    }
}
void devolverboletos()
{
    cout <<" -Para devolder las entradas-"<<endl;
    string b;
    cout << " Ingrese su numero de cedula: "<<endl;
    cin >> b;
    list <string>::iterator pos;
    pos = find (listacedulas.begin(), listacedulas.end(), b); // busca si esta en la lista
    if (pos!= listacedulas.end()){
        cout << "Dato encontrado" << endl;
        listacedulas.pop_back();
        listaedad.pop_back();
        listagenero.pop_back();}
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    string c;
    cout << " Ingrese el nombre de la localidad  seleccionada(como lo digito en la compra): "<<endl;
    cin >> c;
    list <string>::iterator it;
    it = find (liselecloca.begin(), liselecloca.end(), c); // busca si esta en la lista
    if (pos!= liselecloca.end()){
        cout << "Dato encontrado" << endl;
        liselecloca.pop_back();}
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    string d;
    cout <<"Ingrese el nombre de la pelicula selecionada(como lo digito en la compra):"<<endl;
    cin>>d;
    list <string>::iterator pos1;
    pos1 = find (liselecpeli.begin(), liselecpeli.end(), d);
    if (pos1!= liselecpeli.end()){
        cout << "Dato encontrado" << endl;
        liselecpeli.pop_back();}
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    cout<<"Horarios"<<endl;
    list <string> ::iterator ret;
    ret= tandas.begin();
    int f=1;
    while (ret!=tandas.end()){
            cout<<f<<" "<<*ret<<endl;
            ret++;
            f++;}
    string r;
    cout <<"Presione el numero del horario que eligio "<<endl;
    cin>>r;
    string m;
    if (r=="1"){
        m="3:00PM";}
    else if (r=="2"){
        m= "6:00PM";}
    else if (r=="3"){
        m="8:00PM";
    }
    list <string>::iterator et;
    et = find (liselectan.begin(), liselectan.end(), m);
    if (et!= liselectan.end()){
        cout << "Dato encontrado" << endl;
        liselectan.pop_back();}
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    string af;
    cout<< "Ingrese la cantidad de campos que compro:"<<endl;
    cin>>af;
    liscantcam.pop_back();
    liscatadul.pop_back();
    liscantnin.pop_back();
    cout<<endl;
    string ww;
    cout << "Sala 1: TheHungerGames "<<endl;
    cout << "Sala 2: ElAnalfabeto "<<endl;
    cout << "Sala 3: MissionImposible "<<endl;
    cout << "Sala 4: TheAvengers"<<endl;
    cout << "Sala 5: Coco"<<endl;
    cout <<"Ingrese el numero de la sale de la pelicula correspondiente: "<<endl;
    cin>>ww;
    if (c=="SanCarlos"){
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas elegidas: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            ochonosala1.pop_back();}
            else if (ww=="2"){
            ochonosala2.pop_back();}
            else if (ww=="3"){
            ochonosala3.pop_back();}
            else if (ww=="4"){
            ochonosala4.pop_back();}
            else if (ww=="5"){
            ochonosala5.pop_back();}
            }

    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            ochonosala1.pop_back();}
            else if (ww=="2"){
            ochonosala2.pop_back();}
            else if (ww=="3"){
            ochonosala3.pop_back();}
            else if (ww=="4"){
            ochonosala4.pop_back();}
            else if (ww=="5"){
            ochonosala5.pop_back();}}

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ochonosala1.pop_back();}
        else if (ww=="2"){
            ochonosala2.pop_back();}
        else if (ww=="3"){
            ochonosala3.pop_back();}
        else if (ww=="4"){
            ochonosala4.pop_back();}
        else if (ww=="5"){
            ochonosala5.pop_back();}}

    else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ochonosala1.pop_back();}
        else if (ww=="2"){
            ochonosala2.pop_back();}
        else if (ww=="3"){
            ochonosala3.pop_back();}
        else if (ww=="4"){
            ochonosala4.pop_back();}
        else if (ww=="5"){
            ochonosala5.pop_back();} }

    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ochonosala1.pop_back();}
        else if (ww=="2"){
            ochonosala2.pop_back();}
        else if (ww=="3"){
            ochonosala3.pop_back();}
        else if (ww=="4"){
            ochonosala4.pop_back();}
        else if (ww=="5"){
            ochonosala5.pop_back();}}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}}
    if (c=="SanJose"){
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas elegidas: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            josnosala1.pop_back();}
            else if (ww=="2"){
            josnosala2.pop_back();}
            else if (ww=="3"){
            josnosala3.pop_back();}
            else if (ww=="4"){
            josnosala4.pop_back();}
            else if (ww=="5"){
            josnosala5.pop_back();}
            }

    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            josnosala1.pop_back();}
            else if (ww=="2"){
            josnosala2.pop_back();}
            else if (ww=="3"){
            josnosala3.pop_back();}
            else if (ww=="4"){
            josnosala4.pop_back();}
            else if (ww=="5"){
            josnosala5.pop_back();}}

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            josnosala1.pop_back();}
        else if (ww=="2"){
            josnosala2.pop_back();}
        else if (ww=="3"){
            josnosala3.pop_back();}
        else if (ww=="4"){
            josnosala4.pop_back();}
        else if (ww=="5"){
            josnosala5.pop_back();}}

    else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            josnosala1.pop_back();}
        else if (ww=="2"){
            josnosala2.pop_back();}
        else if (ww=="3"){
            josnosala3.pop_back();}
        else if (ww=="4"){
            josnosala4.pop_back();}
        else if (ww=="5"){
            josnosala5.pop_back();} }

    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            josnosala1.pop_back();}
        else if (ww=="2"){
            josnosala2.pop_back();}
        else if (ww=="3"){
            josnosala3.pop_back();}
        else if (ww=="4"){
            josnosala4.pop_back();}
        else if (ww=="5"){
            josnosala5.pop_back();}}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}}
    if (c=="SanRamon"){
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas elegidas: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            ranosala1.pop_back();}
            else if (ww=="2"){
            ranosala2.pop_back();}
            else if (ww=="3"){
            ranosala3.pop_back();}
            else if (ww=="4"){
            ranosala4.pop_back();}
            else if (ww=="5"){
            ranosala5.pop_back();}
            }

    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}
            listabutacas.pop_back();
            if (ww=="1"){
            ranosala1.pop_back();}
            else if (ww=="2"){
            ranosala2.pop_back();}
            else if (ww=="3"){
            ranosala3.pop_back();}
            else if (ww=="4"){
            ranosala4.pop_back();}
            else if (ww=="5"){
            ranosala5.pop_back();}}

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ranosala1.pop_back();}
        else if (ww=="2"){
            ranosala2.pop_back();}
        else if (ww=="3"){
            ranosala3.pop_back();}
        else if (ww=="4"){
            ranosala4.pop_back();}
        else if (ww=="5"){
            ranosala5.pop_back();}}

    else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ranosala1.pop_back();}
        else if (ww=="2"){
            ranosala2.pop_back();}
        else if (ww=="3"){
            ranosala3.pop_back();}
        else if (ww=="4"){
            ranosala4.pop_back();}
        else if (ww=="5"){
            ranosala5.pop_back();} }

    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;}
        listabutacas.pop_back();
        if (ww=="1"){
            ranosala1.pop_back();}
        else if (ww=="2"){
            ranosala2.pop_back();}
        else if (ww=="3"){
            ranosala3.pop_back();}
        else if (ww=="4"){
            ranosala4.pop_back();}
        else if (ww=="5"){
            ranosala5.pop_back();}}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}}

    cout<<"Compra eliminada exitosamente"<<endl;
    while(true){
    string q;
    cout << "Presione 1 para regresar  " <<endl;
    cin>> q;
    if (q=="1")
    {
        menuclientes();}
    else {
        cout<<"Valor invalido"<<endl;}
    }

}
void cambiobutacas ()
{
    cout <<"Para cambiar las butacas"<<endl;
    string w;
    cout <<"Ingrese su numero de cedula:"<<endl;
    cin>>w;
    list <string>::iterator pos;
    pos = find (listacedulas.begin(), listacedulas.end(), w); // busca si esta en la lista
    if (pos!= listacedulas.end()){
        cout << "Numero de cedula encontrado " << endl;}
    else{
        cout << "Cedula no encontrado"<<endl;
        return menucambioydevolucion ();}
    cout <<"Ingrese el nombre de la localidad selecionada(como lo digito en la compra):"<<endl;
    cin>>ee;
    list <string>::iterator it;
    it = find (liselecloca.begin(), liselecloca.end(), ee); // busca si esta en la lista
    if (it!= liselecloca.end()){
        cout << "Dato encontrado" << endl;}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}

    string q;
    cout <<"Ingrese el nombre de la pelicula selecionada(como lo digito en la compra):"<<endl;
    cin>>q;
    list <string>::iterator pos1;
    pos1 = find (liselecpeli.begin(), liselecpeli.end(), q); // busca si esta en la lista
    if (pos1!= liselecpeli.end()){
        cout << "Dato encontrado" << endl;}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}

    cout<<"Horarios"<<endl;
    list <string> ::iterator ret;
    ret= tandas.begin();
    int f=1;
    while (ret!=tandas.end()){
            cout<<f<<" "<<*ret<<endl;
            ret++;
            f++;}
    string r;
    cout <<"Presione el numero del horario que eligio "<<endl;
    cin>>r;
    string d;
    if (r=="1"){
        d="3:00PM";}
    else if (r=="2"){
        d= "6:00PM";}
    else if (r=="3"){
        d="8:00PM";
    }
    list <string>::iterator et;
    et = find (liselectan.begin(), liselectan.end(), d);// busca si esta en la lista
    if (et!= liselectan.end()){
        cout << "Dato encontrado" << endl;}
    else{
        cout << "Dato no encontrado"<<endl;
        return menucambioydevolucion ();}
    string ww;
    cout << "Sala 1: TheHungerGames "<<endl;
    cout << "Sala 2: ElAnalfabeto "<<endl;
    cout << "Sala 3: MissionImposible "<<endl;
    cout << "Sala 4: TheAvengers"<<endl;
    cout << "Sala 5: Coco"<<endl;
    cout <<"Ingrese el numero de la sale de la pelicula correspondiente: "<<endl;
    cin>>ww;
    if (ee=="SanCarlos"){
    string af;
    cout<< "Ingrese la cantidad de campos que compro:"<<endl;
    cin>>af;
    string matriz [6] [7];
        cout << "-----------------PANTALLA-----------------"<<endl;
        cout<<endl;
// recorre la matriz
        for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            matriz[1][1] = "A1"; matriz[1][2] = "A2"; matriz[1][3] = "B1"; matriz[1][4] = "B2"; matriz[1][5] = "C1"; matriz[1][6] = "C2";
            matriz[2][1] = "A3"; matriz[2][2] = "A4"; matriz[2][3] = "B3"; matriz[2][4] = "B4"; matriz[2][5] = "C3"; matriz[2][6] = "C4";
            matriz[3][1] = "A5"; matriz[3][2] = "A6"; matriz[3][3] = "B5"; matriz[3][4] = "B6"; matriz[3][5] = "C5"; matriz[3][6] = "C6";
            matriz[4][1] = "A7"; matriz[4][2] = "A8"; matriz[4][3] = "B7"; matriz[4][4] = "B8"; matriz[4][5] = "C7"; matriz[4][6] = "C8";
            matriz[5][1] = "A9"; matriz[5][2] = "A10"; matriz[5][3] = "B9"; matriz[5][4] = "B10"; matriz[5][5] = "C9"; matriz[5][6] = "C10";
        }
    }
// imprime la matriz
    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(g);
            if (ww=="1"){
            ochonosala1.remove(g);}
            else if (ww=="2"){
            ochonosala2.remove(g);}
            else if (ww=="3"){
            ochonosala3.remove(g);}
            else if (ww=="4"){
            ochonosala4.remove(g);}
            else if (ww=="5"){
            ochonosala5.remove(g);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
            if (ww=="1"){
                list <string> ::iterator po;
                po=ochonosala1.begin();
                while (po!=ochonosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ochonosala1.push_back(n);}

            else if (ww=="2"){
                list <string> ::iterator po;
                po=ochonosala2.begin();
                while (po!=ochonosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ochonosala2.push_back(n);}

            else if (ww=="3"){
            list <string> ::iterator po;
                po=ochonosala3.begin();
                while (po!=ochonosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ochonosala3.push_back(n);}
            else if (ww=="4"){
                    list <string> ::iterator po;
                po=ochonosala4.begin();
                while (po!=ochonosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ochonosala4.push_back(n);}
            else if (ww=="5"){
            list <string> ::iterator po;
                po=ochonosala5.begin();
                while (po!=ochonosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ochonosala5.push_back(n);}
    }
    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);

        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}// elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(x);
            if (ww=="1"){
            ochonosala1.remove(x);}
            else if (ww=="2"){
            ochonosala2.remove(x);}
            else if (ww=="3"){
            ochonosala3.remove(x);}
            else if (ww=="4"){
            ochonosala4.remove(x);}
            else if (ww=="5"){
            ochonosala5.remove(x);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=ochonosala1.begin();
                while (po!=ochonosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala1.push_back(i);}
    if (ww=="2"){
                list <string> ::iterator po;
                po=ochonosala2.begin();
                while (po!=ochonosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala2.push_back(i);}
    if (ww=="3"){
                list <string> ::iterator po;
                po=ochonosala3.begin();
                while (po!=ochonosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala3.push_back(i);}
    if (ww=="4"){
                list <string> ::iterator po;
                po=ochonosala4.begin();
                while (po!=ochonosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala4.push_back(i);}
    if (ww=="5"){
                list <string> ::iterator po;
                po=ochonosala5.begin();
                while (po!=ochonosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala5.push_back(i);}
    }

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(j);
            if (ww=="1"){
            ochonosala1.remove(j);}
            else if (ww=="2"){
            ochonosala2.remove(j);}
            else if (ww=="3"){
            ochonosala3.remove(j);}
            else if (ww=="4"){
            ochonosala4.remove(j);}
            else if (ww=="5"){
            ochonosala5.remove(j);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
        if (ww=="1"){
                list <string> ::iterator po;
                po=ochonosala1.begin();
                while (po!=ochonosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ochonosala1.push_back(i);}
        if (ww=="2"){
                list <string> ::iterator po;
                po=ochonosala2.begin();
                while (po!=ochonosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ochonosala2.push_back(i);}
        if (ww=="3"){
                list <string> ::iterator po;
                po=ochonosala3.begin();
                while (po!=ochonosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ochonosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=ochonosala4.begin();
                while (po!=ochonosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ochonosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=ochonosala5.begin();
                while (po!=ochonosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ochonosala5.push_back(i);}
    }
     else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(y);
            if (ww=="1"){
            ochonosala1.remove(y);}
            else if (ww=="2"){
            ochonosala2.remove(y);}
            else if (ww=="3"){
            ochonosala3.remove(y);}
            else if (ww=="4"){
            ochonosala4.remove(y);}
            else if (ww=="5"){
            ochonosala5.remove(y);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
        list <string> ::iterator po;
        po=ochonosala1.begin();
        while (po!=ochonosala1.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ochonosala1.push_back(i);}
    if (ww=="2"){
        list <string> ::iterator po;
        po=ochonosala2.begin();
        while (po!=ochonosala2.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ochonosala2.push_back(i);}
    if (ww=="3"){
        list <string> ::iterator po;
        po=ochonosala3.begin();
        while (po!=ochonosala3.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ochonosala3.push_back(i);}
    if (ww=="4"){
        list <string> ::iterator po;
        po=ochonosala4.begin();
        while (po!=ochonosala4.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ochonosala4.push_back(i);}
    if (ww=="5"){
        list <string> ::iterator po;
        po=ochonosala5.begin();
        while (po!=ochonosala5.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ochonosala5.push_back(i);}
     }
    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(v);
            if (ww=="1"){
            ochonosala1.remove(v);}
            else if (ww=="2"){
            ochonosala2.remove(v);}
            else if (ww=="3"){
            ochonosala3.remove(v);}
            else if (ww=="4"){
            ochonosala4.remove(v);}
            else if (ww=="5"){
            ochonosala5.remove(v);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=ochonosala1.begin();
                while (po!=ochonosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala1.push_back(i);}
         if (ww=="2"){
                list <string> ::iterator po;
                po=ochonosala2.begin();
                while (po!=ochonosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala2.push_back(i);}
         if (ww=="3"){
                list <string> ::iterator po;
                po=ochonosala3.begin();
                while (po!=ochonosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=ochonosala4.begin();
                while (po!=ochonosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=ochonosala5.begin();
                while (po!=ochonosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ochonosala5.push_back(i);}

    }
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    cout<<"Butacas cambiadas exitosamente"<<endl;
    while(true){
    string q;
    cout << "Presione 1 para regresar  " <<endl;
    cin>> q;
    if (q=="1")
    {
        menuclientes();}
    else {
        cout<<"Valor invalido"<<endl;}
    }

}
if (ee=="SanJose"){
    string af;
    cout<< "Ingrese la cantidad de campos que compro:"<<endl;
    cin>>af;
    string matriz [6] [7];
        cout << "-----------------PANTALLA-----------------"<<endl;
        cout<<endl;
// recorre la matriz
        for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            matriz[1][1] = "A1"; matriz[1][2] = "A2"; matriz[1][3] = "B1"; matriz[1][4] = "B2"; matriz[1][5] = "C1"; matriz[1][6] = "C2";
            matriz[2][1] = "A3"; matriz[2][2] = "A4"; matriz[2][3] = "B3"; matriz[2][4] = "B4"; matriz[2][5] = "C3"; matriz[2][6] = "C4";
            matriz[3][1] = "A5"; matriz[3][2] = "A6"; matriz[3][3] = "B5"; matriz[3][4] = "B6"; matriz[3][5] = "C5"; matriz[3][6] = "C6";
            matriz[4][1] = "A7"; matriz[4][2] = "A8"; matriz[4][3] = "B7"; matriz[4][4] = "B8"; matriz[4][5] = "C7"; matriz[4][6] = "C8";
            matriz[5][1] = "A9"; matriz[5][2] = "A10"; matriz[5][3] = "B9"; matriz[5][4] = "B10"; matriz[5][5] = "C9"; matriz[5][6] = "C10";
        }
    }
// imprime la matriz
    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(g);
            if (ww=="1"){
            josnosala1.remove(g);}
            else if (ww=="2"){
            josnosala2.remove(g);}
            else if (ww=="3"){
            josnosala3.remove(g);}
            else if (ww=="4"){
            josnosala4.remove(g);}
            else if (ww=="5"){
            josnosala5.remove(g);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
            if (ww=="1"){
                list <string> ::iterator po;
                po=josnosala1.begin();
                while (po!=josnosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                josnosala1.push_back(n);}

            else if (ww=="2"){
                list <string> ::iterator po;
                po=josnosala2.begin();
                while (po!=josnosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                josnosala2.push_back(n);}

            else if (ww=="3"){
            list <string> ::iterator po;
                po=josnosala3.begin();
                while (po!=josnosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                josnosala3.push_back(n);}
            else if (ww=="4"){
                    list <string> ::iterator po;
                po=josnosala4.begin();
                while (po!=josnosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                josnosala4.push_back(n);}
            else if (ww=="5"){
            list <string> ::iterator po;
                po=josnosala5.begin();
                while (po!=josnosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                josnosala5.push_back(n);}
    }
    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);

        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}// elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(x);
            if (ww=="1"){
            josnosala1.remove(x);}
            else if (ww=="2"){
            josnosala2.remove(x);}
            else if (ww=="3"){
            josnosala3.remove(x);}
            else if (ww=="4"){
            josnosala4.remove(x);}
            else if (ww=="5"){
            josnosala5.remove(x);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=josnosala1.begin();
                while (po!=josnosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala1.push_back(i);}
    if (ww=="2"){
                list <string> ::iterator po;
                po=josnosala2.begin();
                while (po!=josnosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala2.push_back(i);}
    if (ww=="3"){
                list <string> ::iterator po;
                po=josnosala3.begin();
                while (po!=josnosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala3.push_back(i);}
    if (ww=="4"){
                list <string> ::iterator po;
                po=josnosala4.begin();
                while (po!=josnosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala4.push_back(i);}
    if (ww=="5"){
                list <string> ::iterator po;
                po=josnosala5.begin();
                while (po!=josnosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala5.push_back(i);}
    }

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(j);
            if (ww=="1"){
            josnosala1.remove(j);}
            else if (ww=="2"){
            josnosala2.remove(j);}
            else if (ww=="3"){
            josnosala3.remove(j);}
            else if (ww=="4"){
            josnosala4.remove(j);}
            else if (ww=="5"){
            josnosala5.remove(j);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
        if (ww=="1"){
                list <string> ::iterator po;
                po=josnosala1.begin();
                while (po!=josnosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            josnosala1.push_back(i);}
        if (ww=="2"){
                list <string> ::iterator po;
                po=josnosala2.begin();
                while (po!=josnosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            josnosala2.push_back(i);}
        if (ww=="3"){
                list <string> ::iterator po;
                po=josnosala3.begin();
                while (po!=josnosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            josnosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=josnosala4.begin();
                while (po!=josnosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            josnosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=josnosala5.begin();
                while (po!=josnosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            josnosala5.push_back(i);}
    }
     else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(y);
            if (ww=="1"){
            josnosala1.remove(y);}
            else if (ww=="2"){
            josnosala2.remove(y);}
            else if (ww=="3"){
            josnosala3.remove(y);}
            else if (ww=="4"){
            josnosala4.remove(y);}
            else if (ww=="5"){
            josnosala5.remove(y);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
        list <string> ::iterator po;
        po=josnosala1.begin();
        while (po!=josnosala1.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        josnosala1.push_back(i);}
    if (ww=="2"){
        list <string> ::iterator po;
        po=josnosala2.begin();
        while (po!=josnosala2.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        josnosala2.push_back(i);}
    if (ww=="3"){
        list <string> ::iterator po;
        po=josnosala3.begin();
        while (po!=josnosala3.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        josnosala3.push_back(i);}
    if (ww=="4"){
        list <string> ::iterator po;
        po=josnosala4.begin();
        while (po!=josnosala4.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        josnosala4.push_back(i);}
    if (ww=="5"){
        list <string> ::iterator po;
        po=josnosala5.begin();
        while (po!=josnosala5.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        josnosala5.push_back(i);}
     }
    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(v);
            if (ww=="1"){
            josnosala1.remove(v);}
            else if (ww=="2"){
            josnosala2.remove(v);}
            else if (ww=="3"){
            josnosala3.remove(v);}
            else if (ww=="4"){
            josnosala4.remove(v);}
            else if (ww=="5"){
            josnosala5.remove(v);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=josnosala1.begin();
                while (po!=josnosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala1.push_back(i);}
         if (ww=="2"){
                list <string> ::iterator po;
                po=josnosala2.begin();
                while (po!=josnosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala2.push_back(i);}
         if (ww=="3"){
                list <string> ::iterator po;
                po=josnosala3.begin();
                while (po!=josnosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=josnosala4.begin();
                while (po!=josnosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=josnosala5.begin();
                while (po!=josnosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                josnosala5.push_back(i);}

    }
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    cout<<"Butacas cambiadas exitosamente"<<endl;
    while(true){
    string q;
    cout << "Presione 1 para regresar  " <<endl;
    cin>> q;
    if (q=="1")
    {
        menuclientes();}
    else {
        cout<<"Valor invalido"<<endl;}
    }

}
    if (ee=="SanRamon"){
    string af;
    cout<< "Ingrese la cantidad de campos que compro:"<<endl;
    cin>>af;
    string matriz [6] [7];
        cout << "-----------------PANTALLA-----------------"<<endl;
        cout<<endl;
// recorre la matriz
        for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            matriz[1][1] = "A1"; matriz[1][2] = "A2"; matriz[1][3] = "B1"; matriz[1][4] = "B2"; matriz[1][5] = "C1"; matriz[1][6] = "C2";
            matriz[2][1] = "A3"; matriz[2][2] = "A4"; matriz[2][3] = "B3"; matriz[2][4] = "B4"; matriz[2][5] = "C3"; matriz[2][6] = "C4";
            matriz[3][1] = "A5"; matriz[3][2] = "A6"; matriz[3][3] = "B5"; matriz[3][4] = "B6"; matriz[3][5] = "C5"; matriz[3][6] = "C6";
            matriz[4][1] = "A7"; matriz[4][2] = "A8"; matriz[4][3] = "B7"; matriz[4][4] = "B8"; matriz[4][5] = "C7"; matriz[4][6] = "C8";
            matriz[5][1] = "A9"; matriz[5][2] = "A10"; matriz[5][3] = "B9"; matriz[5][4] = "B10"; matriz[5][5] = "C9"; matriz[5][6] = "C10";
        }
    }
// imprime la matriz
    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    string z= " ";
    if (af=="1"){
        string g;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), g);
        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(g);
            if (ww=="1"){
            ranosala1.remove(g);}
            else if (ww=="2"){
            ranosala2.remove(g);}
            else if (ww=="3"){
            ranosala3.remove(g);}
            else if (ww=="4"){
            ranosala4.remove(g);}
            else if (ww=="5"){
            ranosala5.remove(g);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
            if (ww=="1"){
                list <string> ::iterator po;
                po=ranosala1.begin();
                while (po!=ranosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ranosala1.push_back(n);}

            else if (ww=="2"){
                list <string> ::iterator po;
                po=ranosala2.begin();
                while (po!=ranosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ranosala2.push_back(n);}

            else if (ww=="3"){
            list <string> ::iterator po;
                po=ranosala3.begin();
                while (po!=ranosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ranosala3.push_back(n);}
            else if (ww=="4"){
                    list <string> ::iterator po;
                po=ranosala4.begin();
                while (po!=ranosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ranosala4.push_back(n);}
            else if (ww=="5"){
            list <string> ::iterator po;
                po=ranosala5.begin();
                while (po!=ranosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}

                string n;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(n);
                ranosala5.push_back(n);}
    }
    else if (af=="2"){
        string g;
        string s;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        string x;
        x=g +z+ s;
        list <string>::iterator pos3;
        pos3 = find (listabutacas.begin(), listabutacas.end(), x);

        if (pos3!= listabutacas.end()){
            cout << "Dato encontrado" << endl;}// elimina los campos de la lista de butacas y de espacios ocupados
            listabutacas.remove(x);
            if (ww=="1"){
            ranosala1.remove(x);}
            else if (ww=="2"){
            ranosala2.remove(x);}
            else if (ww=="3"){
            ranosala3.remove(x);}
            else if (ww=="4"){
            ranosala4.remove(x);}
            else if (ww=="5"){
            ranosala5.remove(x);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=ranosala1.begin();
                while (po!=ranosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala1.push_back(i);}
    if (ww=="2"){
                list <string> ::iterator po;
                po=ranosala2.begin();
                while (po!=ranosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala2.push_back(i);}
    if (ww=="3"){
                list <string> ::iterator po;
                po=ranosala3.begin();
                while (po!=ranosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala3.push_back(i);}
    if (ww=="4"){
                list <string> ::iterator po;
                po=ranosala4.begin();
                while (po!=ranosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala4.push_back(i);}
    if (ww=="5"){
                list <string> ::iterator po;
                po=ranosala5.begin();
                while (po!=ranosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                string i;
                i= n+z +h;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala5.push_back(i);}
    }

    else if (af=="3"){
        string g;
        string s;
        string l;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        string j;
        j=g+z+s+z+l;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), j);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(j);
            if (ww=="1"){
            ranosala1.remove(j);}
            else if (ww=="2"){
            ranosala2.remove(j);}
            else if (ww=="3"){
            ranosala3.remove(j);}
            else if (ww=="4"){
            ranosala4.remove(j);}
            else if (ww=="5"){
            ranosala5.remove(j);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
        if (ww=="1"){
                list <string> ::iterator po;
                po=ranosala1.begin();
                while (po!=ranosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ranosala1.push_back(i);}
        if (ww=="2"){
                list <string> ::iterator po;
                po=ranosala2.begin();
                while (po!=ranosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ranosala2.push_back(i);}
        if (ww=="3"){
                list <string> ::iterator po;
                po=ranosala3.begin();
                while (po!=ranosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ranosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=ranosala4.begin();
                while (po!=ranosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ranosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=ranosala5.begin();
                while (po!=ranosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
            string n;
            string h;
            string p;
            cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
            cin >> n;
            cin >>h;
            cin>>p;
            string i;
            i= n+z +h+z+p;
            // agrega las nuevas butacas seleccionadas
            listabutacas.push_back(i);
            ranosala5.push_back(i);}
    }
     else if (af=="4"){
        string g;
        string s;
        string l;
        string k;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        string y;
        y=g+z+s+z+l+z+k;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), y);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(y);
            if (ww=="1"){
            ranosala1.remove(y);}
            else if (ww=="2"){
            ranosala2.remove(y);}
            else if (ww=="3"){
            ranosala3.remove(y);}
            else if (ww=="4"){
            ranosala4.remove(y);}
            else if (ww=="5"){
            ranosala5.remove(y);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
        list <string> ::iterator po;
        po=ranosala1.begin();
        while (po!=ranosala1.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ranosala1.push_back(i);}
    if (ww=="2"){
        list <string> ::iterator po;
        po=ranosala2.begin();
        while (po!=ranosala2.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ranosala2.push_back(i);}
    if (ww=="3"){
        list <string> ::iterator po;
        po=ranosala3.begin();
        while (po!=ranosala3.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ranosala3.push_back(i);}
    if (ww=="4"){
        list <string> ::iterator po;
        po=ranosala4.begin();
        while (po!=ranosala4.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ranosala4.push_back(i);}
    if (ww=="5"){
        list <string> ::iterator po;
        po=ranosala5.begin();
        while (po!=ranosala5.end()){
        cout<<"        "<<*po<<endl;
        po++;}
        string n;
        string h;
        string p;
        string c;
        cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
        cin >> n;
        cin >>h;
        cin>>p;
        cin>>c;
        string i;
        i= n+z +h+z+p+z+c;
        // agrega las nuevas butacas seleccionadas
        listabutacas.push_back(i);
        ranosala5.push_back(i);}
     }
    else if (af=="5"){
        string g;
        string s;
        string l;
        string k;
        string t;
        cout<<"Ingrese el codigo de las butacas a eliminar: "<<endl;
        cin>>g;
        cin>>s;
        cin>>l;
        cin>>k;
        cin>>t;
        string v;
        v=g+z+s+z+l+z+k+z+t;
    list <string>::iterator pos3;
    pos3 = find (listabutacas.begin(), listabutacas.end(), v);
    if (pos3!= listabutacas.end()){
        cout << "Dato encontrado" << endl;} // elimina los campos de la lista de butacas y de espacios ocupados
        listabutacas.remove(v);
            if (ww=="1"){
            ranosala1.remove(v);}
            else if (ww=="2"){
            ranosala2.remove(v);}
            else if (ww=="3"){
            ranosala3.remove(v);}
            else if (ww=="4"){
            ranosala4.remove(v);}
            else if (ww=="5"){
            ranosala5.remove(v);}
    cout<<"Butacas ocupadas NO elija estas:"<<endl;
    if (ww=="1"){
                list <string> ::iterator po;
                po=ranosala1.begin();
                while (po!=ranosala1.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala1.push_back(i);}
         if (ww=="2"){
                list <string> ::iterator po;
                po=ranosala2.begin();
                while (po!=ranosala2.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala2.push_back(i);}
         if (ww=="3"){
                list <string> ::iterator po;
                po=ranosala3.begin();
                while (po!=ranosala3.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala3.push_back(i);}
        if (ww=="4"){
                list <string> ::iterator po;
                po=ranosala4.begin();
                while (po!=ranosala4.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala4.push_back(i);}
        if (ww=="5"){
                list <string> ::iterator po;
                po=ranosala5.begin();
                while (po!=ranosala5.end()){
                cout<<"        "<<*po<<endl;
                po++;}
                string n;
                string h;
                string p;
                string c;
                string d;
                cout <<"Digite el codigo de las nuevas butacas deseadas(separadas por un espacio): "<<endl;
                cin >> n;
                cin >>h;
                cin>>p;
                cin>>c;
                cin>>d;
                string i;
                i= n+z +h+z+p+z+c+z+d;
                // agrega las nuevas butacas seleccionadas
                listabutacas.push_back(i);
                ranosala5.push_back(i);}
        }
    }
    else {
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

    cout<<"Butacas cambiadas exitosamente"<<endl;
    while(true){
    string q;
    cout << "Presione 1 para regresar  " <<endl;
    cin>> q;
    if (q=="1")
    {
        menuclientes();}
    else {
        cout<<"Valor invalido"<<endl;}
    }
}
void menucambioydevolucion ()
{
    cout<< "......................................"<<endl;
    string w;
    cout <<" Ingrese:"<<endl;
    cout <<"   1 para completar la compra"<<endl;
    cout <<"   2 para cambio de butacas"<<endl;
    cout <<"   3 para devolver los boletos"<<endl;
    cout <<"   4 para regresar al menu principal"<<endl;
    cin>>w;
    if (w =="1"){
        pantallainicio ();}
    if (w=="2"){
        cambiobutacas ();}
    if (w=="3"){
        devolverboletos();}
     if (w=="4"){
        pantallainicio();}
    else{
        cout<<"Valor invalido"<<endl;
        menucambioydevolucion ();}

}
void menuclientes()
{
    string s;
    cout<<"Digite:"<<endl;
    cout<<"   1 Para comprar boletos "<<endl;
    cout<<"   2 Para menu principal "<<endl;
    cin>>s;

    if (s =="1"){
        validar ();}
    if (s=="2"){
       pantallainicio();}
    else{
        cout<<"Valor invalido"<<endl;
        menuclientes();}
}
void listcompracliente()
{
    // informe para el administrador por cliente
    cout<<endl;
    cout << "Compras por Clientes" <<endl;
    list<string> :: iterator soc,it,et,pos1,pos2,pos3,pos4,pos5,pos6,pos7;
    soc = listacedulas.begin();
    it = listaedad.begin();
    et = listagenero.begin();
    pos1 = liselecloca.begin();
    pos2 =liselecpeli.begin();
    pos3 = liselectan.begin();
    pos4 = liscantcam.begin();
    pos5=liscatadul.begin();
    pos6=liscantnin.begin();
    pos7=listabutacas.begin();

    while (soc!=listacedulas.end()||it!=listaedad.end()||et!=listagenero.end()||pos1!=liselecloca.end()||pos2!=liselecpeli.end()||pos3!=liselectan.end()||pos4!=liscantcam.end()||pos5!=liscatadul.end()||pos6!=liscantnin.end()||pos7!=listabutacas.end())
    {
    cout << "Cliente: "<<*soc<<"  Edad:"<<*it<< " Genero:"<< *et<<" Localidad:"<<*pos1<<endl;
    cout<<"   Pelicula:"<<*pos2<<" Tanda:"<<*pos3<<" Cantidad de campos: "<<*pos4<<" Adultos:"<<*pos5<<" Niños:"<<*pos6<<" Butacas:"<<*pos7<<endl;
    soc++;
    it++;
    et++;
    pos1++;
    pos2++;
    pos3++;
    pos4++;
    pos5++;
    pos6++;
    pos7++;}

    while (true){
    string q;
    cout << "Presione 1 para regresar a Opciones " <<endl;
    cin>> q;
    if (q=="1"){
        menuadmi();}
    else {
        cout<<"Valor invalido"<<endl;}
    }
}

void eleccionsala()
{
    cout<<endl;
    cout<< "Ingrese la cantidad de campos que desea comprar:"<<endl;
    cout<< "Puede comprar maximo 5 campos"<<endl;
    cin>>ay;

    cantidad= cantidad + stoi(ay);
    liscantcam.push_back(ay);
    string f;
    cout << "Cuantos adultos son:"<<endl;
    cin>>f;
    liscatadul.push_back(f);
    string h;
    cout << "Cuantos ninos son:"<<endl;
    cin>>h;
    liscantnin.push_back(h);
    //salas();
    string ww;
    cout << "Sala 1: TheHungerGames "<<endl;
    cout << "Sala 2: ElAnalfabeto "<<endl;
    cout << "Sala 3: MissionImposible "<<endl;
    cout << "Sala 4: TheAvengers"<<endl;
    cout << "Sala 5: Coco"<<endl;
    cout <<"Ingrese el numero de la sale de la pelicula correspondiente: "<<endl;
    cin>>ww;
    string matriz [6] [7];
        cout << "-----------------PANTALLA-----------------"<<endl;
        cout<<endl;
// recorre la matriz
        for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            matriz[1][1] = "A1"; matriz[1][2] = "A2"; matriz[1][3] = "B1"; matriz[1][4] = "B2"; matriz[1][5] = "C1"; matriz[1][6] = "C2";
            matriz[2][1] = "A3"; matriz[2][2] = "A4"; matriz[2][3] = "B3"; matriz[2][4] = "B4"; matriz[2][5] = "C3"; matriz[2][6] = "C4";
            matriz[3][1] = "A5"; matriz[3][2] = "A6"; matriz[3][3] = "B5"; matriz[3][4] = "B6"; matriz[3][5] = "C5"; matriz[3][6] = "C6";
            matriz[4][1] = "A7"; matriz[4][2] = "A8"; matriz[4][3] = "B7"; matriz[4][4] = "B8"; matriz[4][5] = "C7"; matriz[4][6] = "C8";
            matriz[5][1] = "A9"; matriz[5][2] = "A10"; matriz[5][3] = "B9"; matriz[5][4] = "B10"; matriz[5][5] = "C9"; matriz[5][6] = "C10";
        }
    }
// imprime la matriz
    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    cout << endl;
    if (med =="SanCarlos"){
        if (ww=="1"){
           cout<<"Sala 1"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ochonosala1.begin();
            while (pos!=ochonosala1.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ochonosala1.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ochonosala1.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ochonosala1.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ochonosala1.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ochonosala1.push_back(v);}
        }
    if (ww=="2"){
           cout<<"Sala 2"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ochonosala2.begin();
            while (pos!=ochonosala2.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ochonosala2.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ochonosala2.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ochonosala2.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ochonosala2.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ochonosala2.push_back(v);}
        }

    if (ww=="3"){
           cout<<"Sala 3"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ochonosala3.begin();
            while (pos!=ochonosala3.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ochonosala3.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ochonosala3.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ochonosala3.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ochonosala3.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ochonosala3.push_back(v);}
        }

    if (ww=="4"){
           cout<<"Sala 4"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ochonosala4.begin();
            while (pos!=ochonosala4.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ochonosala4.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ochonosala4.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ochonosala4.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ochonosala4.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ochonosala4.push_back(v);}
        }

    if (ww=="5"){
           cout<<"Sala 5"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ochonosala5.begin();
            while (pos!=ochonosala5.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ochonosala5.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ochonosala5.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ochonosala5.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ochonosala5.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ochonosala5.push_back(v);}
        }
    }
    if (med =="SanJose"){
        if (ww=="1"){
           cout<<"Sala 1"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= josnosala1.begin();
            while (pos!=josnosala1.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        josnosala1.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        josnosala1.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        josnosala1.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        josnosala1.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        josnosala1.push_back(v);}
        }
    if (ww=="2"){
           cout<<"Sala 2"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= josnosala2.begin();
            while (pos!=josnosala2.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        josnosala2.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        josnosala2.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        josnosala2.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        josnosala2.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        josnosala2.push_back(v);}
        }

    if (ww=="3"){
           cout<<"Sala 3"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= josnosala3.begin();
            while (pos!=josnosala3.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        josnosala3.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        josnosala3.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        josnosala3.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        josnosala3.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        josnosala3.push_back(v);}
        }

    if (ww=="4"){
           cout<<"Sala 4"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= josnosala4.begin();
            while (pos!=josnosala4.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        josnosala4.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        josnosala4.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        josnosala4.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        josnosala4.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        josnosala4.push_back(v);}
        }

    if (ww=="5"){
           cout<<"Sala 5"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= josnosala5.begin();
            while (pos!=josnosala5.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        josnosala5.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        josnosala5.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        josnosala5.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        josnosala5.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        josnosala5.push_back(v);}
        }
    }
    if (med =="SanRamon"){
        if (ww=="1"){
           cout<<"Sala 1"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ranosala1.begin();
            while (pos!=ranosala1.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ranosala1.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ranosala1.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ranosala1.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ranosala1.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ranosala1.push_back(v);}
        }
    if (ww=="2"){
           cout<<"Sala 2"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ranosala2.begin();
            while (pos!=ranosala2.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ranosala2.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ranosala2.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ranosala2.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ranosala2.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ranosala2.push_back(v);}
        }

    if (ww=="3"){
           cout<<"Sala 3"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ranosala3.begin();
            while (pos!=ranosala3.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ranosala3.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ranosala3.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ranosala3.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ranosala3.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ranosala3.push_back(v);}
        }

    if (ww=="4"){
           cout<<"Sala 4"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ranosala4.begin();
            while (pos!=ranosala4.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ranosala4.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ranosala4.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ranosala4.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ranosala4.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ranosala4.push_back(v);}
        }

    if (ww=="5"){
           cout<<"Sala 5"<<endl;
           cout<<"Butacas ocupadas NO elija estas:"<<endl;
            list <string> ::iterator pos;  // imprime la butacas ocupadas
            pos= ranosala5.begin();
            while (pos!=ranosala5.end()){
                cout<<"        "<<*pos<<endl;
                pos++;}
            string z= " ";
    // eleccion de las butacas de acuerdo con la cantidad de campos
            if (ay=="1"){
        string d;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        listabutacas.push_back(d);
        ranosala5.push_back(d);}
            else if (ay=="2"){
        string d;
        string s;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        string x;
        x=d +z+ s;
        listabutacas.push_back(x);
        ranosala5.push_back(x);}
            else if (ay=="3"){
        string d;
        string s;
        string l;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        string j;
        j=d+z+s+z+l;
        listabutacas.push_back(j);
        ranosala5.push_back(j);}
            else if (ay=="4"){
        string d;
        string s;
        string l;
        string w;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        string y;
        y=d+z+s+z+l+z+w;
        listabutacas.push_back(y);
        ranosala5.push_back(y);}
            else if (ay=="5"){
        string d;
        string s;
        string l;
        string w;
        string t;
        cout<<"Cuales butacas desea: "<<endl;
        cin>>d;
        cin>>s;
        cin>>l;
        cin>>w;
        cin>>t;
        string v;
        v=d+z+s+z+l+z+w+z+t;
        listabutacas.push_back(v);
        ranosala5.push_back(v);}
        }
    }

    factura ();

}
void eleccionhorario ()
{
    cout<<endl;
    cout << ":::Elija el horario para ver la pelicula:::"<< endl;
    list<string>::iterator pos; // imprime las opciones de horarios existentes
    pos=tandas.begin();
    int n=1;
    while (pos!=tandas.end()){
            cout<<"    "<<n<<")  "<<*pos<<endl;
            pos++;
            n++;}

    int y;
    cout<< "Presione el numero de la tanda que desea:"<<endl;
    cin>> y;
    if (y==1){
        liselectan.push_back("3:00PM");
        sss= "3:00PM";
        int ff=1;
        tres =tres + ff;}
    else if (y==2){
        liselectan.push_back("6:00PM");
        sss="6:00PM";
        int dd=1;
        seis =seis+dd;}
    else if (y==3){
            liselectan.push_back("8:00PM");
            sss="8:00PM";
            int rr =1;
            ocho=ocho+rr;}
    else {
        cout<<"Valor Invalido"<<endl;
        eleccionhorario ();}

}
void eleccionpelicula()
{
    cout<<endl;
    cout << "<<<<Elija la pelicula que desea ver>>>>"<< endl;
    list<string>:: iterator pos,pos1,pos2,pos3, pos4; // imprime las peliculas de la cartelera y la informacion de esta
    pos=cartelera.begin();
    pos1=genero.begin();
    pos2=restriccion.begin();
    pos3=duracion.begin();
    pos4=idioma.begin();
    while (pos!=cartelera.end()||pos1!=genero.end()||pos2!=restriccion.end()||pos3!=duracion.end()||pos4!=idioma.end()){
        cout<<"  "<<"Pelicula: "<<*pos<<" Genero: "<<*pos1<<" Restriccion: "<<*pos2<<" Duracion: "<<*pos3<<" Idioma: "<<*pos4<<endl;
        pos++;
        pos1++;
        pos2++;
        pos3++;
        pos4++;}
    cout<<endl;
    cout << " Introduzca el nombre de la pelicula que desea tal y como aparece:"<<endl;
    cin>>rac;
    liselecpeli.push_back(rac);

}
void eleccionlocalidad () {
    cout<<endl;
    cout << "...Elija una localidad..."<< endl;
    list<string>::iterator bor; // imprime la localidades existentes
        bor=local.begin();
        while (bor!=local.end()){
            cout<<"  "<<*bor<<endl;
            bor++;}

    cout << " Digite el nombre de la localidad que desea tal y como aparece:"<<endl;
    cin>>med;
    liselecloca.push_back(med);
}
void reportes()
{
    string d;
    cout<<"------BIENVENIDO AL MENU DE REPORTES------"<<endl;
    cout<<"Que desea realizar?"<<endl;
    cout<<"1.Ver estrenos"<<endl<<"2.Mostrar todas las peliculas en cartelera de todas las localidades"<<endl<<"3.Mostrar todas las peliculas por genero de todas las localidades"<<endl;
    cin>>d;
    if(d=="1"){
        list<string>::iterator mostrar;
        mostrar=estrenos.begin();
        cout<<"Peliculas proximas a estrenar"<<endl;
        while(mostrar!=estrenos.end()){
            cout<<*mostrar<<endl;
            mostrar++;
        }
    }
    if(d=="2"){
        list<string>::iterator pos;
        pos=local.begin();
        while(pos!=local.end()){
            cout<<*pos<<endl;
            list<string>::iterator arr;
            arr=cartelera.begin();
            int k=1;
            while(arr!=cartelera.end()){
                cout<<*arr<<" disponible en sala "<<k<<endl;
                cout<<"Hora de inicio de la pelicula"<<endl;
                list<string>::iterator imp;
                imp=tandas.begin();
                while(imp!=tandas.end()){
                    cout<<*imp<<endl;
                    imp++;
                }
                k++;
                arr++;
            }
        cout<<endl;
        pos++;
        }
    }
    if(d=="3"){
        list<string>::iterator pos;
        pos=local.begin();
        while(pos!=local.end()){
            cout<<*pos<<endl;
            list<string>::iterator imp;
            imp=comedia.begin();
            cout<<"Comedia"<<endl;
            while(imp!=comedia.end()){
                if(comedia.size()!=0){
                cout<<*imp<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
                imp++;
            }
            list<string>::iterator arr;
            arr=accion.begin();
            cout<<"Accion"<<endl;
            while(arr!=accion.end()){
                if(accion.size()!=0){
                    cout<<*arr<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
                arr++;
            }
            list<string>::iterator cf;
            cf=ciencia_ficcion.begin();
            while(cf!=ciencia_ficcion.end()){
                if(ciencia_ficcion.size()!=0){
                cout<<*cf<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
                cf++;
            }
            list<string>::iterator dr;
            dr=drama.begin();
            cout<<"Drama"<<endl;
            while(dr!=drama.end()){
                if(drama.size()!=0){
                cout<<*dr<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
                dr++;
            }
            list<string>::iterator fan;
            fan=fantasia.begin();
            cout<<"Fantasia"<<endl;
            while(fan!=fantasia.end()){
                if(fantasia.size()!=0){
                    cout<<*fan<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            list<string>::iterator md;
            md=melodrama.begin();
            cout<<"Melodrama"<<endl;
            while(md!=melodrama.end()){
                if(melodrama.size()!=0){
                    cout<<*md<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            list<string>::iterator mus;
            mus=musical.begin();
            cout<<"Musical"<<endl;
            while(mus!=musical.end()){
                if(musical.size()!=0){
                    cout<<*mus<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            list<string>::iterator rom;
            rom=romance.begin();
            cout<<"Romance"<<endl;
            while(rom!=romance.end()){
                if(romance.size()!=0){
                    cout<<*rom<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            list<string>::iterator sus;
            sus=suspenso.begin();
            cout<<"Suspenso"<<endl;
            while(sus!=suspenso.end()){
                if(suspenso.size()!=0){
                    cout<<*sus<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            list<string>::iterator ter;
            ter=terror.begin();
            cout<<"Terror"<<endl;
            while(ter!=terror.end()){
                if(terror.size()!=0){
                    cout<<*ter<<endl;
                }
                else{
                    cout<<"No hay peliculas registradas de este genero"<<endl;
                }
            }
            cout<<endl;
            pos++;
        }
    }
}
void localidades()
{
    list<string>::iterator bor;
        bor=local.begin();
        int l=0;
        while (bor!=local.end()){
            cout<<l<<" "<<*bor<<endl;
            bor++;
            l++;
        }

    while(true){
        string opcion;
        cout<<"------Bienvenido al menu de localidades------"<<endl;
        cout<<"Que accion desea realizar?"<<endl;
        cout<<"1.Agregar una localidad"<<endl<<"2.Modificar el nombre de una localidad"<<endl<<"3 Borrar"<<endl<<"4 Salir"<<endl;
        cin>>opcion;
        if(opcion=="1"){
            string lugar;
            cout<<"Digite el nombre de la localidad"<<endl;
            cin>>lugar;
            list<string>::iterator buscar;
            buscar=find(estrenos.begin(),estrenos.end(),lugar);
            while(buscar!=local.end()){
                if(*buscar!=lugar){
                    local.push_back(lugar);
                    cout<<"Localidad registrada"<<endl;
                    return menu();
                }
                else{
                    cout<<"La localidad digitada ya existe, favor digite otra"<<endl;
                    return menu();
                }
                buscar++;
            }
        }
        if (opcion=="2"){
            list<string>::iterator arr;
            arr=local.begin();
            int k=0;
            while(arr!=local.end()){
                cout<<k<<" "<<*arr<<endl;
                arr++;
                k++;
            }
            int i;
            string new_name;
            cout<<"Digite el numero y el nuevo nombre (sin espacios) de la localidad que quiere modificar"<<endl;
            cin>>i>>new_name;
            list<string>::iterator mod;
            mod=local.begin();
            advance(mod,i);
            local.insert(mod,new_name);
            local.remove(*mod);

            return menu();
        }
        if (opcion=="3"){
            if(local.empty()==true){
                cout<<"No hay localidades registradas"<<endl;
                return menu();
            }
            else{
            int lugar;
            cout<<"Digite el numero de la localidad que desea eliminar"<<endl;
            cin>>lugar;
            advance(bor,lugar);
                local.erase(bor);
                return menu();
            }
        }
        if (opcion=="4"){
            return menu();
        }
        else{
            cout<<"Valor invalido, favor intentelo de nuevo"<<endl;
        }
    }
}
void prox_estrenos()
{
    list<string>::iterator est;
        est=estrenos.begin();
        while(est!=estrenos.end()){
            cout<<*est<<endl;
            est++;
        }
    string opcion;
    cout<<"------Bienvenido al menu de estrenos------"<<endl;
    cout<<"Que accion desea realizar?"<<endl;
    cout<<"1. Agregar un proximo estreno"<<endl<<"2. Agregar una pelicula a la cartelera"<<endl<<"3. Modificar el nombre de una pelicula"<<endl<<"4. Volver al menu"<<endl;
    cin>>opcion;
    if (opcion=="1"){
        string nombre;
        cout<<"Introduzca el nombre de la pelicula: "<<endl;
        cin>>nombre;
        list<string>::iterator buscar;
        buscar=find(estrenos.begin(),estrenos.end(),nombre);
        if(*buscar!=nombre){
            estrenos.push_front(nombre);
            cout<<"Pelicula agregada"<<endl;
            return menu();
        }
        else{
            cout<<"El nombre de la pelicula ya existe, favor digite uno nuevo"<<endl;
        }
    }
    if(opcion=="2"){
        string op;
        cout<<"Desea pasar un estrenos a cartelera? Digite 1 para SI y 2 para NO"<<endl;
        cin>>op;
            if(op=="1"){
                a=estrenos.back();
                cartelera.push_front(a);
                genero.push_front("DatoNoRegistrado");
                restriccion.push_front("DatoNoRegistrado");
                duracion.push_front("DatoNoRegistrado");
                idioma.push_front("DatoNoRegistrado");
                cout<<a<<endl;
                estrenos.remove(a);
                return menu();
            }if(op=="2"){
                return menu();
            }

    }
    if(opcion=="3"){
        list<string>::iterator pos;
        pos=estrenos.begin();
        int k=0;
        while(pos!=estrenos.end()){
            cout<<k<<" "<<*pos<<endl;
        pos++;
        k++;
        }
        list<string>::iterator mod;
        mod=estrenos.begin();
        int j;
        string new_name;
        cout<<"Digite el numero de la pelicula que quiere modificar y el nuevo nombre"<<endl;
        cin>>j>>new_name;
        advance(mod,j);
        advance(pos,j);
        estrenos.erase(mod);
        estrenos.insert(pos, new_name);

        return menu();
    }
    if(opcion=="4"){
        return menu();
    }
    else{
        cout<<"Valor invalido, favor intente de nuevo"<<endl;
    }
}

void cartel_cine()
{
    for(int i=0; i<cartelera.size();i++){
    list<string>::iterator pos, pos1, pos2, pos3, pos4;
        pos=cartelera.begin();
        pos1=genero.begin();
        pos2=restriccion.begin();
        pos3=duracion.begin();
        pos4=idioma.begin();
        while(pos!=cartelera.end()||pos1!=genero.end()||pos2!=restriccion.end()||pos3!=duracion.end()||pos4!=idioma.end()){
            cout<<"Nombre: "<<*pos<<" genero: "<<*pos1<<" restriccion: "<<*pos2<<" duracion: "<<*pos3<<" idioma: "<<*pos4<<endl;
            pos++;
            pos1++;
            pos2++;
            pos3++;
            pos4++;
        }
    while(true){
    string opcion;
    cout<<"------Bienvenido al menu de cartelera------"<<endl;
    cout<<"Que accion desea realizar?"<<endl;
    cout<<"1. Agregar nueva pelicula a cartelera"<<endl<<"2. Modificar datos de una pelicula"<<endl<<"3. Borrar pelicula"<<endl<<"4. Salir"<<endl;
    cin>>opcion;
    if(opcion=="1"){
        string op;
        cout<<"Agregó una nueva pelicula a cartelera? Digite 1. Si y 2. No"<<endl;
        cin>>op;
        if(op=="1"){
            genero.remove("DatoNoRegistrado");
            restriccion.remove("DatoNoRegistrado");
            duracion.remove("DatoNoRegistrado");
            idioma.remove("DatoNoRegistrado");
            string gen;
            string rest;
            string tiempo;
            string lengua;
            cout<<"Complete los datos restantes de la pelicula: "<<cartelera.front()<<endl;
            cout<<"Genero"<<endl;
            cout<<"Digite el nombre del genero al cual pertenece la pelicula"<<endl;
            cout<<"Comedia"<<endl<<"Accion"<<endl<<"CienciaFiccion"<<endl<<"Drama"<<endl<<"Fantasia"<<endl<<"Melodrama"<<endl<<"Musical"<<endl<<"Romance"<<endl<<"Suspenso"<<endl<<"Terror"<<endl;
            cin>>gen;
            cout<<"Restriccion de edad"<<endl;
            cin>>rest;
            cout<<"Duracion"<<endl;
            cin>>tiempo;
            cout<<"Idiomas disponibles"<<endl;
            cin>>lengua;

            genero.push_front(gen);
            restriccion.push_front(rest);
            duracion.push_front(tiempo);
            idioma.push_front(lengua);

            if(gen=="Comedia"){
                comedia.push_front(a);
            }
            if(gen=="Accion"){
                accion.push_front(a);
            }
            if(gen=="CienciaFiccion"){
                ciencia_ficcion.push_front(a);
            }
            if(gen=="Drama"){
                drama.push_front(a);
            }
            if(gen=="Fantasia"){
                fantasia.push_front(a);
            }
            if(gen=="Melodrama"){
                melodrama.push_front(a);
            }
            if(gen=="Musical"){
                musical.push_front(a);
            }
            if(gen=="Romance"){
                romance.push_front(a);
            }
            if(gen=="Suspenso"){
                suspenso.push_front(a);
            }
            if(gen=="Terror"){
                terror.push_front(a);
            }
            else{
                cout<<"Valor digitado es invalido, favor vuelva a digitar el genero"<<endl;
            }
        }
        if(op=="2"){
            return menu();
        }
    }
    if(opcion=="2"){
    list<string>::iterator pos;
        pos=cartelera.begin();
        int k=0;
        while(pos!=cartelera.end()){
            cout<<k<<" "<<*pos<<endl;
        pos++;
        k++;
        }
        list<string>::iterator mod;
        mod=cartelera.begin();
        int j;
        string new_name;
        cout<<"Digite el numero de la pelicula que quiere modificar y el nuevo nombre"<<endl;
        cin>>j>>new_name;
        advance(mod,j);
        estrenos.erase(mod);
        estrenos.insert(mod, new_name);
        return menu();
    }
    if(opcion=="3"){
        string op;
        string w;
        w=cartelera.back();
        cout<<"Desea eliminar "<<w<< "? Digite 1. Si y 2. No"<<endl;
        cin>>op;
        if(op=="1"){
            cartelera.pop_back();
            genero.pop_back();
            restriccion.pop_back();
            duracion.pop_back();
            idioma.pop_back();
            return menu();
        }
        if(op=="2"){
            return menu();
        }
        else{
            cout<<"Valor invalido, favor intentelo nuevamente"<<endl;
        }
    }
    if(opcion=="4"){
        return menu();
    }
    else{
        cout<<"Valor invalido, favor intentelo nuevamente"<<endl;
    }
    }

    }
}
void horarios()
{
    list<string>::iterator pos;
    pos=tandas.begin();
    cout<<"Los horarios disponibles son: "<<endl;
    while(pos!=tandas.end()){
        cout<<*pos<<endl;
        pos++;}

    int s;
    cout<<"Digite 1 para regresar"<<endl;
    cin>>s;
    if (s==1){
        menu(); }
}

void salas()
{
    list<string>::iterator sal;
    sal=local.begin();
    while(sal!=local.end()){
    cout<<*sal<<endl;
    string matriz [6] [7];
    cout << "-----------------PANTALLA-----------------"<<endl;
    cout<<endl;

    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            matriz[1][1] = "A1"; matriz[1][2] = "A2"; matriz[1][3] = "B1"; matriz[1][4] = "B2"; matriz[1][5] = "C1"; matriz[1][6] = "C2";
            matriz[2][1] = "A3"; matriz[2][2] = "A4"; matriz[2][3] = "B3"; matriz[2][4] = "B4"; matriz[2][5] = "C3"; matriz[2][6] = "C4";
            matriz[3][1] = "A5"; matriz[3][2] = "A6"; matriz[3][3] = "B5"; matriz[3][4] = "B6"; matriz[3][5] = "C5"; matriz[3][6] = "C6";
            matriz[4][1] = "A7"; matriz[4][2] = "A8"; matriz[4][3] = "B7"; matriz[4][4] = "B8"; matriz[4][5] = "C7"; matriz[4][6] = "C8";
            matriz[5][1] = "A9"; matriz[5][2] = "A10"; matriz[5][3] = "B9"; matriz[5][4] = "B10"; matriz[5][5] = "C9"; matriz[5][6] = "C10";
        }
    }
    for (int i=1;i<= 5; i++){
        for (int j =1;j<=6;j++){
            cout << matriz[i][j]<< "\t";
        }
        cout << endl;
    }
    cout << endl;
    sal++;
}
}

void menu(){
    while(true){
    cout<<"--------menu de administrador--------"<<endl;
    string opcion;
    cout<<"Digite 1. Localidades, 2.Proximos estrenos, 3.Cartelera, 4.Tandas, 5.Salas, 6.REGRESAR"<<endl;
    cin>>opcion;
    if(opcion=="1"){
        localidades();
    } if(opcion=="2"){
        prox_estrenos();
    } if(opcion=="3"){
        cartel_cine();
    } if(opcion=="4"){
        horarios();
    } if(opcion=="5"){
        salas();
    } if(opcion=="6"){
      menuadmi();
    } else{
        cout<<"Valor invalido, favor digite un numero nuevamente"<<endl;
    }
    }

}

void menuadmi()
{
    while (true){
    cout<<"Opciones"<<endl;
    string w;
    cout <<"Presione 1 para informacion de los clientes"<<endl;
    cout <<"Presione 2 para ir a localidades, extrenos, cartelera, tandas, salas "<<endl;
    cout <<"Presione 3 para realizar consultas"<<endl;
    cout <<"Presione 4 para ver los reportes"<<endl;
    cout <<"Presione 5 para regresar al menu principal"<<endl;
    cin>> w;
    if (w == "1"){
        listcompracliente();
    } if (w== "2"){
        menu();
    } if (w=="3"){
        consultas ();
    } if (w=="4"){
        reportes();
    } if (w=="5"){
        pantallainicio ();
    }
    else{
        cout<<"Valor invalido, favor digite un numero nuevamente"<<endl;}
    }
}


void insertarinfocliente ()
// Ingreso de información para la compra de boletos
{
    if (existe == false){
        cout << " Ingrese su edad: "<<endl;
        cin >> ll;
        cout << " Presione F = femenina/ M = masculino"<<endl;
        cin >> xd;
        listaedad.push_back(ll);
        listagenero.push_back(xd);
        if (xd=="f" ||xd=="F"){
            int t =1;

            generof=generof+t;
        }
        if (xd=="m" ||xd=="M"){
            int y =1;

            generom=generom+y;
        }
    }
    eleccionlocalidad ();
    eleccionpelicula();
    eleccionhorario ();
    eleccionsala();
    cout<<"Cliente y compra registrada"<<endl;
    while (true){
    string q;
    cout << "Presione 1 para regresar al menu principal" <<endl;
    cin>> q;
    if (q=="1")
    {
        pantallainicio();}
    else {
        cout<<"Valor invalido"<<endl;}
    }
}
void validar ()
{
    cout<<"::Compra de Boletos::"<<endl;
    cout<<"Favor registrarse"<<endl;
    //string ax;
    cout << " Ingrese su numero de cedula: "<<endl;
    cin >> ax;


    list <string>::iterator pos;
    pos = find (listacedulas.begin(), listacedulas.end(), ax); // Busca que el numero de cedula ingresado no se encuentre en la lista
    if (pos!= listacedulas.end()){
        cout << "Ya se encuentra registrado " << endl;
        cout<<endl;
        while (true){
        string z;
        cout << " Digite: " << endl;
        cout << "   1 si desea volver a comprar boletos" << endl;
        cout << "   2 si NO desea comprar Boletos" << endl;
        cin>>z;
        if (z=="1"){
            listacedulas.push_back(ax);
            insertarinfocliente ();}
        if (z=="2"){
            return pantallainicio();
        }
        }
    }
    else{
        listacedulas.push_back(ax);
        insertarinfocliente ();
    }
}

void entraradministrador()
{
    string a;
    int b;
    cout << " Nombre administrador: " <<endl;
    cin>> a;

    string d;
    string g;
                      //Usuarios
    d = "DIEGO";
    g = "CRISTIAN";
    int f;
                      //Contraseñas
    f = 1997;
    int m;
    m = 1120;


    if(a==d || a==g){
        cout << "Contraseña: " << endl;
        cin >> b;
        if(b==f || b==m){
            cout <<  " Acceso permitido" <<endl;
            cout<<endl;
            menuadmi();
        }
        else{
            cout <<  " Error en Contraseña" <<endl;
        }
    }
    else{
        cout<< "Error en Nombre "<<endl;
       while (true){
        string q;
        cout << "Presione 1 para regresar al menu principal" <<endl;
        cin>> q;
        if (q=="1"){
        pantallainicio();
        }
        else {
        cout<<"Valor invalido"<<endl;}
    }
    }
}

void pantallainicio ()
{
    cout << endl;
    cout << "------ MENU PRINCIPAL------" <<endl;
    cout << endl;
    cout << "Administrador" <<endl;
    cout << "Clientes" <<endl;
    cout << endl;

    while (true){
    string p;
    cout << "Presione 1 para Administrador o 2 para Clientes:" <<endl;
    cin >> p;
    if  (p=="1"){
        entraradministrador();}
    if(p=="2"){
        cout <<"--Menu para Clientes--" <<endl;
        cout <<endl;
        menuclientes();}
    else {
        cout<<"Valor invalido"<<endl;}
    }
}

int main()

{
    tandas.push_front("8:00PM");
    tandas.push_front("6:00PM");
    tandas.push_front("3:00PM");

    local.push_front("SanJose");
    local.push_front("SanRamon");
    local.push_front("SanCarlos");

    estrenos.push_front("Venom");
    estrenos.push_front("TheAvengers4");
    estrenos.push_front("CaptainMarvel");
    estrenos.push_front("Cascanueces");
    estrenos.push_front("Slenderman");

    cartelera.push_front("Coco");
    genero.push_front("animada");
    restriccion.push_front("PG");
    duracion.push_front("105 min");
    idioma.push_front("español");
    cartelera.push_front("TheAvengers");
    genero.push_front("accion, ciencia ficcion");
    restriccion.push_front("PG-13");
    duracion.push_front("149 min");
    idioma.push_front("español");
    cartelera.push_front("MissionImposible");
    genero.push_front("accion");
    restriccion.push_front("PG-13");
    duracion.push_front("131 min");
    idioma.push_front("español");
    cartelera.push_front("ElAnalfabeto");
    genero.push_front("comedia");
    restriccion.push_front("PG");
    duracion.push_front("115 min");
    idioma.push_front("español");
    cartelera.push_front("TheHungerGames");
    genero.push_front("accion");
    restriccion.push_front("PG-13");
    duracion.push_front("142 min");
    idioma.push_front("español");

    comedia.push_front("ElAnalfabeto");
    accion.push_front("TheAvengers");
    accion.push_front("MissionImposible");
    accion.push_front("TheHungerGames");
    animada.push_front("Coco");

    listacedulas.push_back("204460357");
    listaedad.push_back("25");
    listagenero.push_back("M");
    liselecloca.push_back("SanJose");
    liselecpeli.push_back("ElAnalfabeto");
    liselectan.push_back("6:00PM");
    liscantcam.push_back("2");
    liscatadul.push_back("2");
    liscantnin.push_back("0");
    listabutacas.push_back("A9 A10");
    josnosala2.push_back("A9 A10");

    listacedulas.push_back("307670333");
    listaedad.push_back("43");
    listagenero.push_back("F");
    liselecloca.push_back("SanCarlos");
    liselecpeli.push_back("Coco");
    liselectan.push_back("3:00PM");
    liscantcam.push_back("3");
    liscatadul.push_back("2");
    liscantnin.push_back("1");
    listabutacas.push_back("B6 C5 C6");
    ochonosala5.push_back("B6 C5 C6");

    pantallainicio ();

    return 0;
}
