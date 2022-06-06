#include <iostream>

using namespace std;

int main(){
	int n=20; //Esta variable se puede cambiar, es el tamaño del arreglo
	int numeros[n];
	int Repetido,contador, aux ,aux2, Repetido2,contador2;
	
	cout << "introduzca " << n << " numeros \n";
	for(int i = 0; i<n;i++){
		cout << "No.-" << i+1 << " "; 
		cin>>numeros[i];
		cout << "\n";
	}
	
	for(int j = 0; j<n; j++ ){
		contador = 0; 
		contador2=0;
		for(int i = 0; i<n;i++){
		if(numeros[j] == numeros[i] ){ //si el numero del arreglo en la posicion en j es igual al de
		                               // la posicion en i aumenta el contador
			contador++;
			contador2++;
		}
	}
	if(contador > aux){              
		Repetido = numeros[j];// si el contador es mayor a numero aux que tiene el valor del contador
	    aux = contador;     // el numero repetido seria el numero actual
	
	}
		if(contador2 > aux2 && numeros[j] != Repetido){ //Si hay mas de un numero repetido compara si no es igual al repetido anterior
			Repetido2 = numeros[j];
			aux2 = contador2;
		}
	}
	
	cout<<"A continuacion se muestran los numeros introducidos\n";
	
	for(int i = 0; i<n; i++){
		cout<< numeros[i] << " - "; //Aqui se le puede dar el formato para mostrar los numeros  
	}
	
	cout<< "\n\nEl numero que mas se repite es el " << Repetido ;
	if(Repetido2 >=2){ //si el segundo numero repetido es mayor o igual a 2 se muestra en pantalla
		cout << " y " << Repetido2;
	}
	 
	return 0;
}
