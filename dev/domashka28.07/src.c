#include <stdio.h>

int a;

int main() {
	for (a = 0; a < 5; a++) {
		if (a == 0) {
			printf("\r\n X       X");
				continue;
		}
		
		if (a == 1) {
			printf("\r\n XX     XX");
			continue;
		}
		
		if (a == 2) {
			printf("\r\n XXX   XXX");
			continue;
		}
		
		if (a == 3) {
			printf("\r\n XXXX XXXX");
			continue;
		}
		
		if (a == 4) {
			printf("\r\n XXXXXXXXX");
			continue;
		}
	}
}