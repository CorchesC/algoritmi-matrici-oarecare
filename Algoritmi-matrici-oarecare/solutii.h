#pragma once
#include "functii.h"
using namespace std;

void ex1() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	stergereLinie(x, m, n, 1);
	afisare(x, m, n);
}
void ex2() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	stergereColoana(x, m, n, 1);
	afisare(x, m, n);
}
void ex3() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int v[5] = { 0,0,0,0,0 };
	inserareLinie(x, m, n, 1, v);
	afisare(x, m, n);
}
void ex4() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int v[5] = { 0,0,0,0,0 };
	inserareColoana(x, m, n, 1, v);
	afisare(x, m, n);
}
void ex5() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	interschimbareLinii(x, m, n, 0, 1);
	afisare(x, m, n);
}
void ex6() {
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	interschimbareColoane(x, m, n,0,1);
	afisare(x, m, n);
}