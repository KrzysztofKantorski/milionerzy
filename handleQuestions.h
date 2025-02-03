#ifndef HANDLEQUESTIONS_H
#define HANDLEQUESTIONS_H
#include <string>
using namespace std;


  // Deklaracja funkcji odpowiadaj¹cych za dzia³anie gry (sprawdzenie, czy odpowiedŸ jest poprawna, zwiêkszanie nagrody, podsumowanie gry


//fukcja wyœwietlaj¹ca zasady gry
extern  void start();

//funkcja wyœwietlaj¹ca aktualne pytanie oraz zgromadzon¹ nagrodê
extern  void displayQuestion(string questions[], string options[71][4], int selected, int random, string key[], int wynik);

//funkcja sprawdzajêca, czy odpowiedŸ gracza jest poprawna
extern  bool checkAnswer(int selected, string key[], int random, int& wynik);

//funkcja odpowiadaj¹ca za przeliczenie poprawnych odpowiedzi na nagrodê w z³otówkach
extern  int calculatePrize(int wynik);

//fukcja podsumowuj¹ca grê (wyœwietlenie zdobytej nagrody) oraz pozwalaj¹ca na rozpoczêcie nowej gry
extern bool summary(string questions[71], string options[71][4], string key[71], int wynik);

//funkcja odpowiadaj¹ca za rozpoczêcie nowej gry
extern void startNewGame(string questions[], string options[71][4], string key[]);

#endif
