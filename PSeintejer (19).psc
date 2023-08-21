Algoritmo PruebaDeNumeroPareImpar
	Definir N,Resultado Como Entero
	cum<- 0
	Escribir "Dame 10 numeros y te dire si son par o impar"
	Repetir
		Para x<- 1 hasta 10 Hacer 
			Escribir "Inserta un numero"
			Leer N
			Resultado <- N MOD 2 
			Si N== 0 ENTONCES Escribir "Es Numero Neutro"
			Sino 
				Si 0== Resultado Entonces cum<-cum+1
					Escribir N," Es Par. "
				sino
					cum<-cum+1
					Escribir N," Es Impar. " 
				FinSi
			FinSi
		FinPara
	Hasta Que cum = 10
	

	
FinAlgoritmo
