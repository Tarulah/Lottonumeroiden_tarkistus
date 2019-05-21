#include <string>
#include <iostream>


void lue_oikea_rivi(int* oikeaRivi, int koko, std::string prompt){

	for (int i = 0; i < koko; i++){
		std::cout << prompt;
		std::cin >> oikeaRivi[i];
	}
}