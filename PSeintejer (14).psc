Funcion Factoriales <- CalcularFac ( Num )
	Para Nmenores<-1 Hasta Num-1 Con Paso 1 Hacer
		Num=Num*Nmenores
	Fin Para
	Factoriales<-Num
Fin Funcion

Algoritmo NumerosFactoriales
	Definir Num,Factoriales,Nmenores Como real
	Escribir "Ingresa un numero para sacar su factorial"
	Leer Num
	Nmenores<-0
	Si Num<=0 Entonces
		escribir Num," No se puede calcular, intenta con otro numero "
	SiNo
		 Escribir " Este es el resultado ", CalcularFac(Num)
		 
	 FinSi
FinAlgoritmo
