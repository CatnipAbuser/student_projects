#include <iostream>

using namespace std;
void Sortowanie(int tab[], int size){
	for(int i=0; i<size - 1;i++){
		for(int j=0;j<size - 1;j++){
			if(tab[j]>tab[j+1])
				swap(tab[j], tab[j+1]);
		}
	}
	for (int y=0;y<4;y++){
		cout<<tab[y];
	}
}
int main(){
int tabl[4];
tabl[0]=3;
tabl[1]=2;
tabl[2]=5;
tabl[3]=4;

Sortowanie(tabl,4);
	return 0;


}
