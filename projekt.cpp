#include <iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

//dołączenie innych plików
#include "data.h"
#include "UI.h"
#include "handleQuestions.h"

using namespace std;

//ustawienie koloru konsoli
void setColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

int main(){
	//Ustawienie koloru konsoli
	system("color 17"); 

	//Możliwość wyświetlania polskich znaków
	setlocale(LC_ALL, "Polish"); 

	//Czyszczenie ekranu
	system("cls"); 

	//Wyświetlenie zasad gry
	start(); 

	//wyświetlenie studia gry
	studio(); 


														//losowanie pytań


	//utworzenie tablicy przechowującej losowo wygenerowane liczby
	int wynik = 0;
	int randomNumbers[12] = {}; 
	srand(time(0));

	//rozpoczęcie losowania dwunastu pytań
	for (int i = 0; i < 12; i++) { 
		int random;

		//wylosowanie liczby z zakresu 0 - 70 (indeks tablicy)
		random = rand() % 71; 

		randomNumbers[i] = random;

		//sprawdzenie czy losowe liczby się powtarzają
		for (int j = 0; j < i; j++) { 
			if (randomNumbers[j] == random) {
				random = rand() % 71;
			}
		}

		// Rozpoczęcie wyboru odpowiedzi na pytanie
		int selected = 0; 

		//Zmienna sprawdzająca, czy gracz popełnił błąd
		bool isCorrect = true;

		//pętla działająca podczas wybierania oapowiedzi na pytanie
		while (true) {

			//funkcja odpowiadająca za wyświetlenie pytania oraz odpowiedzi
			displayQuestion(questions, options, selected, random, key, wynik); 

			// Pobierz klawisz od użytkownika
			int userInput = _getch();
			if (userInput == 224) { 
				
				// Obsługa klawiszy strzałek
				userInput = _getch();

				// Strzałka w górę
				if (userInput == 72) { 
					// Przejście w górę 
					selected = (selected - 1 + 4) % 4; 
				}

				// Strzałka w dół
				else if (userInput == 80) { 
					// Przejście w dół
					selected = (selected + 1) % 4;
				}
			}

			// Klawisz ENTER
			else if (userInput == 13) { 

				// Sprawdzanie odpowiedzi
				isCorrect = checkAnswer(selected, key, random, wynik); 
				break; // Wyjście z pętli po zatwierdzeniu odpowiedzi
			}
		}

		// Jeśli odpowiedź była błędna
		if (!isCorrect) { 
			break; // Wyjście z pętli quizu
		}
	}

	//wyczyszczenie ekranu
	system("cls");
	

	//Jeżeli gracz odpowiedział poprawnie na wszystkie pytania
	if (calculatePrize(wynik) == 1000000) {

		//wyświetlenie odpowiedniego interfejsu
		gameWon();
		cout << setw(73) << "             Brawo, zostałeś milionerem" << endl << endl;
	}

	//Jeżeli gracz zaznaczył błędną odpowiedź
	else {

		//wyświetlenie odpowiedniego interfejsu
		gameLost();
		cout <<setw(20)<< "                    Tym razem nie zostałeś milionerem, lecz pamiętaj, że trening czyni mistrza!!!" << endl << endl;
	}

	//Wyświetneie nagrody gracza
	cout <<setw(58) << "Wygrywasz: "<< calculatePrize(wynik) << " złotych" << endl << endl;

	//Po naciśnięciu dowolnego klawisza gracz może zdecydować, czy grać dalej
	cout << setw(73) << "Naciśnij dowolny klawisz...";
	_getch();

	//Wyczyść ekran
	system("cls");

	//jeżeli gracz chce grać dalej
	if (summary(questions, options, key, wynik)) {

		//rozpocznij nową grę
		startNewGame(questions, options,key);
	}
}