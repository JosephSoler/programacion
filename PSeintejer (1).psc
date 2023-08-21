Algoritmo Muestresnumeros
	Definir Dato, M Como Real
	Dimension Dato[10] 
	C<-0
	B<-0
	E<-0
	Escribir "Introdusca dies numeros."
	Para X<-1 Hasta 10 Con Paso 1 Hacer
		lEER Dato[x]
		Si Dato[x] < 0 Entonces
			C<-C+1
		Fin Si
		Si Dato[x]=0 Entonces
		B<-B+1
		Fin Si
		Si Dato[x] >0 Entonces
			E<-E+1
		FinSi
	Fin Para
	Escribir C " Cantidad de numeros negativos"
	Escribir B " Cantidad de numeros nulos"
	Escribir E " Cantidad de numeros positivos"
FinAlgoritmo
