#include <stdio.h>
//Aritmetická posloupnost

int main(void) {

	int rozdil = 1, predesle = 13;

	printf("Vlozte první cislo poslopnosti: ");

	printf("\nZadejte rozdíl: ");

	scanf("%d", &predesle);
	
	scanf("%d", &rozdil);

	printf("\n");

	for (int i = 1; i <= 10; i++) {
		
		printf("Cislo slozka: %d: %d\n", i, predesle);
		predesle += rozdil;
	}
}
//doufám že to mám správně, fungovalo mi to jen jednou pak už ne tak snad.