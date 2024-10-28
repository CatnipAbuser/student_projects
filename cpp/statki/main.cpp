#include <iostream>

using namespace std;

int main() {
	int statekX;
	int statekY;
	int x, y;
	cout<<"Podaj współrzędne statku na planszy 3x3"<<endl;
		cout<<"współrzędne x:";
		cin>>statekX;
		cout<<"współrzędne y;";
		cin>>statekY;
	
	cout<<"Na planszy 3x3 znajduje się 1 statek o wielkości 1x1"<<endl;
 
	for (int strzal = 1; strzal > 0; strzal--) {
	cout<<"Podaj wstpółrzędne strzału x:";
	cin>>x;
	cout<<"Podaj wstpółrzędne strzału y:";
	cin>>y;

		if (x == statekX && y == statekY) {
			cout <<"Trafiony zatopiony!"<< endl;
			break;
		} else {
			cout<<"Przegrałeś"<< endl;
			break;
		}

	}

	cout<<"Koniec Gry"<< endl;
	return 0;
}

