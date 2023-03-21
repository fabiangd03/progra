// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float c;
	float d;
	float x1;
	float x2;
	cout << ("Ingrese a: ") << endl;
	cin >> a;
	cout << ("Ingrese b: ") << endl;
	cin >> b;
	cout << ("Ingrese c: ") << endl;
	cin >> c;
	if (a==0) {
		cout << "Solucion no valida" << endl;
	} else {
		d = b*b-4*a*c;
		if (d==0) {
			cout << ("Solucion unica: ") << endl;
			cout << (b*b-4*a*c) << endl;
		} else {
			if (d<0) {
				cout << "Soluciones imaginarias" << endl;
			} else {
				x1 = (-b+(pow(d,(1-2))))/(2*a);
				x2 = (-b-(pow(d,(1/2))))/(2*a);
				cout << ("Las soluciones son: ") << endl;
				cout << x1 << endl;
				cout << x2 << endl;
			}
		}
	}
	return 0;
}

