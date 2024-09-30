#include <iostream>
#include <vector>
using namespace std;
//void Sortowanie(int tab[], int size){
//	for(int i=0; i<size - 1;i++){
//		for(int j=0;j<size - 1;j++){
//			if(tab[j]>tab[j+1])
//				swap(tab[j], tab[j+1]);
//		}
//	}
//	for (int y=0;y<4;y++){
//		cout<<tab[y];
//	}
//}
//int main(){
//int tabl[4];
//tabl[0]=3;
//tabl[1]=2;
//tabl[2]=5;
//tabl[3]=4;

//Sortowanie(tabl,4);

int main(){
vector<int> numbers;
numbers.push_back(4);
numbers.push_back(5);
numbers.push_back(2);
numbers.push_back(3);

for( int x=0;x < numbers.size(); x++){
	for(int y=0; y<numbers.size();y++){
		swap(numbers[x], numbers[y]);
	}
}
for(int v=0;v<numbers.size();v++){
cout<<numbers[v]<<'\n';
}
	return 0;


}
