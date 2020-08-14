#include<stdio.h>
#include<stdlib.h>
const int porcentajeTotal = 100; 
int numeroAlumnosHombres, numeroAlumnosMujeres, totalAlumnos; 
float porcentajeHombres, porcentajeMujeres; 
main(){	
	printf("Captura el n%cmero de estudiantes sexo masculino: ",163); 
	scanf("%d",&numeroAlumnosHombres); 
	system("cls"); 
	printf("Captura el n%cmero de estudiantes sexo femenino: ",163); 
	scanf("%d",&numeroAlumnosMujeres); 
	system("cls"); 
	totalAlumnos = numeroAlumnosHombres + numeroAlumnosMujeres; 
    porcentajeHombres = (numeroAlumnosHombres * porcentajeTotal) / totalAlumnos; 
	porcentajeMujeres = (numeroAlumnosMujeres * porcentajeTotal) / totalAlumnos; 
	printf("::::: CALCULO: PORCENTAJE DE ALUMNOS SEXO MASCULINO Y FEMENINO :::::",144); 
	/* IMPRIMIR RESULTADOS */
	printf("\n\nEl total de estudiantes del curso de fundamentos de programaci%cn es: %d",162,totalAlumnos);
	printf("\n\nEl porcentaje de estudiantes del g%cnero masculino es: %.0f%c",130,porcentajeHombres,37);
	printf("\n\nEl porcentaje de estudiantes del g%cnero femenino es: %.0f%c\n\n",130,porcentajeMujeres,37);    	
    system("pause"); 
    return 0;
}
