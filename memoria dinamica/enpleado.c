#include <stdio.h>
#include <stdlib.h>
#include "enpleado.h"

Empleado* enpleado_new()
{  // constructor se la conoce
    return malloc(sizeof(Empleado));
}

Empleado* enpleado_newConstructor( char *apellido, char *nombre,int *idSector )
{  // constructor se la conoce
    return malloc(sizeof(Empleado));
    Empleado* pEmpleado= malloc(sizeof(Empleado));
    if(pEmpleado!= NULL)
    {
          enpleado_setNombre(pEmpleado,nombre);
          enpleado_setApellido(pEmpleado,apellido);
          enpleado_setidSector(pEmpleado,idSector);
    }
    return pEmpleado;
}


 void enpleado_delete(Empleado* pEmpleado)
 {
     if(Empleado!=NULL)
     free(pEmpleado);
 }

int enpleado_setNombre(Empleado* pEmpledo, char *nombre)
{ int retorno=-1;
     if(enpleado!=NULL)
     {
         retorno=0
          strncpy(pEmpledo->nombre,nombre,NAME_SIZE)

           }
    return retorno;
}



int enpleado_getNombre(Empleado* pEmpledo)
{
    int retorno= NULL;
     if(enpleado!=NULL)
     {
         retorno= pEmpledo->nombre;

           }

    return retorno;
}



int enpleado_setApellido(Empleado* pEmpledo, char *apellido)
{int retorno=-1;
     if(enpleado!=NULL)
     {
         retorno=0
          strncpy(pEmpledo->apellido,apellido,LASTNAME_SIZE)

           }
    return retorno;

}




int enpleado_getApellido(Empleado* pEmpledo)
{
    int retorno= NULL;
     if(enpleado!=NULL)
     {
         retorno= pEmpledo->apellido;

           }

    return retorno;
}



int enpleado_setidSector(Empleado* pEmpledo,int *idSector)
{
    int retorno=-1;
     if(enpleado!=NULL)
     {
         retorno=0
        pEmpledo->idSector=  idSector;

           }
    return retorno;
}



int enpleado_getidSector(Empleado* pEmpleado)

{

      int retorno= -1;
     if(enpleado!=NULL)
     {
         retorno= pEmpledo->idSector;

    }

    return retorno;

}


void enpleado_debugShow(Empleado* pEmpleado)
{
    if(pEmpleado !=NULL && DEBUG)
    {
        printf("\n%s-%s-%d",pEmpleado->nombre,pEmpleado->apellido,pEmpleado->idSector)
    }
}
