#include "algoritmi.h"

void sol1() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice1(a, n, m);

	afisareMatrice(a, n, m);

}


void sol2() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice2(a, n, m);

	afisareMatrice(a, n, m);

}


void sol3() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice3(a, n, m);

	afisareMatrice(a, n, m);

}



void sol4() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice4(a, n, m);

	afisareMatrice(a, n, m);

}


void sol5() {

	int a[100][100] = {};

	int n = 4;

	int m = 4;

	int k = 1274;

	matrice5(a, n, m);

	afisareMatrice(a, n, m);

}



void sol6() {

	int a[100][100] = { {1,1,5,10,2},{6,11,1,1,4}, {6,2,5,5,3},{1,22,12,2,10},{16,1,7,1,8}};

	int n = 5;

	int m = 5;


	matrice6(a, n, m);

	cout << endl;

	afisareMatrice(a, n, m);

}

void sol7() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,22,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;


	matrice7(a, n, m);


	afisareMatrice(a, n, m);

}

void sol8() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,0,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;


	if (matrice8(a, n, m)) {
		cout << "triunghiulara superior" << endl;
	}
	else {
		cout << "nu este triunghiulara superior" << endl;
	}


	afisareMatrice(a, n, m);

}

void sol9() {

	int a[100][100] = {};

	int n = 4;

	int m = 4;

	matrice9(a, n, m);

	afisareMatrice(a, n, m);

	// elementul a[4][4]=1
}

void sol10() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,0,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;

	matrice10(a, n, m);

	afisareMatrice(a, n, m);

	//  b. strict deasupra diag principale

}

void sol11() {

	int a[100][100] = {};

	int n = 8;

	int m = 8;

	matrice11(a, n, m);

	afisareMatrice(a, n, m);
	
	// b.15

}

void sol12() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,0,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;

	matrice12(a, n, m);

	afisareMatrice(a, n, m);



}


void sol13() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,0,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;

	int p = 2;

	int q = 4;

	cout << "INAINTE " << endl;

	afisareMatrice(a, n, m);

	cout << "DUPA" << endl;

	matrice13(a, n, m,p,q);

	afisareMatrice(a, n, m);

}

void sol14() {

	int a[100][100] = { {1,1,1,10,2},{6,11,5,1,4}, {6,2,6,5,3},{1,0,12,2,10},{16,1,13,1,8} };

	int n = 5;

	int m = 5;

	matrice14(a, n, m);

	afisareMatrice(a, n, m);



}

void sol15() {

	int a[100][100] = { {2,7,4,8,4},{1,1,2,4,2}, {3,12,6,12,3},{1,22,2,4,2},{5,10,10,20,8} };

	int n = 5;

	int m = 5;

	if (matrice15(a, n, m)) {

		cout << "este pivot " << endl;

	}
	else {
		cout << "nu este pivot " << endl;
	}

	afisareMatrice(a, n, m);



}


void sol16() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice16(a, n, m);

	afisareMatrice(a, n, m);


}

void sol17() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice17(a, n, m);

	afisareMatrice(a, n, m);


}

void sol18() {

	int a[100][100] = {};

	int n = 5;

	int m = 5;

	matrice18(a, n, m);

	afisareMatrice(a, n, m);


}

void sol19() {

	int a[100][100] =  { {10,11,12,13,14,15},{16,17,18,19,20,21},{22,23,24,25,26,27},{28,29,30,31,32,33},{34,35,36,37,38,39},{40,41,42,43,44,45} };

	int n = 6;

	int m = 6;

	afisareMatrice(a, n, m);

	afisareCadran(a, n, m);


}

void sol20() {

	int a[100][100] = {};

	int n = 4;

	int m = 4;

	int k = 1274;

	matrice19(a, n, m,k);

	afisareMatrice(a, n, m);


}