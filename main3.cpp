#include <iostream>
#include <fstream>
#include<cstdlib>

using namespace std;

bool pierwsza(int liczba)
{
 for (int i=2; i<liczba/2; i++)
     if (liczba %i == 0) 
     {
           return false;
     }
   			return true;
}

int main(int argc, char** argv) {
	
	ifstream plik1;
	ofstream plik2;
	int liczba;
	
	plik1.open("a.txt");
	plik2.open("b.txt");
	
	while(!plik1.eof()){
	plik1>>liczba;
	
	if(pierwsza(liczba)) 
		plik2<<liczba<<" jest pierwsza"<<endl;
	else
		plik2<<liczba<<" jest zlozona"<<endl;

	}
	return 0;
}
