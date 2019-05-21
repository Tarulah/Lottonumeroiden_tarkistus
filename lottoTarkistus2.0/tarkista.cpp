int tarkista(int vakioRivi[], int oikeaRivi[], int koko, int koko2, int oikein){

	oikein = 0;

	for (int j = 0; j < koko; j++){
		for (int k = 0; k < koko2; k++){

			if (oikeaRivi[k] == vakioRivi[j]){

				oikein++;
			}
		}
	}
	return oikein;
}