#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_NUMERIC, "ru_RU.utf8");
	FILE* ptrFile;
	ptrFile = fopen("fileL7.txt", "w");
	for (size_t i = 0; i < 10000; i++) {
		double x = double(rand() % 15) / 3.;
		double y = double(rand() % 15) / 3.;
		int b = (x >= 1 && x <= 4 && y >= 0 && y <= 5) && !(x > 2 && x < 3 && y > 1 && y < 4);
		fprintf(ptrFile, "%f %f %d\n", x, y, b);
	}
	fclose(ptrFile);
	return 0;
}