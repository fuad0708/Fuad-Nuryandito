#include <iostream>
using namespace std;
int main(){
	
	int c,d;
	cout<<"Masukan Kolom : ";
	cin>>c;
	cout<<"Masukan Baris : ";
	cin>>d;
	system("CLS");
	cout<<" _  _  _\n";
	for(int e=1; e <= c; e++){
		for(int c = 1; c<=d; c++){
			cout<<"|_|";
		}
		
		cout<<""<< endl;
	}
}
