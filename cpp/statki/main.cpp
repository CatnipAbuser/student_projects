#include <iostream>

using namespace std;

int main() {
	int statekX = 4;
	int statekY = 7;
	int x, y;
	cout<<"Na planszy znajduje się 1 statek o wielkości 1x1"<<endl;

	for (int strzal = 5; strzal > 0; strzal--) {
	cout<<"Podaj wstpółrzędne strzału x:";
	cin>>x;
	cout<<"Podaj wstpółrzędne strzału y:";
	cin>>y;

		if (x == statekX && y == statekY) {
			cout <<"Trafiony zatopiony!"<< endl;
			break;
		} else {
			cout<<"Pudło! Zostały "<< strzal -1<<" naboje!"<< endl;
		}

	}

	cout<<"Koniec Gry"<< endl;
	return 0;
}

