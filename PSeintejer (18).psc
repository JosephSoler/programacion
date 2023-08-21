Algoritmo sin_titulo
	Escribir "Ingrese numeros que desea imprimir"
	Leer N
	Escribir "1 para pares y dos para impares"
	Leer a
	Para I<-0 Hasta N Hacer
		Si a==1 Entonces
			Si I mod 2 == 0 Entonces
				Escribir I
			Fin Si
		Fin Si
		Si a==2 Entonces
			Si I mod 2 == 1 Entonces
				Escribir I
			Fin Si
		FinSi
	Fin Para
FinAlgoritmo
