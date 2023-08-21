Algoritmo Determinar_si_esprimo
		Escribir "Ingresa un numero" 
		Leer N
		cont<-0
		Para a<-1 hasta N Hacer
			si N%a== 0 entonces 
				cont<-cont+1
			FinSi
		FinPara
		si cont== 2 entonces 
			Escribir "Es primo"
		SiNo
			Para I<-1 Hasta N Hacer
				Si N mod I==0 Entonces
					Escribir I
				Fin Si
			Fin Para
		FinSi
		
FinAlgoritmo
