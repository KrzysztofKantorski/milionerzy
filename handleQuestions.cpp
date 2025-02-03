#include<iostream>
#include<iomanip>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include "handleQuestions.h"
#include "UI.h"
using namespace std;


											     //Funkcje odpowiadaj�ce za logik� gry


//Funkcja odpowiadaj�ca za przeliczenie poprawnych odpowiedzi na nagrod� w z�ot�wkach
int calculatePrize(int wynik) {
	if (wynik == 1) {
		wynik = 500;
	}
	else if (wynik == 2) {
		wynik = 1000;
	}
	else if (wynik == 3) {
		wynik = 2000;
	}
	else if (wynik == 4) {
		wynik = 5000;
	}
	else if (wynik == 5) {
		wynik = 10000;
	}
	else if (wynik == 6) {
		wynik = 20000;
	}
	else if (wynik == 7) {
		wynik = 40000;
	}
	else if (wynik == 8) {
		wynik = 75000;
	}
	else if (wynik == 9) {
		wynik = 125000;
	}
	else if (wynik == 10) {
		wynik = 250000;
	}
	else if (wynik == 11) {
		wynik = 500000;
	}
	else if (wynik == 12) {
		wynik = 1000000;
	}
	return wynik;
}



//Funkcja sprawdzaj�ca, czy odpowied� gracza jest poprawna
bool checkAnswer(int selected, string key[], int random, int& wynik) {

	//Zmienna, do kt�rej b�dzie przypisana odpowied� gracza
	string check = "";

	if (selected == 0) {
		check = "A";
	}
	else if (selected == 1) {
		check = "B";
	}
	else if (selected == 2) {
		check = "C";
	}
	else if (selected == 3) {
		check = "D";
	}

	//Por�wnanie odpowiedzi gracza z kluczem
	if (key[random] == check) {
		//Gracz odpowiedzia� poprawnie - nagroda si� zwi�ksza
		wynik++;
		return true;
	}
	else {
		//Gracz poda� b��dn� odpowied�
		return false;
	}

}

//Funkcja wy�wietlaj�ca aktualne pytanie oraz zgromadzon� nagrod�
void displayQuestion(string questions[], string options[71][4], int selected, int random, string key[], int wynik) {
	
	// Wyczy�� ekran
	system("cls"); 

	//Wy�wietlenie interfejsu studia
	studio();

	//Wy�wietlenie pytania
	cout << questions[random] << endl << endl;

	//Wy�wietlenie mo�liwych odpowiedzi
	for (int i = 0; i < 4; i++) {
		if (i == selected) {
			cout << "> " << options[random][i] << endl;
		}
		else {
			cout << "  " << options[random][i] << endl;
		}
	}
	cout << endl;
	cout << "Aktualnie masz zgromadzone: ";

	//Wy�wietlenie aktualnej nagrody gracza
	cout << calculatePrize(wynik) << " z�otych";
}

//Funkcja odpowiadaj�ca za rozpocz�cie gry
void start() {
	cout << endl << endl << endl << endl << endl;

	//Wy�wietlenie napisu ,,Milionerzy"
	napis();

	cout << endl;
	cout << setw(75) << "       Zasady gry:         " << endl << endl;
	cout << setw(0) << "1. Gra zawiera 12 pyta�" << endl;
	cout << "2. Na ka�de pytanie istnieje jedna odpowied�" << endl;
	cout << "3. Opdowied� na ka�de pytanie wybierz za pomoc� strza�ek i zatwierd� przyciskiem enter" << endl;
	cout << "4. Po ka�dej poprawnej odpowiedzi zobaczysz aktualn� nagrod�" << endl;
	cout << "5. Gdy zaznaczysz niepoprawn� odpowied� na pytanie, gra si� zako�czy i wy�wietli si� zdobyta nagroda" << endl;
	cout << "6. Za udzielenie 12 poprawnych odpowiedzi przyznana zostanie nagroda w wysoko�ci miliona z�otych" << endl;
	cout << endl << endl;
	cout << setw(75) << " Mi�ej zabawy i powodzenia ";
	cout << endl << endl;
	cout << setw(83) << "Naci�nij dowolny klawisz, aby rozpocz�� gr�...";
	_getch();
	system("cls");
}

//Fukcja podsumowuj�ca gr� (wy�wietlenie zdobytej nagrody) oraz pozwalaj�ca na rozpocz�cie nowej gry
bool summary(string questions[71], string options[71][4], string key[71], int wynik) {
	cout << endl << endl << endl << endl << endl << endl << endl;

	//Wy�wietlenie napisu ,,Milionerzy"
	napis();

	cout << endl << endl << endl;

	cout << setw(77) << "Chcesz spr�bowa� ponownie? (tak/nie)";

	//Zmienna przechowuj�ca odpowied� gracza
	string startNew = "";
	cin >> startNew;

	//Za zgod� gracza rozpocznie si� nowa gra
	if (startNew == "Tak" || startNew == "tak") {
		return true;
	}
	//Je�eli gracz chce zako�czy� gr�
	else {
		cout << endl << endl;
		cout << setw(73) << "Dzi�kuj� za udzia� w grze" << endl << endl << endl << endl << endl;
		return false;
	}
};

void startNewGame(string questions[], string options[71][4], string key[]) {

	//Zmienna przechowuj�ca wynik gracza
	int wynik = 0;

	//Utworzenie tablicy przechowuj�cej losowo wygenerowane liczby
	int randomNumbers[12] = {};

	//Potrzebne do generowania losowych liczb
	srand(time(0));

	//Rozpocz�cie losowania dwunastu pyta�
	for (int i = 0; i < 12; i++) { 

		//Wylosowanie liczby z zakresu 0 - 70 (indeks tablicy z pytaniami)
		int random;
		random = rand() % 71; 

		//Przypisanie losowej liczby do tablicy z losowymi liczbami
		randomNumbers[i] = random;

		//Sprawdzenie czy losowe liczby si� powtarzaj�
		for (int j = 0; j < i; j++) { 
			if (randomNumbers[j] == random) {

				//Je�eli liczby si� powtarzaj�, wylosuj inn�
				random = rand() % 71;
			}
		}

		// Rozpocz�cie wyboru odpowiedzi na pytanie
		int selected = 0; 

		//Zmienna sprawdzaj�ca, czy gracz pope�ni� b��d
		bool isCorrect = true;

		//P�tla dzia�aj�ca podczas wybierania oapowiedzi na pytanie
		while (true) {

			//Funkcja odpowiadaj�ca za wy�wietlenie pytania oraz odpowiedzi
			displayQuestion(questions, options, selected, random, key, wynik); 

			//Pobierz klawisz od u�ytkownika
			int userInput = _getch();
			if (userInput == 224) { 
				
				//Obs�uga klawiszy strza�ek
				userInput = _getch();

				//Strza�ka w g�r�
				if (userInput == 72) { 

					//Przej�cie w g�r�
					selected = (selected - 1 + 4) % 4; 
				}

				//Strza�ka w d�
				else if (userInput == 80) {

					//Przej�cie w d�
					selected = (selected + 1) % 4; 
				}
			}

			//Klawisz ENTER
			else if (userInput == 13) {

				//Sprawdzanie odpowiedzi
				isCorrect = checkAnswer(selected, key, random, wynik); 

				//Wyj�cie z p�tli po zatwierdzeniu odpowiedzi
				break; 
			}
		}

		//Je�li odpowied� by�a b��dna
		if (!isCorrect) { 
			//Wyj�cie z p�tli
			break; 
		}
	}

	system("cls");
	cout << endl;

	//Je�eli gracz odpowiedzia� poprawnie na wszystkie pytania
	if (calculatePrize(wynik) == 1000000) {

		//wy�wietlenie odpowiedniego interfejsu
		gameWon();
		cout << setw(73) << "             Brawo, zosta�e� milionerem" << endl << endl;
	}

	//Gracz zaznaczy� niepoprawn� odpowied�
	else {

		//wy�wietlenie odpowiedniego interfejsu
		gameLost();
		cout << setw(20) << "                  Tym razem nie zosta�e� milionerem, lecz pami�taj, �e trening czyni mistrza!!!" << endl << endl;
	}

	//Wy�wietneie nagrody gracza
	cout << setw(58) << "Wygrywasz: " << calculatePrize(wynik) << " z�otych" << endl << endl;

	//Po naci�ni�ciu dowolnego klawisza gracz mo�e zdecydowa�, czy gra� dalej
	cout << setw(73) << "Naci�nij dowolny klawisz...";
	_getch();
	system("cls");

	//je�eli gracz chce gra� dalej
	if (summary(questions, options, key, wynik)) {

		//rozpocznij now� gr�
		startNewGame(questions, options, key);
	}
}