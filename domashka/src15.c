#include <stdio.h>

int x;
int dxdx;

int main() {
	for (x = 0;x > 4;x++) {
		if(dxdx=3){
			printf("\r\nX X X X X");
		}
		else {
			printf("\r\n_ _ X _ _");
		}

		dxdx++;
	}
}