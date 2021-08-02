#include <stdio.h>

int number;

int main() {
	int count = 5;
	int ms[] = { 1, 4, 3, 9, 2 };
	int dop;

	for (int i = 0; i < count; i++) {

		for (int j = 0; j < count - 1; j++) {

			if (ms[j] > ms[j + 1]) {
				dop = ms[j];
				ms[j] = ms[j + 1];
				ms[j + 1] = dop;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		printf("\r\n%d", ms[i]);
	}
}
