Algoritmo EcuacionCuadratica
	Escribir ("Ingrese a: ")
	Leer a
	Escribir ("Ingrese b: ")
	Leer b
	Escribir ("Ingrese c: ")
	Leer c
	Si a=0 Entonces
		Escribir "Solucion no valida"
	SiNo
		D = b*b-4*a*c
		Si D=0 Entonces
			Escribir("Solucion unica: ")
			Escribir(b*b-4*a*c)
		SiNo
			Si D<0 Entonces
				Escribir "Soluciones imaginarias"
			SiNo
				x1=(-b+(D^(1-2)))/(2*a)
				x2=(-b-(D^(1/2)))/(2*a)
				Escribir ("Las soluciones son: ")
				Escribir x1
				Escribir x2
			FinSi
		FinSi
	FinSi
FinAlgoritmo
