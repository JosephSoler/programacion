Funcion Respuesta<- fibonacci1 ( Num )
	Si Num==1 O Num==2 Entonces
		Respuesta=1
	SiNo
		Respuesta=fibonacci1(Num-1)+ fibonacci1(Num-2)
	FinSi
Fin Funcion

Algoritmo fibonacci
	Definir N Como Entero
	Escribir  "Ingresa un numero"
	Leer N
	Escribir fibonacci1(N)
FinAlgoritmo
