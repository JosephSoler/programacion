Funcion Raizz<- CalcularaRaiz ( Num )
	Si Num >=0 Entonces
		raiz_cuadrada <- RC(Num);
	SiNo
		raiz_cuadrada <- RC(-Num);
		Escribir "ra�z imaginaria";
	FinSi
	Raizz<-raiz_cuadrada
Fin Funcion

Algoritmo RaizCuadrada
		Escribir Sin Saltar "Ingresa el valor de numero:";
		Leer Num
		Escribir "Valor de raiz cuadrada: ", CalcularaRaiz(Num);
FinAlgoritmo
