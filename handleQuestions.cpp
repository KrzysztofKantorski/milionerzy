#include<iostream>
#include<iomanip>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include "handleQuestions.h"
#include "UI.h"
using namespace std;


											     //Funkcje odpowiadaj¹ce za logikê gry


//Funkcja odpowiadaj¹ca za przeliczenie poprawnych odpowiedzi na nagrodê w z³otówkach
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



//Funkcja sprawdzaj¹ca, czy odpowiedŸ gracza jest poprawna
bool checkAnswer(int selected, string key[], int random, int& wynik) {

	//Zmienna, do której bêdzie przypisana odpowiedŸ gracza
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

	//Porównanie odpowiedzi gracza z kluczem
	if (key[random] == check) {
		//Gracz odpowiedzia³ poprawnie - nagroda siê zwiêksza
		wynik++;
		return true;
	}
	else {
		//Gracz poda³ b³êdn¹ odpowiedŸ
		return false;
	}

}

//Funkcja wyœwietlaj¹ca aktualne pytanie oraz zgromadzon¹ nagrodê
void displayQuestion(string questions[], string options[71][4], int selected, int random, string key[], int wynik) {
	
	// Wyczyœæ ekran
	system("cls"); 

	//Wyœwietlenie interfejsu studia
	studio();

	//Wyœwietlenie pytania
	cout << questions[random] << endl << endl;

	//Wyœwietlenie mo¿liwych odpowiedzi
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

	//Wyœwietlenie aktualnej nagrody gracza
	cout << calculatePrize(wynik) << " z³otych";
}

//Funkcja odpowiadaj¹ca za rozpoczêcie gry
void start() {
	cout << endl << endl << endl << endl << endl;

	//Wyœwietlenie napisu ,,Milionerzy"
	napis();

	cout << endl;
	cout << setw(75) << "       Zasady gry:         " << endl << endl;
	cout << setw(0) << "1. Gra zawiera 12 pytañ" << endl;
	cout << "2. Na ka¿de pytanie istnieje jedna odpowiedŸ" << endl;
	cout << "3. OpdowiedŸ na ka¿de pytanie wybierz za pomoc¹ strza³ek i zatwierdŸ przyciskiem enter" << endl;
	cout << "4. Po ka¿dej poprawnej odpowiedzi zobaczysz aktualn¹ nagrodê" << endl;
	cout << "5. Gdy zaznaczysz niepoprawn¹ odpowiedŸ na pytanie, gra siê zakoñczy i wyœwietli siê zdobyta nagroda" << endl;
	cout << "6. Za udzielenie 12 poprawnych odpowiedzi przyznana zostanie nagroda w wysokoœci miliona z³otych" << endl;
	cout << endl << endl;
	cout << setw(75) << " Mi³ej zabawy i powodzenia ";
	cout << endl << endl;
	cout << setw(83) << "Naciœnij dowolny klawisz, aby rozpocz¹æ grê...";
	_getch();
	system("cls");
}

//Fukcja podsumowuj¹ca grê (wyœwietlenie zdobytej nagrody) oraz pozwalaj¹ca na rozpoczêcie nowej gry
bool summary(string questions[71], string options[71][4], string key[71], int wynik) {
	cout << endl << endl << endl << endl << endl << endl << endl;

	//Wyœwietlenie napisu ,,Milionerzy"
	napis();

	cout << endl << endl << endl;

	cout << setw(77) << "Chcesz spróbowaæ ponownie? (tak/nie)";

	//Zmienna przechowuj¹ca odpowiedŸ gracza
	string startNew = "";
	cin >> startNew;

	//Za zgod¹ gracza rozpocznie siê nowa gra
	if (startNew == "Tak" || startNew == "tak") {
		return true;
	}
	//Je¿eli gracz chce zakoñczyæ grê
	else {
		cout << endl << endl;
		cout << setw(73) << "Dziêkujê za udzia³ w grze" << endl << endl << endl << endl << endl;
		return false;
	}
};

void startNewGame(string questions[], string options[71][4], string key[]) {

	//Zmienna przechowuj¹ca wynik gracza
	int wynik = 0;

	//Utworzenie tablicy przechowuj¹cej losowo wygenerowane liczby
	int randomNumbers[12] = {};

	//Potrzebne do generowania losowych liczb
	srand(time(0));

	//Rozpoczêcie losowania dwunastu pytañ
	for (int i = 0; i < 12; i++) { 

		//Wylosowanie liczby z zakresu 0 - 70 (indeks tablicy z pytaniami)
		int random;
		random = rand() % 71; 

		//Przypisanie losowej liczby do tablicy z losowymi liczbami
		randomNumbers[i] = random;

		//Sprawdzenie czy losowe liczby siê powtarzaj¹
		for (int j = 0; j < i; j++) { 
			if (randomNumbers[j] == random) {

				//Je¿eli liczby siê powtarzaj¹, wylosuj inn¹
				random = rand() % 71;
			}
		}

		// Rozpoczêcie wyboru odpowiedzi na pytanie
		int selected = 0; 

		//Zmienna sprawdzaj¹ca, czy gracz pope³ni³ b³¹d
		bool isCorrect = true;

		//Pêtla dzia³aj¹ca podczas wybierania oapowiedzi na pytanie
		while (true) {

			//Funkcja odpowiadaj¹ca za wyœwietlenie pytania oraz odpowiedzi
			displayQuestion(questions, options, selected, random, key, wynik); 

			//Pobierz klawisz od u¿ytkownika
			int userInput = _getch();
			if (userInput == 224) { 
				
				//Obs³uga klawiszy strza³ek
				userInput = _getch();

				//Strza³ka w górê
				if (userInput == 72) { 

					//Przejœcie w górê
					selected = (selected - 1 + 4) % 4; 
				}

				//Strza³ka w dó³
				else if (userInput == 80) {

					//Przejœcie w dó³
					selected = (selected + 1) % 4; 
				}
			}

			//Klawisz ENTER
			else if (userInput == 13) {

				//Sprawdzanie odpowiedzi
				isCorrect = checkAnswer(selected, key, random, wynik); 

				//Wyjœcie z pêtli po zatwierdzeniu odpowiedzi
				break; 
			}
		}

		//Jeœli odpowiedŸ by³a b³êdna
		if (!isCorrect) { 
			//Wyjœcie z pêtli
			break; 
		}
	}

	system("cls");
	cout << endl;

	//Je¿eli gracz odpowiedzia³ poprawnie na wszystkie pytania
	if (calculatePrize(wynik) == 1000000) {

		//wyœwietlenie odpowiedniego interfejsu
		gameWon();
		cout << setw(73) << "             Brawo, zosta³eœ milionerem" << endl << endl;
	}

	//Gracz zaznaczy³ niepoprawn¹ odpowiedŸ
	else {

		//wyœwietlenie odpowiedniego interfejsu
		gameLost();
		cout << setw(20) << "                  Tym razem nie zosta³eœ milionerem, lecz pamiêtaj, ¿e trening czyni mistrza!!!" << endl << endl;
	}

	//Wyœwietneie nagrody gracza
	cout << setw(58) << "Wygrywasz: " << calculatePrize(wynik) << " z³otych" << endl << endl;

	//Po naciœniêciu dowolnego klawisza gracz mo¿e zdecydowaæ, czy graæ dalej
	cout << setw(73) << "Naciœnij dowolny klawisz...";
	_getch();
	system("cls");

	//je¿eli gracz chce graæ dalej
	if (summary(questions, options, key, wynik)) {

		//rozpocznij now¹ grê
		startNewGame(questions, options, key);
	}
}