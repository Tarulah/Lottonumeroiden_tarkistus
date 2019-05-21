#include <iostream>
#include <string>
#include "lotto.h"

int main(){

	int vakioRivi1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int vakioRivi2[] = { 2, 6, 10, 14, 18, 22, 24 };
	int vakioRivi3[] = { 3, 5, 6, 16, 15, 24, 32 };
	int tyoRivi[8];

	int oikeaRivi[7];
	int varaNumero[3];

	const int koko7 = 7;
	const int koko8 = 8;
	const int kokoVaraNumero = 3;

	int NumeroitaOikein1 = 0;
	int NumeroitaOikein2 = 0;
	int NumeroitaOikein3 = 0;
	int NumeroitaOikeinTyo = 0;

	int varanumeroitaOikein1 = 0;
	int varanumeroitaOikein2 = 0;
	int varanumeroitaOikein3 = 0;
	int varanumeroitaOikeinTyo = 0;

	lue_oikea_rivi(tyoRivi, koko8, "Syota tyonumerot yksi numero kerrallaan: ");

	lue_oikea_rivi(oikeaRivi, koko7, "Syota oikea rivi yksi numero kerrallaan: ");
	lue_oikea_rivi(varaNumero, kokoVaraNumero, "Syota varanumerot yksi kerrallaan: ");

	NumeroitaOikein1 = tarkista(vakioRivi1, oikeaRivi, koko7, koko7, NumeroitaOikein1);
	NumeroitaOikein2 = tarkista(vakioRivi2, oikeaRivi, koko7, koko7, NumeroitaOikein2);
	NumeroitaOikein3 = tarkista(vakioRivi3, oikeaRivi, koko7, koko7, NumeroitaOikein3);
	NumeroitaOikeinTyo = tarkista(tyoRivi, oikeaRivi, koko8, koko7, NumeroitaOikeinTyo);

	varanumeroitaOikein1 = tarkista(vakioRivi1, varaNumero, koko7, kokoVaraNumero, NumeroitaOikein1);
	varanumeroitaOikein2 = tarkista(vakioRivi2, varaNumero, koko7, kokoVaraNumero, NumeroitaOikein2);
	varanumeroitaOikein3 = tarkista(vakioRivi3, varaNumero, koko7, kokoVaraNumero, NumeroitaOikein3);
	varanumeroitaOikeinTyo = tarkista(tyoRivi, varaNumero, koko8, kokoVaraNumero, NumeroitaOikeinTyo);

	//Puhtaasti kosmeettinen syy
	std::cout << "\n";
	tulosta(NumeroitaOikein1, "Numeroita oikein ensimmaisella kupongilla: ");
	tulosta(varanumeroitaOikein1, "Varanumeroita oikein ensimmaisella kupongilla: ");
	std::cout << "\n";
	tulosta(NumeroitaOikein2, "Numeroita oikein toisella kupongilla: ");
	tulosta(varanumeroitaOikein2, "Varanumeroita oikein toisella kupongilla: ");
	std::cout << "\n";
	tulosta(NumeroitaOikein3, "Numeroita oikein kolmannella kupongilla: ");
	tulosta(varanumeroitaOikein3, "Varanumeroita oikein kolmannella kupongilla: ");
	std::cout << "\n";
	tulosta(NumeroitaOikeinTyo, "Numeroita oikein tyokupongilla: ");
	tulosta(varanumeroitaOikeinTyo, "Varanumeroita oikein tyokupongilla: ");
	std::cout << "\n";

	while (1) {

	}

	return 0;
}