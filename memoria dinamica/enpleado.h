

#ifndef ENPLEADO_H_INCLUDED
#define ENPLEADO_H_INCLUDED
#define NAME_SIZE 51
#define LASTNAME_SIZE 51
 typedef struct
 {
     char nombre[51];
     char apellido[51];

     int idSector;
 }Empleado;


#endif // ENPLEADO_H_INCLUDED


Empleado* enpleado_new();
 void enpleado_delete(Empleado* pEmpleado);
int enpleado_setNombre(Empleado* pEmpledo, char *nombre);
;int enpleado_getNombre(Empleado* pEmpledo);
int enpleado_setApellido(Empleado* pEmpledo, char *apellido);
int enpleado_getApellido(Empleado* pEmpledo);
int enpleado_setidSector(Empleado* pEmpledo,int *idSector);
int enpleado_getidSector(Empleado* pEmpledo);
Empleado* enpleado_newConstructor( char *apellido, char *nombre,int *idSector );
void enpleado_debugShow(Empleado* pEmpleado);
