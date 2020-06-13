
void promedio(struct lista ){
	int contador =0;
	int suma = 0;
	float promedio=0;
		for (x=0;x<lista->ultimo;x++){
			
			suma = suma + lista->arreglo[x];
			contador= contador+1;

	}
	promedio= suma/contador; 
	return promedio;
}