#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void stergereLinie(int x[100][100], int& m, int n, int l) {
	for (int i = l; i < m - 1; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = x[i + 1][j];
		}
	}
	m--;
}
void stergereColoana(int x[100][100], int m, int& n, int c) {
	for (int j = c; j < n - 1; j++) {
		for (int i = 0; i < m; i++) {
			x[i][j] = x[i][j + 1];
		}
	}
	n--;
}
void inserareLinie(int x[100][100], int& m, int n, int l, int v[]) {
	for (int i = m-1; i>=l; i--) {
		for (int j = 0; j < n; j++) {
			x[i+1][j] = x[i][j];
		}
	}
	m++;
	for (int j = 0; j < n; j++) {
		x[l][j] = v[j];
	}
}
void inserareColoana(int x[100][100], int m, int& n, int c, int v[]) {
	for (int j = n - 1; j >= c; j--) {
		for (int i = 0; i < m; i++) {
			x[i][j + 1] = x[i][j];
		}
	}
	n++;
	for (int i = 0; i < m; i++) {
		x[i][c] = v[i];
	}
}
void interschimbareLinii(int x[100][100], int m, int n, int l1,int l2) {
	for (int j = 0; j < n; j++) {
		int aux = x[l1][j];
		x[l1][j] = x[l2][j];
		x[l2][j] = aux;
	}
}
void interschimbareColoane(int x[100][100], int m, int n, int c1, int c2) {
	for (int i = 0; i < m; i++) {
		int aux = x[i][c1];
		x[i][c1] = x[i][c2];
		x[i][c2] = aux;
	}
}