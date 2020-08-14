#include<stdio.h>
#include<stdlib.h>
const int porcentajeTotal = 100; // constante con valor de 100 para realizar las operaciones, representa el 100% de alumnos
int numeroAlumnosHombres, numeroAlumnosMujeres, totalAlumnos; // variables para guardar valores de captura y resultado
float porcentajeHombres, porcentajeMujeres; //variables que contendran el resultado en porcentaje de cada genero de alumnos
main(){	
	printf("Captura el n%cmero de estudiantes hombres: ",163); // pedir la captura de alumnos (hombres)
	scanf("%d",&numeroAlumnosHombres); // guardar valor en variable
	system("cls"); //limpiar pantalla entre cada captura
	printf("Captura el n%cmero de estudiantes mujeres: ",163); // pedir la captura de alumnos (mujeres)
	scanf("%d",&numeroAlumnosMujeres); // guardar valor en variable
	system("cls"); // limpiar pantalla entre capturas
	totalAlumnos = numeroAlumnosHombres + numeroAlumnosMujeres; // sumar todos los alumnos y asignarlo en variable
    porcentajeHombres = (numeroAlumnosHombres * porcentajeTotal) / totalAlumnos; //sacar porcentaje con regla de 3
	porcentajeMujeres = (numeroAlumnosMujeres * porcentajeTotal) / totalAlumnos; //sacar porcentaje con regla de 3
	printf("::::: CALCULO: PORCENTAJE DE ALUMNOS SEXO MASCULINO Y FEMENINO :::::",144); // imprimir un titulo 
	/* IMPRIMIR RESULTADOS */
	printf("\n\nEl total de estudiantes del curso de fundamentos de programaci%cn es: %d",162,totalAlumnos);
	printf("\n\nEl porcentaje de estudiantes del g%cnero masculino es: %.0f%c",130,porcentajeHombres,37);
	printf("\n\nEl porcentaje de estudiantes del g%cnero femenino es: %.0f%c\n\n",130,porcentajeMujeres,37);    	
    system("pause"); /* pausa antes de salir del programa - util para el ejecutable, pues de no tenerlo, despues de capturar datos, muestra
    rapidamente los mensajes y resultados y cierra el programa */
    return 0;
}
