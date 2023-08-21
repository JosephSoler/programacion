Algoritmo Imprima_10_Numeros
	Definir N,x,May,Men Como entero
	Escribir "Introdusca 10 Numeros"
	acum<-0
	Para R<-1 Hasta 10 Hacer
		Escribir "Ingrese un Numero" ,R,":"
		Leer N
		acum<-acum+N
		Si (R==1) Entonces
			May<-N
			Men<-N
		SiNo
			si (N>May) Entonces
				May<-N
			FinSi
			si (N<Men) Entonces
				Men<-N
			FinSi
		FinSi
	Fin Para
	Promedio<-acum/10
	
		i<-i+1
	
	Escribir "Numero mayor es" May
	Escribir "Numero menor es",Men
	Escribir "El promedio es",Promedio
	
	
FinAlgoritmo
