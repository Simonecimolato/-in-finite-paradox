//Simone Cimolato, 29/07/2016.
//Paradosso (in)finito

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

long double tempo=1000;
int a=0,tot;
string scelta;

int main() {


cout<<"esecuzione n:     "<<"tempo (ms):"<<endl;
cout<<endl;

while (tempo!=0){
		Sleep(tempo);
		cout << a <<"                 " << tempo << endl;
		tempo = tempo/2;
		a++;
	}

tot= (a-1);
cout<<endl;
cout <<"esecuzioni totali: "<< tot<<endl;
cout<<endl;
fine:
cout<<"Vuoi ricominciare?  (Y) Yes. (N) No. : ";
cin>>scelta;
if (scelta=="Y" or scelta=="y") {
	tempo=2000;
	a=0;
	tot=0;
	system("cls");
	return main();
}
else if(scelta=="N" or scelta=="n") {
return (0);	
}
else if (scelta !="Y" and scelta!="y" and scelta!="N" and scelta !="n") {
	cout<<"imput non valido"<<endl;
	cout<<endl;
	goto fine;
	}
}
