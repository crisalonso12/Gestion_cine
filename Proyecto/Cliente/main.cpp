#include <iostream>
#include <list>
#include <iterator>
#include <stdio.h>
#include <algorithm>

using namespace std;

list <string> listacedulas;
list <int> listaedad;
list <string> listagenero;
void pantallainicio ();
void listcompracliente();
bool existe = false;
list<string> local;
list<string> cartelera;
list<string> genero;
list<string> restriccion;
list<string> duracion;
list<string> idioma;
list<string> estrenos;
list<string> tandas;
void menu();
void salas();


//SECCION DELL CLIENTE
void menuadmi()
{
    string w;
    cout <<"Presione 1 para informacion de los clientes"<<endl;
    cout <<"Presione 2 para modificar cartelera"<<endl;
    cin>> w;
    if (w == "1"){
        listcompracliente();
    }
    if (w=="2"){
        menu ();
    }
    else{
        cout<<"Valor digitado invalido, favor vuelva a intentarlo"<<endl;
    }

}

void listcompracliente()
{
    //list <int> listacedulas;
   // listacedulas.push_front ("nombre1");
    //listacedulas.push_front ("nombre2");
    //listacedulas.push_front ("nombre3");

    list<string> :: iterator pos;
    pos = listacedulas.begin();

    while (pos != listacedulas.end())
    {
    cout << *pos << endl;
    pos++;
    }

    list <string>listaNueva;
    // aqui se hace un insert de la primera lista en la lista nueva
    listaNueva.insert (listaNueva.end (),listacedulas.begin (), listacedulas.end ());

    list<string>:: iterator pos1;
    pos1 = listaNueva.begin();

    while (pos1 != listaNueva.end())
    {
    cout << *pos1 << endl;
    pos1++;
    }


    /*list <int>::iterator pos;
    pos=listacedulas.begin();
    cout << "elementos en la lista="<<listacedulas.size()<<endl;
    for(int i=0; i<=listacedulas.size(); i++){
        advance (pos, 11);
        cout << "Elementos= " << *pos <<endl;
        auto pos1 = next (listacedulas.begin(),1)
        cout << "elemento =="<< *pos1<<endl;*/



}
void insertarinfocliente ()
{
    if (existe == false){
        int k;
        cout << " Ingrese su edad: "<<endl;
        cin >> k;
        string x;
        cout << " Presione f = femenina/ m = masculino"<<endl;
        cin >> x;
        listaedad.push_back(k);
        listagenero.push_back(x);
    }
    cout<<"Cliente registrado"<<endl;
    int q;
    cout << "Presione 1 para regresar al menu principal" <<endl;
    cin>> q;
    if (q==1)
    {
        pantallainicio();
    }
}
void validar ()
{
    cout<<"Favor registrarse"<<endl;
    int a;
    cout << " Ingrese su numero de cedula: "<<endl;
    cin >> a;


    list <string>::iterator pos;
    pos = find (listacedulas.begin(), listacedulas.end(), "a"); // busca si esta en la lista
    if (pos!= listacedulas.end()){
        cout << "Ya se encuentra registrado " << endl;
    }
    else{
        listacedulas.push_back("a");
        insertarinfocliente ();
    }
    int q;
    cout << "Presione 1 para regresar al menu principal" <<endl;
    cin>> q;
    if (q==1){
        pantallainicio();
    }
}

void entraradministrador()
{
    string a;
    string b;
    cout << " Nombre administrador: " <<endl;
    cin>> a;

    string d;
    string g;
    d = "DIEGO";
    g = "CRISTIAN";
    string f;
    f = "1997";
    string m;
    m = "1120";


    if(a==d || a==g){
        cout << "Contraseña: " << endl;
        cin >> b;
        if(b==f || b==m){
            cout <<  " Acceso permitido" <<endl;
            menuadmi();

            /*int q;
            cout << "Presione 1 para regresar al menu principal" <<endl;
            cin>> q;
            if (q==1){
            pantallainicio();
            }*/
        }
        else{
            cout <<  " Error en Contraseña" <<endl;
        }
    }
    else{
        cout<< "Error en Nombre "<<endl;
        int q;
        cout << "Presione 1 para regresar al menu principal" <<endl;
        cin>> q;
        if (q==1){
        pantallainicio();
        }
    }
}

void pantallainicio ()
{
    while(true){
        cout << "------ MENU------" <<endl;
        cout << endl;
        cout << "Administrador" <<endl;
        cout << "Clientes" <<endl;
        cout << endl;
        string p;
        cout << "Presione 1 para Administrador o 2 para Clientes:" <<endl;
        cin >> p;
        if  (p=="1"){
            entraradministrador();
        }
        if (p=="2"){
            cout <<"--Compra de boletos--" <<endl;
            cout <<endl;
            //ingresoinfocliente ();
            validar ();
        }
        else{
            cout<<"Valor digitado invalido, favor vuelva a intentarlo"<<endl;
        }
    }
}

void comprar_boletos()
{
    salas();
}
//SECCION DEL ADMINISTRADOR
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
        cout<<"1. Agregar una localidad"<<endl<<"2. Modificar el nombre de una localidad"<<endl<<"3 Borrar"<<endl<<"4 Salir"<<endl;
        cin>>opcion;
        if(opcion=="1"){
            string lugar;
            cout<<"Digite el nombre de la localidad"<<endl;
            cin>>lugar;
            list<string>::iterator buscar;
            buscar=find(estrenos.begin(),estrenos.end(),lugar);
            while(buscar!=local.end()){
                if(*buscar!=lugar){
                    local.push_front(lugar);
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
            local.erase(mod);
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
        list<string>::iterator bus;
        buscar=find(estrenos.begin(),estrenos.end(),nombre);
        bus=find(cartelera.begin(),cartelera.end(),nombre);
        if(*buscar!=nombre&&*bus!=nombre){
            estrenos.push_front(nombre);
            cout<<"Pelicula agregada"<<endl;
            return menu();
        }
        else{
            cout<<"El nombre de la pelicula ya existe en estrenos o en la cartelera, favor digite otro nombre"<<endl;
            return menu();
        }
    }
    if(opcion=="2"){
        string op;
        cout<<"Desea pasar un estrenos a cartelera? Digite 1 para SI y 2 para NO"<<endl;
        cin>>op;
            if(op=="1"){
                string a=estrenos.back();
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
        estrenos.insert(mod, new_name);
        estrenos.erase(mod);

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
        if(opcion=="1"){
            genero.remove("DatoNoRegistrado");
            restriccion.remove("DatoNoRegistrado");
            duracion.remove("DatoNoRegistrado");
            idioma.remove("DatoNoRegistrado");
            string gen;
            string rest;
            string tiempo;
            string lengua;
            cout<<"Complete los datos restantes de la pelicula: "<<cartelera.front()<<endl;
            cout<<"Genero"<<endl<<"Restriccion de edad"<<endl<<"Duracion"<<endl<<"Idiomas disponibles"<<endl;
            cin>>gen>>rest>>tiempo>>lengua;

            genero.push_front(gen);
            restriccion.push_front(rest);
            duracion.push_front(tiempo);
            idioma.push_front(lengua);
        }
        if(opcion=="2"){
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
        estrenos.insert(mod, new_name);
        estrenos.erase(mod);
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
        pos++;
    }
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
            matriz[1][1] = "A1";
            matriz[1][2] = "A2";
            matriz[1][3] = "B1";
            matriz[1][4] = "B2";
            matriz[1][5] = "C1";
            matriz[1][6] = "C2";

            matriz[2][1] = "A3";
            matriz[2][2] = "A4";
            matriz[2][3] = "B3";
            matriz[2][4] = "B4";
            matriz[2][5] = "C3";
            matriz[2][6] = "C4";

            matriz[3][1] = "A5";
            matriz[3][2] = "A6";
            matriz[3][3] = "B5";
            matriz[3][4] = "B6";
            matriz[3][5] = "C5";
            matriz[3][6] = "C6";

            matriz[4][1] = "A7";
            matriz[4][2] = "A8";
            matriz[4][3] = "B7";
            matriz[4][4] = "B8";
            matriz[4][5] = "C7";
            matriz[4][6] = "C8";

            matriz[5][1] = "A9";
            matriz[5][2] = "A10";
            matriz[5][3] = "B9";
            matriz[5][4] = "B10";
            matriz[5][5] = "C9";
            matriz[5][6] = "C10";
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
    cout<<"Que accion desea realizar?"<<endl;
    cout<<"1.Localidades"<<endl<<"2.Proximos estrenos"<<endl<<"3.Cartelera"<<endl<<"4.Tandas"<<endl<<"5.Salas"<<endl<<"6.Volver al inicio"<<endl;
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
    } if (opcion=="6"){
        pantallainicio();
    } else{
        cout<<"Valor invalido, favor digite un numero nuevamente"<<endl;
    }
    }

}

int main()

{
    local.push_front("SanJose");
    local.push_front("SanRamon");
    local.push_front("SanCarlos");
    local.push_front("SanPedro");
    local.push_front("Ochomogo");

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

    tandas.push_front("8:00 PM");
    tandas.push_front("6:00 PM");
    tandas.push_front("3:00 PM");
    pantallainicio ();


    return 0;
}
