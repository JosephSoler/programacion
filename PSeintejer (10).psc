
Algoritmo Suma_N_Numeros
	Escribir "Coloque un numero igual o mayor que 100"
	Leer n
	I<-0
	Si n<100 Entonces
		Escribir "Numero no valido"
	SiNo
		Mientras n<>0  Hacer
			R= n mod 10
			I=I*10 + R
			Escribir R
			n= trunc(n / 10)
		Fin Mientras
	Fin Si
FinAlgoritmo
