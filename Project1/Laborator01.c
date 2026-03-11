//#include<stdio.h>
//#include<stdlib.h>
//
//struct Telefon {
//	int id;
//	int RAM;
//	char* producator ;
//	float pret;
//	char serie;
//};
//
//// initializare toate atributele si returneam telefonul nostru
//struct Telefon initializare(int id, int ram, const char* producator, float pret, char serie) {
//	struct Telefon t;
//	t.id = id;
//	//initializare structura
//	t.RAM = ram; 
//	t.producator = (char*)malloc(sizeof(char) * (strlen(producator) + 1)); // adresa de memorie
//	strcpy_s(t.producator, strlen(producator) + 1 , producator);
//	t.pret = pret;
//	t.serie = serie;
//	return t;
//}
//
//void afisare(struct Telefon t) {
//	//afisarea tuturor atributelor.
//	if (t.producator != NULL) {
//		printf("%d. Telefonul %s seria %c are %d Gb RAM si costa %5.2f RON.\n",
//		t.id, t.producator, t.serie, t.RAM, t.pret);
//	}
//	else {
//		printf("%d. Telefonul din seria %c are %d Gb RAM si costa %5.2f RON.\n",
//			t.id, t.serie, t.RAM, t.pret);
//	}
//}
//
//void modificaPret(struct Telefon* t, float noulPret) {
//	//modificarea unui atribut
//	if (noulPret > 0) {
//		//(*t).pret = noulPret; // dereferentiere metoda 1
//		t->pret = noulPret; // dereferentiere metoda 2
//	}
//}
//
//void dezalocare(struct Telefon *t) {
//	//dezalocare campuri alocate dinamic
//	if (t->producator != NULL) {
//		free(t->producator);
//		t->producator = NULL;
//	}
//}
//
//int main() {
//	struct Telefon t;
//	t = initializare(1, 256, "Samsung", 2000.5, 'A');
//	afisare(t);
//	modificaPret(&t, 1000); // obtin adresa lui t si i-l dau ca parametru
//	afisare(t);
//	dezalocare(&t); // dezalocare de adresa de t
//	afisare(t);
//
//	return 0;
//}