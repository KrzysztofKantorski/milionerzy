#include "data.h"  // Za�adowanie nag��wka, aby udost�pni� pytania, odpowiedzi oraz klucz

                                         
										//Tablice zawieraj�ce pytania, odpowiedzi oraz klucz: 


//Tablica zawieraj�ca pytania
string questions[71] = { 
						"Polskim odpowiednikiem ameryka�skiego baby shower jest:",
						"�miel�w i Chodzie� s�yn� z produkcji:",
						"Czego zakr�cane wieczko ma taneczn� nazw� ?",
						"Do sejmowej zamra�arki trafiaj�:",
						"Szejk pije szejka, czyli co:",
						"Komu w 1917 roku Matka Boska przekaza�a trzy tajemnice fatimskie?",
						"Czym by�a zielona ksi��eczka, kt�r� w 2001 roku zast�pi�a szaro-r�owa karta z poliw�glanu?",
						"Jaki ptak ma oczy osadzone frontalnie i otoczone promieni�cie u�o�onymi pi�rami?",
						"Gwiazdy, kt�re tworz� dyszel Wielkiego Wozu, s� jednocze�nie:",
						"Znajd� b��d.",
						"Tempura to panierowane i sma�one na g��bokim oleju ryby, krewetki, kalmary, ma��e. Sk�d w XVI wieku przyw�drowa�a do Japonii?",
						"Gdzie bambik zap�aci v-dolcami za skiny?",
						"Tr�jk�t Trzech Cesarzy, gdzie od 1846 roku zbiega�y si� granice trzech zabor�w, znajduje si� w pobli�u:",
						"Co wyr�nia�o �yj�ce w okresie od dewonu do kredy amonity?",
						"Kto w 1954 r. obj�� opiek� artystyczn� gda�ski teatr studencki Bim-Bom?",
						"Kt�ry �wie�y owoc zawiera najmniej wody w 100 gramach?",
						"Kto w maju 1848 r. wyst�pi� w Londynie przed kr�low� Wiktori�?",
						"Wyst�puj�cy w du�ej liczbie, w wielu formach i odmianach to s�ownikowe znaczenie wyrazu:",
						"Legenda g�osi, �e przyczyn ustanowienia przez Edwarda III najwy�szego brytyjskiego orderu nale�y upatrywa� w zgubionej na dworskim balu:",
						"W czym walcz� zawodnicy UFC?",
						"W angloj�zycznej korpomowie 'jestem poza biurem' to:",
						"Tr�jmorze to mi�dzynarodowa inicjatywa gospodarczo-polityczna, kt�ra skupia 13 pa�stw po�o�onych w pobli�u trzech m�rz: Adriatyckiego, Czarnego i...",
						"W 2023 r. jeden z rodzaj�w paj�k�w nazwano Abba na cze�� zespo�u, kt�ry przed laty wylansowa� przeb�j:",
						"Trzy wyra�enia dotycz� zam�cia, a jedno nie.",
						"'Halo, halo, Polskie Radio Warszawa, fale 480' - tymi s�owami Janina Sztompk�wna rozpocz�a pierwsz� regularn� emisj� Polskiego Radia. Kiedy?",
						"Kt�re strony herbu zgodnie z blazonowaniem nie s� tymi samymi stronami w rozumieniu patrz�cego na herb?",
						"O co 'grzecznie, ale stanowczo uprasza liczne zast�py bli�nich' Julian Tuwim?",
						"Ile cz�owiek ma ko�ci st�pu?",
						"Kt�ry z muzyk�w nie zagra� ani handlarza narkotyk�w, ani alfonsa, ani agenta Interpolu w serialu 'Policjanci z Miami' ? ",
						"Budowa uk�adu pokarmowego, kt�rego ze zwierz�t �wiadczy o tym, �e jest ono drapie�nikiem?",
						"Memiczny komentarz do sytuacji, kiedy kto� chce zrobi� co�, co jest uwa�ane za niemo�liwe lub lekkomy�lne, to:",
						"W kt�rym dokumencie po raz pierwszy pojawi� si� formalny zapis o sto�eczno�ci Warszawy?",
						"Z gry na jakim instrumencie s�ynie Czes�aw Mozil? ",
						"R�a�cow� tajemnic� chwalebn� nie jest:",
						"Kiedy rozpocz�o si� drugie tysi�clecie?",
						"Do czworonog�w, czyli tetrapod�w, nie zaliczamy...",
						"XVII-wieczna seria konflikt�w mi�dzy Lig� Katolick� a Uni� Protestanck� trwa�a:",
						"Kandydat na wysokie stanowisko cz�sto nie musi mie� odpowiednich kwalifikacji, o ile ma mocne:",
						"W kt�rej z wyp�at ukry� si� brytyjski grosz?",
						"Sygna��wka to tr�bka sygnalist�w. Gdzie?",
						"Imperium Ink�w rozci�ga�o si�:",
						"Bezpo�rednio po kt�rej z wojen powsta� UNICEF, �eby zapewni� �ywotno�� i opiek� zdrowotn� dla dzieci i matek?",
						"Konduita to prowadzenie si�:",
						"W filmie �Jak zabi� starsz� pani�� z 1955 r. pieni�dze z napadu kwintetu smyczkowego na furgonetk� skrywa futera� na:",
						"Kt�ry z gruczo��w wydziela sok trawienny?",
						"O czym jest piosenka �Prz��niczka� Czeczota i Moniuszki?",
						"Kt�re s�owa obs�uguj� frazeologicznie sytuacj� bez wyj�cia?",
						"Irina, Masza i Olga z dramatu Antoniego Czechowa z 1900 r. to:",
						"Z tralek sk�ada si�:",
						"Kt�ry z nich g��wn� rol� zagra� tylko w jednym filmie z serii o Jamesie Bondzie?",
						"Zwyczajowo nazywany jest agrestem.",
						"Kt�re to slangowe no pewnie?",
						"Kt�ry ptak dzieli nazw� z australijskimi butami z owczej sk�ry?",
						"Krzywy R�g to miasto w obwodzie dniepropertowskim, czyli:",
						"Inna nazwa tej gry to inteligencja.",
						"Je�li pokonujemy rzek� w br�d, to na pewno:",
						"Perykles, kt�ry �y� w V w. p.n.e. w Atenach, uwa�any jest za ojca:",
						"W jakim utworze Poeta m�wi do Gospodarza�(�) a tu pospolito�� skrzeczy, a tu pospolito�� t�oczy�?",
						"Koniczynka to klasyczny w�ze� typu WA, czyli w�ze�:",
						"Jakiej duszy nie ma, kiedy nikogo nie ma?",
						"Geolodzy dziel� ska�y na trzy podstawowe grupy. W tym podziale nie ma ska�:",
						"Kapn�� to uroni� kropl�, a kapn�� si�:",
						"Co nie jest prawd� o kluskach �l�skich?",
						"U Anglik�w out of the blue, a u nas:",
						"Co ma odziomek?",
						"Kto jest drugoplanowym bohaterem filmu Paolo Sorrentino �To by�a r�ka Boga� z 2021 roku?",
						"Kt�re to sikory?",
						"Laurazja to:",
						"Kt�ry turmalin zazwyczaj jest bezbarwny?",
						"Ile g��wnych p�r roku jest na sawannie?",
						"Kto w �Trzy po trzy� wspomina� taki oto napis na transparencie: �O Sasie, w dobrym czasie, drugi raz walisz, przez Kalisz�?",

};

 //Tablica zawieraj�ca odpowiedzi:
string options[71][4] = {
						{"A: bociankowe", "B: prysznicowe", "C: 500 +", "D: becikowe"},
						{"A: samolot�w", "B: leczniczych w�d", "C: wagon�w kolejowych","D: porcelany"},
						{"A: szkatu�ki", "B: puderniczki", "C: trumienki",  "D: s�oika"},
						{"A: temperamentni pos�owie", "B: skargi na marsza�ka sejmu", "C: projekty niekt�rych ustaw", "D: nachalni lobby�ci"},
						{"A: potr�jne espresso", "B: zielon� herbat�", "C: nap�j mleczno-owocowy", "D: wino gronowe"},
						{"A: skaza�com", "B: pastuszkom", "C: �o�nierzom", "D: biskupom"},
						{"A: ksi��eczk� oszcz�dno�ciow�", "B: dowodem osobistym", "C: prawem jazdy", "D: ksi��eczk� zdrowia"},
						{"A: brzeg�wka", "B: dym�wka", "C: p�omyk�wka", "D: bogatka"},
						{"A: ogonem Wielkiej Nied�wiedzicy", "B: kolcem Skorpiona", "C: szyj� �yrafy", "D: �ap� Lwa"},
						{"A: handlarz starzyzny", "B: handlarz narkotyk�w", "C: handlarz z�otem", "D: handlarz �ywym towarem"},
						{"A: z Holandii", "B: z Portugalii", "C: z Rosji", "D: z Chin"},
						{"A: w 'Fortnite'", "B: w 'Apex Legends'", "C: w 'PUBG'", "D: w 'Call of Duty'"},
						{"A: Gda�ska", "B: Szczecina", "C: Katowic", "D: Warszawy"},
						{"A: D�ugie pazury", "B: Spiralne muszle", "C: Kolorowe pi�ra", "D: P�etwy grzbietowe"},
						{"A: Adolf Dymsza", "B: Zbigniew Cybulski", "C: Jeremi Przybora", "D: Tadeusz �omnicki"},
						{"A: Ananas", "B: Daktyl", "C: �liwka", "D: Granat"},
						{"A: Artur Rubinstein", "B: Ignacy Paderewski", "C: Karol Szymanowski", "D: Fryderyk Chopin"},
						{"A: Rozliczony", "B: Rozliczaj�cy", "C: Rozliczeniowy", "D: Rozliczny"},
						{"A: fajce", "B: podwi�zce", "C: peruce", "D: sakiewce"},
						{"A: w kole", "B: w heksagonie", "C: w pentagonie", "D: w oktagonie"},
						{"A: UUU", "B: OOO", "C: EEE", "D: AAA"},
						{"A: Czerwonego", "B: Ba�tyckiego", "C: Kaspijskiego", "D: Norweskiego"},
						{"A: 'How Deep Is Your Love'", "B: 'Stairway to Heaven'", "C: 'Dancing Queen'", "D: 'Love Me Do'"},
						{"A: wyj�� za m��", "B: wyj�� za niego", "C: wyj�� za ni�", "D: wyda� si� za m��"},
						{"A: przed powstaniem styczniowym", "B: przed I wojn� �wiatow�", "C: przed II wojn� �wiatow�", "D: po II wojnie �wiatowej"},
						{"A: dolna i g�rna", "B: lewa i prawa", "C: tylna i przednia", "D: bierna i czynna"},
						{"A: '�eby bez przerwy nie plotkowali'", "B: 'o u�ywanie s��w odpowiednich'", "C: 'aby go w dup� poca�owali'", "D: 'o szanowanie pa�stw s�siednich'"},
						{"A: dwie", "B: cztery", "C: dwana�cie", "D: czterna�cie"},
						{"A: Frank Zappa", "B: Miles Davis", "C: Leonard Cohen", "D: Jimi Hendrix"},
						{"A: lamy", "B: koali", "C: pandy", "D: sarny"},
						{"A: 'podtrzymaj mnie na duchu'", "B: 'powstrzymaj si� od uwag'", "C: 'potrzymaj mi piwo'", "D: 'potrzymaj mi marynark�'"},
						{"A: W konstytucji z 1791 r.", "B: W konstytucji z 1921 r.", "C: W konstytucji z 1952 r.", "D: W konstytucji z 1997 r."},
						{"A: na kornecie", "B: na akordeonie", "C: na djembe", "D: na ksylofonie"},
						{"A: wniebowzi�cie Matki Bo�ej", "B: zmartwychwstanie Jezusa", "C: �mier� Jezusa na krzy�u", "D: zes�anie Ducha �wi�tego"},
						{"A: 1 stycznia 1000 roku", "B: 1 stycznia 1001 roku", "C: 1 stycznia 2000 roku", "D: 1 stycznia 2001 roku"},
						{"A: Gad�w", "B: P�az�w", "C: Ptak�w", "D: Owad�w"},
						{"A: 10 lat", "B: 30 lat", "C: 50 lat", "D: 100 lat"},
						{"A: �ydki", "B: kolana", "C: plecy", "D: r�ce"},
						{"A: w honorarium", "B: w wynagrodzeniu", "C: w poborach", "D: w pensji"},
						{"A: na wie�y mariackiej", "B: w my�listwie", "C: w korporacjach", "D: w polityce"},
						{"A: na p�nocy Ameryki P�nocnej", "B: na po�udniu Ameryki P�nocnej", "C: na wsch�d od Ameryki Po�udniowej", "D: na zachodzie Ameryki Po�udniowej"},
						{"A: po wojnie secesyjnej", "B: po I wojnie �wiatowej", "C: po II wojnie �wiatowej", "D: po wojnie indochi�skiej"},
						{"A: sportowych Au", "B: wszystkiego wsz�dzie i zawsze", "C: prowadnic", "D: ludzi, zw�aszcza podejrzane"},
						{"A: g�le", "B: fidel p�ock�", "C: viol� da gamba", "D: wiolonczel�"},
						{"A: trzustka", "B: szyszynka", "C: nadnercze", "D: grasica"},
						{"A: o prz�dzeniu we�ny", "B: o tkaniu tkaniny", "C: o dzianiu dzianiny", "D: o mi�o�ci i zdradzie"},
						{"A: sta� i chrz�ka�", "B: kuli� si� w kucki", "C: le�e� i kwicze�", "D: beka� i becze�"},
						{"A: babka, matka i c�rka", "B: babka i dwie wnuczki", "C: matka i dwie c�rki", "D: trzy siostry"},
						{"A: aria operowa", "B: balustrada", "C: marionetka", "D: centralka telefoniczna"},
						{"A: Sean Connery", "B: Roger Moore", "C: George Lazenby", "D: Pierce Brosnan"},
						{"A: porzeczka agrest", "B: malina agrest", "C: agrest je�yna", "D: agrest bor�wka"},
						{"A: no rejczel", "B: yes ros", "C: no fibi", "D: yes czendler"},
						{"A: ibis", "B: kakadu", "C: emu", "D: lora"},
						{"A: w Ukrainie", "B: na Bia�orusi", "C: na �otwie", "D: w Estonii"},
						{"A: k�ko i krzy�yk", "B: wisielec", "C: pa�stwa-miasta", "D: okr�ty"},
						{"A: nie pieszo", "B: wp�aw", "C: nie �odzi�", "D: z du�ym baga�em"},
						{"A: demokracji", "B: oligarchii", "C: monarchii", "D: tyranii"},
						{"A: w 'Weselu' Wyspia�skiego", "B: w 'Weselu' Smarzowskiego", "C: w '�lubie' Gombrowicza", "D: w '�onie modnej' Krasickiego"},
						{"A: �eglarski", "B: komunikacyjny", "C: radiowy", "D: ch�onny"},
						{"A: �ywej", "B: dusznej", "C: uduchowionej", "D: martwej"},
						{"A: osadowych", "B: magmowych", "C: metamorficznych", "D: oceanicznych"},
						{"A: wzi�� prysznic", "B: domy�li� si�", "C: napi� si� kapk�", "D: napi� si� kapk�"},
						{"A: s� gotowanych ziemniak�w", "B: maj� dziurk� na wylot", "C: s� okr�g�e", "D: maj� wg��bienie w centrum"},
						{"A: mie� czego� wy�ej uszu", "B: jak grom z jasnego nieba", "C: mie� r�k� do kwiat�w", "D: mi�dzy m�otem a kowad�em"},
						{"A: drzewo", "B: dom z werand�", "C: �agl�wk�", "D: piorunochron"},
						{ "A: Pele", "B: Lionel Messi", "C: Robert Lewandowski", "D: Diego Maradona" },
						{"A: zegary wie�owe", "B: zegarki nar�czne", "C: zegary z kuku�k�", "D: zegary astronomiczne"},
						{"A: miasto w Azji", "B: metropolia nad Laur�", "C: dawny kontynent", "D: boska �ona Gondwany"},
						{"A: achroit", "B: rubelit", "C: verdelit", "D: indigolit"},
						{"A: jedna", "B: dwie", "C: trzy", "D: cztery"},
						{"A: Miko�aj Rej", "B: Adam Mickiewicz", "C: Juliusz S�owacki", "D: Aleksander Fredro"},


};

//Tablica zawieraj�ca klucz odpowiedzi: 
string key[71] ={
						"A","D","D","C","C","B","B","D","A","A","B","A","C","B","B","B","D",
						"D","C","D","B","C","B","C","C","C","C","D","D","C","C","C","B","C","B",
						"D","B","C","D","B","D","C","D","D","A","D","C","D","B","C","A","A","C","A",
						"C","C","A","A","B","A","D","B","B","B","A","D","B","C","A","B","D" 
};
