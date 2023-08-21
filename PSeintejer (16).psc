Algoritmo Numerosprimos 
	Escribir "Ingresa un numero" 
	Leer Num
	cont<-0
	Para a<-1 hasta Num Hacer
		si Num%a== 0 entonces 
			cont<-cont+1
		FinSi
	FinPara
	si cont== 2 entonces 
		escribir Num," Es un numero primo"
		sino escribir Num," No es un numero primo"
	FinSi
FinAlgoritmo
