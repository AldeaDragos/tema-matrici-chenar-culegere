#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void matrice1(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i < j && i+j < n - 1) {
				a[i][j] = 1;
			}

			if (i<j && i + j > n - 1) {
				a[i][j] = 3;
			}

			if (i > j && i + j < n - 1) {
				a[i][j] = 3;
			}

			if (i > j && i + j > n - 1) {
				a[i][j] = 2;
			}
		}
	}

}

//???

void matrice2(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			a[i][n - i - 1] = 5;

			if (i + j < n - 1) {
				a[i][j] = a[i][j + 1] - 1;
			}

			if (i + j > n - 1) {
				a[i][j]=a[i][j-1]+1;
			}

		}
	}

}

void matrice3(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i % 2 == 0) {
				a[i][j] = i + 1;
			}
			else {
				a[i][j] = j + 1;
			}

		}
	}

}

int nrPrim(int n) {

	if (n < 2) {
		return false;
	}
	else {

		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				return false;
			}
		}

	}
	return true;
}


void matrice4(int a[100][100], int n, int m) {

	int numarPrim = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			while (!nrPrim(numarPrim)) {
				numarPrim++;
			}
			a[i][j] = numarPrim;
			numarPrim++;
		}
	}

}


void matrice5(int a[100][100], int n, int m) {

	

	for (int i = 0; i < n; i++) {

		int produs = 1;

		for (int j = 0; j < m; j++) {

			produs *= a[i][0];
			
		}
		cout << produs;
	}

}


void matrice6(int a[100][100], int n, int m) {

	

	for (int j = 0; j < m; j++) {

		for (int i = 0;i < n; i++) {

			int produs = 1;

			for (int k = 0; k < n; k++) {
				if (k != i) {
					produs *= a[k][j];
				}
			}
			if (produs == a[i][j]) {
				cout << a[i][j] << " ";
			}
		}
		
	}
}

void matrice7(int a[100][100], int n, int m) {



	for (int j = 0; j < m; j++) {

		bool crescatoare = true;

		for (int i = 0; i < n; i++) {

			if (a[i][j] >= a[i + 1][j]) {
				crescatoare = false;
				
			}
		}
		if (crescatoare==true) {
			cout << j << " ";
		}
		
	}
}

int matrice8(int a[100][100], int n, int m) {

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i][j] != 0) {
				return false;
			}
		}

	}
	return true;
}

void matrice9(int a[100][100], int n, int m) {

	int x = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = i + 1;
			}
		}
	}
	
}

void matrice10(int a[100][100], int n, int m) {

	int x = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < m; j++) {
			x += a[i][j];
			cout << x << endl;
		}
	}
}

void matrice11(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {

		int k = i+1;

		for (int j = 0; j < n; j++) {

			a[i][j] = k;

			k = k + 1;
		}

	}

}

void matrice12(int a[100][100], int n, int m) {

	int numarMax = 0;

	int numarMax2 = 0;

	for (int i = 0; i < n; i++) {

		int valoare = a[i][n - 1 - i];

		if (valoare > numarMax) {
			numarMax2 = numarMax;
			numarMax = valoare;
		}


	}
	cout << numarMax << " si " << numarMax2 << endl;
}

void interschimbareLinii(int a[100][100], int n, int m, int linia1, int linia2) {

	for (int j = 0; j < m; j++) {
		int aux = a[linia1][j];
		a[linia1][j] = a[linia2][j];
		a[linia2][j] = aux;
	}

}

void matrice13(int a[100][100], int n, int m,int p,int q) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			interschimbareLinii(a, n, m, p, q);
		}
	}

}

int elemMaxDiagPrincipala(int a[100][100], int n, int m) {

	int valoareMax = 0;

	for (int i = 0; i < n; i++) {

		int valoare = a[i][i];

		if (valoare > valoareMax) {
			valoareMax = valoare;
		}

	}
	return valoareMax;
}


int elemMinDiagPrincipala(int a[100][100], int n, int m) {

	int valoareMin = 9999;

	for (int i = 0; i < n; i++) {

		int valoare = a[i][i];

		if (valoare < valoareMin) {
			valoareMin = valoare;
		}

	}
	return valoareMin;
}

void matrice14(int a[100][100], int n, int m) {

	int valMin = elemMinDiagPrincipala(a, n, m);
	int valMax = elemMaxDiagPrincipala(a, n, m);

	for (int i = 0; i < n; i++) {

		if (a[i][i] == valMin) {
			a[i][i] = valMax;
		}
		else if (a[i][i] == valMax) {
			a[i][i] = valMin;
		}

	}
}

int matrice15(int a[100][100], int n,int m) {

	for (int j = 1; j < m; j++) {

		int x = 2;

		for (int i = 0; i < n; i++) {

			if (a[i][0] * x != a[i][j]) {
				return false;
			}

		}

	}
	return true;
}

void matrice16(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {


			if (i == j || i + j == n-1) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 2;
			}

		}
	}

}

void matrice17(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i == j || i + j == n - 1) {
				a[i][j] = 0;
			}

			if (i > j && i + j > n - 1 || i < j && i + j < n - 1) {
				a[i][j] = 1;
			}
			else if (i > j && i + j < n - 1 || i<j && i + j>n - 1) {
				a[i][j] = 2;
			}
		}


	}

}

void matrice18(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i == j || i + j == n - 1) {
				a[i][j] = 1;
			}
			if (i > j && i + j > n - 1 || i < j && i + j < n - 1) {
				a[i][j] = 1;
			}
			else if (i > j && i + j < n - 1 || i<j && i + j>n - 1) {
				a[i][j] = 2;
			}

		}
	}

}

void afisareCadran(int a[100][100], int n, int m) {


	int i1,i2,j1,j2;

	for (i1 = 0, j1 = 0, i2 = n - 1, j2 = m - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {

		for (int k = j1; k <= j2; k++) {
			cout << a[i1][k] << " ";
		}

		for (int k = i1+1; k <= i2; k++) {
			cout << a[k][j2] << " ";
		}

		for (int k = j2 - 1; k >= j1; k--) {
			cout << a[i2][k] << " ";
		}

		for (int k = i2 - 1; k > i1; k--) {
			cout << a[k][j1] << " ";
		}

	}
}

void matrice19(int a[100][100], int n, int m, int k) {

	int cifra[10];
	int ct = 0;

	while (k > 0) {

		cifra[ct++] = k % 10;

		k = k / 10;

	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			a[i][j] = cifra[ct - i - 1];

		}
	}
}