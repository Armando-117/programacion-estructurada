# include  <stdio.h>
# include  <stdbool.h>
# include  <string.h>
# include  <stdlib.h>
# include  <locale.h>

# define  POSIBLES  10


 {
	int matricula;
	char nombre ['  '];
	char primerapellido ['  '];
	char segundoapellido ['  '];
	char fechadecumple ['  '];	
	char escuela ['  '];
	char grado ['  '];
	char carrera ['  '];
	char genero ['  '];
}

void  crearEstudiante ( struct student * estudiante, int matricula, char nombre [], char primerapellido [], char segundoapellido [], char fechadecumple [], char escuela [], char grado [], char carrera [], char genero [] );
void  saludarEstudiante ( struct student * estudiante);

int  main ()
{
	setlocale (LC_ALL, " español " );
	
	struct student studentList [POSIBLES];
	int opcion, n = 0 , i;
	

	bool valido;
	int temp, matricula;
	char nombre ['  '], primerapellido ['  '], segundoapellido ['  '], fechadecumple ['  '], escuela ['  '], grado ['  '], carrera ['  '], genero ['  '];


	do
	{
		printf ( "-REPORTE- \ n \ n " );
		
	
		do
		{
			printf ( "problemas la matrícula del estudiante: " , n + 1 );
			scanf ( " % i " , &matirucla);
			
			valido = verdadero ;
			
			if (matricula < 1 )
			{
				valido = falso ;
				printf ( " \ n \ t Error: la matrícula debe ser mayor a 0 \ n \ n " );
			}
			else
				for (i = 0 ; i <n; i ++)
					if (matricula == matricula [i].matricula)
					{
						valido = falso ;
						printf ( " \ n \ t Error: la matrícula introducida ya le pertenece a otro estudiante \ n \ n " );
					}
		}
		while (! valido);
		
		
		hacer
		{
			printf ( "problemas el primer nombre (s) del estudiante: " , i + 1 );
			fflush (stdin);
			obtiene (nombre);
			
			if ( strlen (nombre) < 1 )
				printf("\n\tError: introduzca un nombre\n\n");
			else
				if (strlen(nombre) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(nombre) < 1 || strlen(nombre) > 32);
		
		
		do
		{
			printf("Introduzca el primer apellido del estudiante: ", i+1);
			fflush(stdin);
			gets(primerapellido);
			
			if (strlen(primerapellido) < 1)
				printf("\n\tError: introduzca el primer apellido\n\n");
			else
				if (strlen(primerapellido) > 100)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(primerapellido) < 1 || strlen(primerapellido) > 32);
		
		
		do
		{
			printf("Introduzca el segundo apellido del estudiante %i (opcional): ", i+1);
			fflush(stdin);
			gets(segundoapellido);
			
			if (strlen(segundoapellido) > 32)
				printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(segundoapellido) > 32);
		
		
		do
		{
			printf("Introduzca la fecha de nacimiento del estudiante %i usando el formato dd/mm/yyyy, incluyendo los '/': ", i+1);
			fflush(stdin);
			gets(fechadecumple);
			
			if (strlen(fechadecumple) < 1)
				printf("\n\tError: introduzca la fecha de nacimiento\n\n");
			else
				if (strlen(fechadecumple) > 10)
					printf("\n\tError: el límite de caracteres es de 10\n\n");
				else
					if (fechadecumple[2] != '/' || fechadecumple[5] != '/' || strlen(fechadecumple) != 10)
						printf("\n\tError: la fecha de nacimiento es invalida\n\n");
		}
		while (strlen(fechadecumple) < 1 || strlen(fechadecumple) > 10 || fechadecumple[2] != '/' || fechadecumple[5] != '/' || strlen(fechadecumple) != 10);
		
		
		do
		{
			printf("Introduzca el nombre de la escuela del estudiante: ", i+1);
			fflush(stdin);
			gets(escuela);
			
			if (strlen(escuela) < 1)
				printf("\n\tError: introduzca el nombre de la escuela\n\n");
			else
				if (strlen(escuela) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(escuela) < 1 || strlen(escuela) > 32);
		

		do
		{
			printf("Introduzca el grado del estudiante: ", i+1);
			fflush(stdin);
			gets(grado);
			
			if (strlen(grado) < 1)
				printf("\n\tError: introduzca el grado\n\n");
			else
				if (strlen(grado) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(grado) < 1 || strlen(grado) > 32);
		
		
		do
		{
			printf("Introduzca la carrera del estudiante: ", i+1);
			fflush(stdin);
			gets(carrera);
			
			if (strlen(carrera) < 1)
				printf("\n\tError: introduzca la carrera\n\n");
			else
				if (strlen(carrera) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(carrera) < 1 || strlen(carrera) > 32);
		
		
		do
		{
			printf("Introduzca el género del estudiante: ", i+1);
			fflush(stdin);
			gets(genero);
			
			if (strlen(genero) < 1)
				printf("\n\tError: introduzca el género\n\n");
			else
				if (strlen(genero) > 32)
					printf("\n\tError: el límite de caracteres es de 32\n\n");
		}
		while (strlen(genero) < 1 || strlen(genero) > 32);
		
		crearEstudiante(&studentList[n], matricula, nombre, primerapellido, segundoapellido, fechadecumple, escuela, grado, carrera, genero);
		saludarEstudiante(&studentList[n]);
		system("pause");
		
		n++;
		opcion = 2;
		
		if (n < POSIBLES)
		{
			
			do
			{
				printf("Desea registrar otro estudiante? 1-Si 2-No\nOpcion: ");
				scanf("%i", &temp);
				
				valido = true;
				if (temp != 1 && temp != 2)
				{
					printf("\n\tError: las opciones validas son 1-Si y 2-No\n\n");
					valido = false;
				}
			}
			while (!valido);
			opcion = temp;
		}
		
		system("cls");
	}
	while (opcion == 1);
	
	printf("-REPORTE-\n\n");
	for (i = 0; i < n; i++)
	{
		printf("Estudiante %i\n", i+1);
		printf("\tMatricula: %i\n", studentList[i].matricula);
		printf("\tPrimer nombre: %s\n", studentList[i].nombre);
		printf("\tPrimer apellido: %s\n", studentList[i].primerapellido);
		if (strlen(studentList[i].segundoapellido) > 0)
			printf("\tSegundo apellido: %s\n", studentList[i].segundoapellido);
		printf("\tFecha de nacimiento: %s\n", studentList[i].fechadecumple);
		printf("\tEscuela: %s\n", studentList[i].escuela);
		printf("\tGrado: %s\n", studentList[i].grado);
		printf("\tCarrera: %s\n", studentList[i].carrera);
		printf("\tGénero: %s\n", studentList[i].genero);
		printf("\n\n");
	}
	
	system("pause");
	return 0;
}

void crearEstudiante(struct student *estudiante, int matricula, char nombre[], char primerapellido[], char segundoapellido[], char fechadecumple[], char escuela[], char grado[], char carrera[], char genero[])
{
	estudiante->matricula = matricula;
	strcpy(estudiante->nombre, nombre);
	strcpy(estudiante->primer apellido, primerapellido);
	strcpy(estudiante->segundo apellido, segundoapellido);
	strcpy (estudiante-> fecha de cumple , fechadecumple);
	strcpy (estudiante-> escuela , escuela);
	strcpy (estudiante-> grado , grado);
	strcpy (estudiante-> carrera , carrera);
	strcpy (estudiante-> genero , genero);
}

void  saludarEstudiante ( struct student * estudiante)
{
	printf ( " ¡Acabas de registrador a % s ! \ n " , estudiante-> nombre );


  return 0;
}


