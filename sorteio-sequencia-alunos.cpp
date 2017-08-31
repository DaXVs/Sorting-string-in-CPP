#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"");
	
	string n1,n2,n3,n4;
	int numstr = 4, valor, nn1=0,nn2=0,nn3=0,nn4=0;
	
	cout << "Digite o 1º nome: ";
	cin >> n1;
	cout << "Digite o 2º nome: ";
	cin >> n2;
	cout << "Digite o 3º nome: ";
	cin >> n3;
	cout << "Digite o 4º nome: ";
	cin >> n4;
	
	cout << "\nA nova sequência é: ";
	
	while(numstr>=0) {
		srand(time(0));
		valor = 1+(rand()%4);
		if(valor==1) {
			if(nn1==1) {
				continue;
			}
			cout << n1 << " ";
			numstr--;
			nn1++;
			numstr--;
		}else if(valor==2) {
			if(nn2==1) {
				continue;
			}
			cout << n2 << " ";
			nn2++;
			numstr--;
		}else if(valor==3) {
			if(nn3==1) {
				continue;
			}
			cout << n3 << " ";
			nn3++;
			numstr--;
		}else {
			if(nn4==1) {
				continue;
			}
			cout << n4 << " ";
			nn4++;
			numstr--;
		}
	}
	
	getchar();
	return 0;
}
