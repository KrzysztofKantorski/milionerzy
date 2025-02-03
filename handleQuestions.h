#ifndef HANDLEQUESTIONS_H
#define HANDLEQUESTIONS_H
#include <string>
using namespace std;


  // Deklaracja funkcji odpowiadaj�cych za dzia�anie gry (sprawdzenie, czy odpowied� jest poprawna, zwi�kszanie nagrody, podsumowanie gry


//fukcja wy�wietlaj�ca zasady gry
extern  void start();

//funkcja wy�wietlaj�ca aktualne pytanie oraz zgromadzon� nagrod�
extern  void displayQuestion(string questions[], string options[71][4], int selected, int random, string key[], int wynik);

//funkcja sprawdzaj�ca, czy odpowied� gracza jest poprawna
extern  bool checkAnswer(int selected, string key[], int random, int& wynik);

//funkcja odpowiadaj�ca za przeliczenie poprawnych odpowiedzi na nagrod� w z�ot�wkach
extern  int calculatePrize(int wynik);

//fukcja podsumowuj�ca gr� (wy�wietlenie zdobytej nagrody) oraz pozwalaj�ca na rozpocz�cie nowej gry
extern bool summary(string questions[71], string options[71][4], string key[71], int wynik);

//funkcja odpowiadaj�ca za rozpocz�cie nowej gry
extern void startNewGame(string questions[], string options[71][4], string key[]);

#endif
