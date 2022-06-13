#include <iostream>

int a = 5;
int c = 3;
int m = 16;
static int prevIj;
int N = 100;
double zufall();

int main() {
	int ArN[N];
	for (int i = 0; i < N; i++) {
		ArN[i] = zufall();
	}
	for (unsigned int k = 0; k < N; ++k) {
		std::cout << k << ":" << ArN[k] << std::endl;
	}
}

double zufall() {
	int Ij = ((a * prevIj + c) % m);
	prevIj = Ij;
	return (Ij * 1.0) / m;
}
