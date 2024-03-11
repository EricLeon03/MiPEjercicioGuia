#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>



int main(int argc, char *argv[])
{
	
	int sock_conn, sock_listen, ret;
	struct sockaddr_in serv_adr;
	char peticion[512];
	char respuesta[512];
	// INICIALITZACIONS
	// CREAMOS EL SOCKET CON LA SIGUIENTE FUNCIÓN(SOCKET DE ESCUCHA)
	if ((sock_listen = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		printf("Error creant socket");
	// Fem el bind al port
	
	
	memset(&serv_adr, 0, sizeof(serv_adr));// inicialitza a zero serv_addr
	serv_adr.sin_family = AF_INET;
	
	// asocia el socket a cualquiera de las IP de la m?quina. 
	//htonl formatea el numero que recibe al formato necesario (SIEMPRE PONDREMOS CUALQUIER DIRECCION ES DECIR INADDR_ANY)
	serv_adr.sin_addr.s_addr = htonl(INADDR_ANY);
	// establecemos el puerto de escucha
	serv_adr.sin_port = htons(9000);
//ASOCIA EL SOCKET DE ESCUCHA CON LOS DIFERENTES DATOS QUE HEMOS INICIALIZADO

	if (bind(sock_listen, (struct sockaddr *) &serv_adr, sizeof(serv_adr)) < 0)
		printf ("Error al bind");

// EL SOCKET SOLO ES PASIVO (ESCUCHA) EL NUMERO 3 SIGNIFICA QUE LA COLA DE ESPERA NO PUEDE SER MAYOR QUE 3)

	if (listen(sock_listen, 3) < 0)
		printf("Error en el Listen");

//TODO LO ANTERIOR ES SOLO INICIALIZACION, Y SIEMPRE SERÁ LO MISMO 

	int i;
	// Bucle infinito
	for (;;){
		printf ("Escuchando\n");
		
//SOCK_CONN ES UN NUEVO SOCKET PARA PODER COMUNICARME CON EL CLIENTE 

		sock_conn = accept(sock_listen, NULL, NULL);
		printf ("He recibido conexion\n");
		//sock_conn es el socket que usaremos para este cliente
		
		int terminar =0;
		// Entramos en un bucle para atender todas las peticiones de este cliente
		//hasta que se desconecte
		while (terminar ==0)
		{
	// Ahora recibimos la petici?n, OPERACION DE ESPERA (RECOGER LA PETICIÓN)

			ret=read(sock_conn,peticion, sizeof(peticion));
			printf ("Recibido\n");
			
			// Tenemos que a?adirle la marca de fin de string 
			// para que no escriba lo que hay despues en el buffer
			peticion[ret]='\0';
			
			//RECIBIMOS LA PETICION IDENTIFICAMOS CUAL DE ELLAS ES Y DAMOS LA RESPUESTA 
			printf ("Peticion: %s\n",peticion);
			
			// vamos a ver que quieren
			char *p = strtok( peticion, "/");
			int codigo =  atoi (p);
			// Ya tenemos el c?digo de la petici?n
			char nombre[20];
			
			if (codigo !=0)
			{
				p = strtok( NULL, "/");

				strcpy (nombre, p);
				// Ya tenemos el nombre
				printf ("Codigo: %d, Nombre: %s\n", codigo, nombre);
			}
			
			if (codigo ==0) //petici?n de desconexi?n
				terminar=1;
				
				else if (codigo ==1);
			int longit;
            int i;
            int EsPal =1;		
            longit = strlen(nombre);
			
			 for (i = 0; i < longit / 2; i++) {
        if (palabra[i] != palabra[longit - i - 1]) {
            // Si los caracteres no coinciden, no es un palíndromo
            esPal = 0;
			
            
        }
    }
	if (esPal){
		sprintf (respuesta, "%s: El nombre introducido  es un palíndromo",nombre);
	}
	else {
		sprintf (respuesta, "%s: El nombre introducido no es un palíndromo",nombre);
	}
			
			else if (codigo ==1) //piden la longitd del nombre
				sprintf (respuesta,"%d",strlen (nombre));
			else if (codigo ==2)
				// quieren saber si el nombre es bonito
				if((nombre[0]=='M') || (nombre[0]=='S'))
				strcpy (respuesta,"SI");
				else
					strcpy (respuesta,"NO");
			else //quiere saber si es alto
			{
				p = strtok( NULL, "/");

//ATOF SIRVE PARA CONVERTIR UN STRING A UN FLOAT

				float altura =  atof (p);
				if (altura > 1.70)
					sprintf (respuesta, "%s: eres alto",nombre);
				else
					sprintf (respuesta, "%s: eres bajo",nombre);
			}
				
			if (codigo !=0)
			{
				
				printf ("Respuesta: %s\n", respuesta);
				// Enviamos respuesta
				write (sock_conn,respuesta, strlen(respuesta));
			}
		}
		// Se acabo el servicio para este cliente
		close(sock_conn); 
	}
}
