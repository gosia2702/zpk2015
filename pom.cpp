#include<iostream>
using namespace std;

int main() {

	int pomiar = 0, poprzedniPomiar = 0, roznePomiary = 0;


	while (pomiar != -1) {

		cin >> pomiar;


		if (pomiar > poprzedniPomiar)
			roznePomiary++;


		poprzedniPomiar = pomiar;
	}

	cout << roznePomiary << endl;
}
