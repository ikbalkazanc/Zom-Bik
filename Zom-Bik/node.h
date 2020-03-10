#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <time.h>


using namespace std;



struct dugum {
	dugum** dal;
	char harf;
	string kelimeler;
	dugum();
};
struct agac {
	dugum* kok;
	void ekle();
	string kelime;
	int total;
	string kesin;
	string adetler;
	string kesiny;
	string kombinasyonlar;
	dugum* silinecek;
	agac();
	void yerlestir(dugum* d, string s, string kelime, int id);
	string sirala(string s);
	void gezinme(dugum*d);
	void sil(dugum* d, char c);
	void kesin_icermeyen(dugum* d, char c);
	void birlikte_olamiyacak(dugum* d, string s, int mode);
	void mastermind(dugum*d, string s, int ipucu);
	void kelime_analiz(string kelime, int ipucu);
	void kelime_analiz2(string kelime, int ipucu);
	void birlikte_olamiyacak2(dugum * d, string s);
	void mastermind2(dugum*d, string s, int ipucu);
	void adetli(dugum * d, char c, int adet);
	

	//void ana_fonk();
};

