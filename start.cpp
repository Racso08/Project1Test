#include "start.h"
#include <log4cpp/Category.hh>
#include <log4cpp/Layout.hh>
#include <log4cpp/PropertyConfigurator.hh>
#include <string>
#include <iostream>
#include <QDebug>

int temp;
std::string lines[3] ={"int a = 5;","int b = 75;","int c = 35;"};  ///ejemplo de lineas de codigo
std :: string initFileName = "/home/racso/Proyecto1/log4cpp/include/log4cpp/log4cpp.properties"; ///contiene la direccion de un archivo .txt que contiene las propiedades necesarias para que compile el programa

Start::Start()
{
    log4cpp :: PropertyConfigurator :: configure (initFileName);     ///se configura las propiedades de acuerdo al .txt establecido en el initFileName
    log4cpp :: Category & parent = log4cpp :: Category :: getRoot (); ///devuelve la raiz de la categoria
    parent.alert("Se establecio conexion con el servidor");     ///se establece el tipo de mensaje en este caso es una alerta, la cual nos indica que se establecio la conexion con el servidor
}

void Start::sendServer()
{
    log4cpp :: PropertyConfigurator :: configure (initFileName);
    log4cpp :: Category & parent = log4cpp :: Category :: getRoot ();
    parent.debug(lines[temp]);
    temp++;
}

void Start :: reportError(){
    log4cpp :: PropertyConfigurator :: configure (initFileName);
    log4cpp :: Category & parent = log4cpp :: Category :: getRoot ();
    parent.error("Error");
    parent.crit("DAsdasdasdasdasd");
    qDebug()<<parent.getName().c_str();
}



