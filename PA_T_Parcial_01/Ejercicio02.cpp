#include "Ejercicio02.h"

int Ejercicio02::rob(int houses[], int n)
{
	int dinero = 0;

	for (int i = 1; i <= n; i = i + 2) {
		for (int x = 0; houses[x] <= n - 1; x = x + 2) {
			dinero += houses[x];
		}
	}
	return dinero;
}
