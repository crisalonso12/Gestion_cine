#include <iostream>
#include <list>
#include <algorithm>
#include <map>
#include <cstdlib>
#include <stdio.h>

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
string a;

void menu();

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

void menu(){
    while(true){
    cout<<"--------menu de administrador--------"<<endl;
    string opcion;
    cout<<"Digite 1. Localidades, 2.Proximos estrenos, 3.Cartelera, 4.Tandas, 5.Salas, 6.Reportes"<<endl;
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
        reportes();
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

    comedia.push_front("ElAnalfabeto");
    accion.push_front("TheAvengers");
    accion.push_front("MissionImposible");
    accion.push_front("TheHungerGames");
    animada.push_front("Coco");


    tandas.push_front("8:00PM");
    tandas.push_front("6:00PM");
    tandas.push_front("3:00PM");
        menu();
        return 0;
}

