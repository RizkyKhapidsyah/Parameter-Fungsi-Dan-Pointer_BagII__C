#include <stdio.h>
#include <conio.h>

float Kali(float, float);

int main() {
	float Hasil;

	Hasil = Kali(6, 4);
	printf("%f\n", Hasil);

	_getch();
	return 0;
}


float Kali(float A, float B) {
	float C;
	C = A * B;
	return(C);
}