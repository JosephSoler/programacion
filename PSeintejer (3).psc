Algoritmo Calculadora
	
	Escribir "Ingrese dos numeros"
	Leer N
	Escribir "Operador algebraico"
	Leer Dato 
	Escribir "Ingrese segundo numero"
	Leer U
	Segun Dato Hacer
		"x":
			Si Dato = "x" Entonces
				R= N*U
				Escribir"Respuesta " R 
			FinSi
			
		"%":
			Si Dato = "%"
				Entonces
				R =N/U
				Escribir"Respuesta " R
			Fin Si
		"+":
			Si Dato = "+" Entonces
				R= N+U
				Escribir "Respuesta " R
			Fin Si
			
		"-":
			Si Dato = "-" Entonces
				R=N-U
				Escribir "Respuesta " R
			FinSi
	Fin Segun
FinAlgoritmo
