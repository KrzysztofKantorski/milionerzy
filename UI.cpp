#include "UI.h"
#include<iostream>
#include<iomanip>
using namespace std;

                              //Funkcje odpowiedzialne za wy�wietlenie interfejsu


void napis() {
	cout << cout.width(20) << "  *     *   ***   *       ***   *****   *    *   *****   ****   *****   *   * 0" << endl;
	cout << cout.width(20) << "  **   **    *    *        *   *     *  **   *   *       *   *      *   *   * 0" << endl;
	cout << cout.width(20) << "  * * * *    *    *        *   *     *  * *  *   *****   ****      *     * *  0" << endl;
	cout << cout.width(20) << "  *  *  *    *    *        *   *     *  *  * *   *       *   *    *       *   0" << endl;
	cout << cout.width(20) << "  *     *   ***   *****   ***   *****   *   *    *****   *   *   ****     *   0" << endl;
}
void studio() {
	cout << cout.width(20) << "  *     *   ***   *       ***   *****   *    *   *****   ****   *****   *   * 0" << endl;
	cout << cout.width(20) << "  **   **    *    *        *   *     *  **   *   *       *   *      *   *   * 0" << endl;
	cout << cout.width(20) << "  * * * *    *    *        *   *     *  * *  *   *****   ****      *     * *  0" << endl;
	cout << cout.width(20) << "  *  *  *    *    *        *   *     *  *  * *   *       *   *    *       *   0" << endl;
	cout << cout.width(20) << "  *     *   ***   *****   ***   *****   *   *    *****   *   *   ****     *   0" << endl;

	//Rozpocz�cie rysowania studia
	cout << setw(86) << "  __________________________________________________   \n";
	cout << setw(86) << "/                                                  \\  \n";

	// Puste przestrzenie w �rodku
	cout << setw(85) << "                                                       \n";
	cout << setw(85) << "                                                       \n";

	// Twarze graczy
	cout << setw(85) << "  |            .----.            .----.                |\n";
	cout << setw(85) << "|           /      \\          /      \\               |\n";
	cout << setw(85) << "  |          |   O  O |        | O  O   |              |\n";
	cout << setw(85) << "|           \\   ||  /         \\  ||  /               |\n";
	cout << setw(85) << "  |              '--'             '--'                 |\n";

	// Puste przestrzenie w �rodku
	cout << setw(85) << "  |                                                    |\n";
	cout << setw(85) << "  |                                                    |\n";

	// St� gry
	cout << setw(85) << "|         \\___________/------\\___________/           |\n";
	cout << setw(85) << "  |            ||                    ||                |\n";
	cout << setw(85) << "  |            ||                    ||                |\n";
	cout << setw(85) << "  |            ||                    ||                |\n";
	cout << endl;



};

void gameWon() {
	//napis ,,Milionerzy"
	napis();

	cout << endl << endl << endl;

	//wy�wietlenie u�miechni�tej twarzy - gracz wygra�
	cout << setw(75) << "        ##########         " << endl;
	cout << setw(75) << "      ##          ##       " << endl;
	cout << setw(75) << "     #    .----.    #      " << endl;
	cout << setw(75) << "    #    /      \\    #    " << endl;
	cout << setw(75) << "   #     | O  O |     #    " << endl;
	cout << setw(75) << "   #     \\  ||  /     #    " << endl;
	cout << setw(75) << "    #      '--'      #     " << endl;
	cout << setw(75) << "     #              #      " << endl;
	cout << setw(75) << "      ##          ##       " << endl;
	cout << setw(75) << "        ##########         " << endl;
	cout << endl;
	cout << endl << endl;
}

void gameLost() {
	cout << endl << endl << endl;

	//napis ,,Milionerzy"
	napis();

	cout << endl;

	//Wy�wietlenie smutnej twarzy - gracz przegra�
	cout << setw(75) << "        ##########         " << endl;
	cout << setw(75) << "      ##          ##       " << endl;
	cout << setw(75) << "     #    .----.    #      " << endl;
	cout << setw(75) << "    #    /      \\    #     " << endl;
	cout << setw(75) << "   #     | O  O |     #    " << endl;
	cout << setw(75) << "   #     \\  ||  /     #    " << endl;
	cout << setw(75) << "    #      ,--,      #     " << endl;
	cout << setw(75) << "     #              #      " << endl;
	cout << setw(75) << "      ##          ##       " << endl;
	cout << setw(75) << "        ##########         " << endl;
	cout << endl << endl;
}