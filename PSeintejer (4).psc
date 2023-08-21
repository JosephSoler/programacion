
	Algoritmo Codigo_IA
		Definir num, sw como Entero;
		Definir cadena como Caracter;
		cadena <- "";
		Escribir "Concatene solo 5 numeros.";
		Para sw <- 1 Hasta 5 Con Paso 1 paso Hacer
			Escribir Sin Saltar "Ingrese un número : ";
			Leer num;
			Si num > 0 Entonces            
				cadena <- Concatenar(cadena,ConvertirATexto(num));            
			FinSi
		FinPara
		Escribir cadena;
FinProceso
