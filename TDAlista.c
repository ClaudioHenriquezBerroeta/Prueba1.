
void promedio(struct lista ){    /* Se creo el nombre de la funcion*/
	int contador =0;    /* Contador que nos servira para la divisio */
	int suma = 0;       /* Variable que guardara la suma total de los numeros*/
	float promedio=0;
		for (x=0;x<lista->ultimo;x++){   /* Se recorrera desde 0 hasta el ultimo valor de la lista */
			
			suma = suma + lista->arreglo[x];     /* se iran sumando los numeros de la posicion x , con la  acumulacion de la variable suma*/
			contador= contador+1;  /* Se calculara cuantos numero existen en la lista*/

	}
	promedio= suma/contador;    /* Calculo del promedio */
	return promedio;    /*  Nuestra funcion finalmente retornara el promedio */ 
}
