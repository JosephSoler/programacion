Algoritmo NumerosPerfectos
	Definir Num,Resultado,a Como Entero
	Escribir sin saltar "Inserte un Numero"
	Leer Num
	a<-0
	Para a<-1 Hasta Num-1 Con Paso 1 Hacer
		Si Num  mod a =0 Entonces
			Resultado=Resultado +a
		FinSi
	Fin Para
	si Resultado=Num Entonces
		Escribir "Es un numero perfecto"
	SiNo
		Escribir "No es un numero perfecto"
		
	FinSi
FinAlgoritmo
