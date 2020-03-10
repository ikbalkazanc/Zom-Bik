#include "node.h"


dugum::dugum() {
	dal = new dugum*[29];
	for (int i = 0; i < 29; i++) {
		dal[i] = NULL;
	}
	harf = '*';
}

void agac::mastermind(dugum*d, string s, int ipucu) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) 	mastermind(d->dal[i], s, ipucu);
	}
	if (d->kelimeler[0] != '\0') {
		int sayac = 0;
		bool denet;
		string ss;
		for (int k = 0; d->kelimeler[k] != '\0' && d->kelimeler[k] != ' '; k++) {
			denet = true;
			for (int z = k - 1; z >= 0; z--) {
				if (d->kelimeler[k] == d->kelimeler[z]) {
					denet = false;
					break;
				}
			}
			if (denet) ss += d->kelimeler[k];
		}
		for (int i = 0; ss[i] != '\0'; i++) {
			for (int j = 0; s[j] != '\0'; j++) {
				if (ss[i] == s[j]) sayac++;
			}
		}
		if (sayac != ipucu) d->kelimeler = "";
	}
}
void agac::ekle() {
	ifstream dosya;
	dosya.open("soz.txt");
	string kelime, sirali;
	while (dosya >> kelime) {
		sirali = sirala(kelime);
		yerlestir(kok, sirali, kelime, 0);
	}
	dosya.close();
}
string agac::sirala(string s) {
	char temp;
	for (int i = 0; s[i] != '\0'; i++) {
		for (int j = i + 1; s[j] != '\0'; j++) {
			if (s[i] > s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	return s;
}
agac::agac() {
	kok = new dugum;
	kok->harf = '\0';
	total = 0;
}
void agac::yerlestir(dugum* d, string s, string kelime, int id)
{
	int uzunluk = s.length();
	for (int i = id; i < uzunluk; i++) {
		if (d->dal[0] == NULL) {
			d->dal[0] = new dugum;
			d->dal[0]->harf = s[i];
			yerlestir(d->dal[0], s, kelime, i + 1);
			return;
		}
		else {
			int j = 0;
			for (j = 0; j < 29 && d->dal[j] != NULL; j++) {
				if (d->dal[j]->harf == s[i]) {
					yerlestir(d->dal[j], s, kelime, i + 1);
					return;
				}
			}
			d->dal[j] = new dugum;
			d->dal[j]->harf = s[i];
			yerlestir(d->dal[j], s, kelime, i + 1);
			return;
		}
	}
	if (d->kelimeler[0] == '\0') d->kelimeler += kelime;
	else {
		d->kelimeler += ' ';
		d->kelimeler += kelime;
	}
}
void agac::gezinme(dugum* d) {
	string s;
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) gezinme(d->dal[i]);
	}
	if (d->kelimeler[0] != '\0') {
		for (int j = 0; d->kelimeler[j] != '\0'; j++) {
			if (d->kelimeler[j] == ' ') {
				if (kelime[0] == '\0') {
					kelime = s;
					silinecek = d;
				}
				else {
					if (kelime.length() <= s.length()) {
						kelime = s;
						silinecek = d;
					}
				}
				s = "";
				total++;
			}
			else s += d->kelimeler[j];
		}
		total++;
		if (kelime[0] == '\0') {
			kelime = s;
			silinecek = d;
		}
		else {
			if (kelime.length() <= s.length()) {
				kelime = s;
				silinecek = d;
			}
		}
		
	}
}
void agac::sil(dugum* d, char c) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) {
			if (d->dal[i]->harf == c) d->dal[i] = NULL;
		}
	}
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) sil(d->dal[i], c);
	}
}
void agac::kesin_icermeyen(dugum * d, char c) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) kesin_icermeyen(d->dal[i], c);
	}
	if (d->kelimeler[0] != '\0') {
		int j;
		for (j = 0; d->kelimeler[j] != '\0'; j++) {
			if (d->kelimeler[j] == c) break;
		}
		if (d->kelimeler[j] == '\0') d->kelimeler = "";
	}
}
void agac::birlikte_olamiyacak(dugum * d, string s, int mode = 0) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) {
			birlikte_olamiyacak(d->dal[i], s, mode);
		}
	}
	if (d->kelimeler[0] != '\0') {
		int test = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			for (int j = 0; d->kelimeler[j] != '\0'; j++) {
				if (d->kelimeler[j] == s[i]) {
					test++;
					break;
				}
			}
		}
		if (mode) {
			int uzunluk = s.length();
			if (test == uzunluk) {
				d->kelimeler = "";
			}
		}
		else {
			if (test != 1) d->kelimeler = "";
		}
	}
}
void agac::kelime_analiz(string kelime, int ipucu) {
	string var, olabilir, yok, t5, t6, t7, t8, t9;;
	string temp, temp2, temp3, temp4, tekrar1, tekrar2;
	char c;
	int adet = 1, denet = 1, ipucu2, deger = 0, tut;
	int harf = 0, sayac = 0, fazla = 0, tc = 0, kom = 0, count = 0;

	for (int i = 0; kelime[i] != '\0'; i++) {
		for (int j = 0; tekrar1[j] != '\0'; j++) {
			if (kelime[i] == tekrar1[j]) denet = 0;
		}
		if (denet) {
			for (int j = i + 1; kelime[j] != '\0'; j++) {
				if (kelime[j] == kelime[i]) adet++;
			}
			harf += adet;
			tekrar1 += to_string(adet);
			tekrar1 += kelime[i];
			adet = 1;
		}
		denet = 1;
	}
	for (int i = 0; tekrar1[i] != '\0'; i += 2) {
		c = tekrar1[i + 1];
		deger = tekrar1[i] - '0';
		for (int j = i + 2; tekrar1[j] != '\0'; j += 2) {
			if (deger < tekrar1[j] - '0') {
				tekrar1[i] = tekrar1[j];
				tut = tekrar1[j];
				tekrar1[j] = deger + '0';
				tekrar1[i + 1] = tekrar1[j + 1];
				tekrar1[j + 1] = c;
				deger = tut - '0';
			}
		}
	}
	for (int i = 0; tekrar1[i] != '\0'; i += 2) {
		for (int j = 0; kesin[j] != '\0'; j++) {
			if (tekrar1[i + 1] == kesin[j]) {
				sayac += tekrar1[i] - '0';
				denet = 0;
				break;
			}
		}
		if (denet) {
			tekrar2 += tekrar1[i];
			tekrar2 += tekrar1[i + 1];
		}
		denet = 1;
	}
	ipucu2 = ipucu - sayac;
	fazla = harf - ipucu2 - sayac;
	if (ipucu2 < 0) {
		for (int i = 0; tekrar2[i] != '\0'; i += 2) {
			yok += tekrar2[i + 1];
		}
		tekrar2 = "";
	}
	if (fazla == 0) {
		for (int i = 0; tekrar2[i] != '\0'; i += 2) {
			var += tekrar2[i + 1];
		}
		tekrar2 = "";
	}
	for (int i = 0; tekrar2[i] != '\0'; i += 2) {
		if (tekrar2[i] - '0' - fazla > 0) {
			var += tekrar2[i + 1];
			ipucu2 -= tekrar2[i] - '0';
		}
		else if (tekrar2[i] - '0' > ipucu2) {
			yok += tekrar2[i + 1];
		}
		else if (tekrar2[i] - '0' == ipucu2) {
			olabilir += tekrar2[i + 1];
			olabilir += " ";
		}
		else if (tekrar2[i] - '0' < ipucu2) {
			temp += tekrar2[i + 1];
			tc = tekrar2[i] - '0';
			for (int j = i + 2; j < tekrar2.length(); j += 2) {
				kom += tekrar2[j] - '0';
				c = tekrar2[j + 1];
				denet = 1;
				for (int q = 0; var[q] != '\0'; q++) {
					if (c == var[q]) {
						denet = 0;
					}
				}
				if (!denet) {
					kom -= tekrar2[j] - '0';
					continue;
				}
				if (kom + tc == ipucu2) {
					temp4 += temp;
					temp4 += temp2;
					temp4 += c;
					for (int z = 0; olabilir[z] != '\0'; z++) {
						if (olabilir[z] != ' ') temp3 += olabilir[z];
						else {
							if (temp3 == temp4) {
								temp4 = "";
								break;
							}
							else {
								temp3 = "";
							}
						}
					}
					if (temp4[0] != '\0') {
						olabilir += temp4;
						olabilir += " ";
						temp4 = "";
					}
					kom -= tekrar2[j] - '0';
				}
				else if (kom + tc > ipucu2) {
					kom -= tekrar2[j] - '0';
				}
				else {
					temp2 += c;
				}
				if (j + 2 == tekrar2.length()) {
					count++;
					j = i + count * 2;
					temp2 = "";
					kom = 0;
				}
			}
			temp = "";
			temp2 = "";
			kom = 0;
			count = 0;
		}
	}
	adet = 0;
	for (int i = 0; olabilir[i] != '\0'; i++) {
		if (olabilir[i] == ' ') adet++;
	}
	if (adet == 1) {
		for (int i = 0; olabilir[i] != '\0'; i++) {
			var += olabilir[i];
		}
		olabilir = "";
	}
	if (var[0] != '\0' && var[var.length() - 1] == ' ') {
		var[var.length() - 1] = '\0';
	}




	//harf ýþýklandýrma 
	for (int i = 0; yok[i] != '\0'; i++) {
		sil(kok, yok[i]);
		kesiny += yok[i];
		//yok[i]=p mesela kýrmýzý
	}
	for (int i = 0; var[i] != '\0'; i++) {
		kesin += var[i];
		kesin_icermeyen(kok, var[i]);
		//var[i]=p mesela yeþil
	}




	for (int i = 0; olabilir[i] != '\0'; i++) {
		denet = true;
		if (olabilir[i] == ' ') continue;
		for (int z = i - 1; z >= 0; z--) {
			if (olabilir[i] == olabilir[z]) {
				denet = false;
				break;
			}
		}
		if (denet) t5 += olabilir[i];
	}
	if (t5[0] != '\0') {
		if (ipucu2 == 1) birlikte_olamiyacak(kok, t5, 0);
		else birlikte_olamiyacak(kok, t5, 1);
	}
	adet = 0;
	denet = true;
	for (int i = 0; olabilir[i] != '\0'; i++) {
		if (olabilir[i] == ' ') {
			if (adet != 1) {
				denet = false;
				break;
			}
			else adet = 0;
			continue;
		}
		adet++;
	}
	if (denet && olabilir[0] != '\0') {
		if (kombinasyonlar[0] != '\0' && olabilir[0] != '\0') {
			kombinasyonlar += olabilir;
		}
		else kombinasyonlar += olabilir;
		if (kombinasyonlar[kombinasyonlar.length() - 1] == ' ') {
			kombinasyonlar[kombinasyonlar.length() - 1] = '*';
		}
	}
	t5 = "";
	adet = 0;
	for (int i = 0; kombinasyonlar[i] != '\0'; i++) {
		if (kombinasyonlar[i] == '*') {
			if (t7.length() != 0 && t7[t7.length() - 1] != '*') t8 += '*';
			continue;
		}
		t5 += kombinasyonlar[i];
		if (kombinasyonlar[i + 1] == '*' || kombinasyonlar[i + 1] == '\0') {
			for (int j = 0; t5[j] != '\0'; j++) {
				if (t5[j] == ' ') {
					t8 += t5[j];
					continue;
				}
				t6 += t5[j];
				if (t5[j + 1] == ' ' || t5[j + 1] == '\0') {
					for (int k = 0; kesin[k] != '\0'; k++) {
						if (kesin[k] == t6[0]) {
							for (int j = 0; t5[j] != '\0'; j++) {

								//harf renklendirme
								if (t5[j] != t6[0] && t5[j] != ' ') {
									sil(kok, t5[j]);
									kesiny += t5[j];
									//t5[j] = p mesela kýrmýzý
								}


							}
							t6 = "";
							adet = 1;
							break;
						}
					}
					if (adet) {
						adet = 0;
						t6 = "";
						t8 = "";
						break;
					}
					t8 += t6;
					t6 = "";
				}
			}
			t7 += t8;
			t8 = "";
			t5 = "";
		}
	}
	t7 += t8;
	kombinasyonlar = t7;
	adet = 0;
	t5 = t6 = t7 = t8 = "";
	for (int i = 0; kombinasyonlar[i] != '\0'; i++) {
		if (kombinasyonlar[i] == '*') {
			if (t7.length() != 0 && t7[t7.length() - 1] != '*') t8 += '*';
			continue;
		}
		t5 += kombinasyonlar[i];
		if (kombinasyonlar[i + 1] == '*' || kombinasyonlar[i + 1] == '\0') {
			for (int j = 0; t5[j] != '\0'; j++) {
				if (t5[j] == ' ') {
					t8 += t5[j];
					continue;
				}
				t6 += t5[j];
				if (t5[j + 1] == ' ' || t5[j + 1] == '\0') {
					for (int k = 0; yok[k] != '\0'; k++) {
						if (yok[k] == t6[0]) {
							for (int j = 0; t5[j] != '\0'; j++) {
								if (t5[j] != t6[0] && t5[j] != ' ') {
									t9 += t5[j];
								}
							}


							//harf renklendirme
							if (t9.length() == 1) {
								kesin_icermeyen(kok, t9[0]);
								kesin += t9[0];
								//t9[0]=p mesela yeþil yap
								t9 = "";
							}




							else {
								t6 = t9;
								t9 = "";
								for (int j = 0; t6[j] != '\0'; j++) {
									if (t6[j + 1] != '\0') {
										t9 += t6[j];
										t9 += ' ';
									}
									else {
										t9 += t6[j];
									}
								}
							}
							t8 = "*";
							t6 = "";
							adet = 1;
							break;
						}
					}
					t8 += t6;
					t6 = "";
					if (adet) {
						adet = 0;
						break;
					}
				}
			}
			t7 += t8;
			t8 = "";
			t5 = "";
		}
	}
	t7 += t8;
	kombinasyonlar = t7;
}
void agac::birlikte_olamiyacak2(dugum *d, string s) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) {
			birlikte_olamiyacak(d->dal[i], s);
		}
	}
	if (d->kelimeler[0] != '\0') {
		int test = 0;
		for (int i = 0; s[i] != '\0'; i++) {
			for (int j = 0; d->kelimeler[j] != '\0'; j++) {
				if (d->kelimeler[j] == s[i]) test++;
			}
		}
		if (test != 1) d->kelimeler = "";
	}
}
void agac::mastermind2(dugum*d, string s, int ipucu) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) {
			mastermind2(d->dal[i], s, ipucu);
		}
	}
	if (d->kelimeler[0] != '\0') {
		int sayac = 0;
		for (int i = 0; d->kelimeler[i] != '\0' && d->kelimeler[i] != ' '; i++) {
			for (int j = 0; s[j] != '\0'; j++) {
				if (d->kelimeler[i] == s[j]) sayac++;
			}
		}
		if (sayac != ipucu) d->kelimeler = "";
	}
}//eklendi
void agac::adetli(dugum * d, char c, int adet) {
	for (int i = 0; i < 29; i++) {
		if (d->dal[i] != NULL) {
			kesin_icermeyen(d->dal[i], c);
		}
	}
	if (d->kelimeler[0] != '\0') {
		int j, count = 0;
		for (j = 0; d->kelimeler[j] != '\0'; j++) {
			if (d->kelimeler[j] == c) count++;
		}
		if (count != adet) d->kelimeler = "";
	}
}
void agac::kelime_analiz2(string kelime, int ipucu) {
	string var, olabilir, yok, tekrar1, tekrar2;
	char c;
	int  denet = 1, ipucu2, deger = 0, tut;
	int harf = 0, sayac = 0, fazla = 0, adet = 1;
	for (int i = 0; kelime[i] != '\0'; i++) {
		for (int j = 0; tekrar1[j] != '\0'; j++) {
			if (kelime[i] == tekrar1[j]) denet = 0;
		}
		if (denet) {
			for (int j = i + 1; kelime[j] != '\0'; j++) {
				if (kelime[j] == kelime[i]) adet++;
			}
			harf += adet;
			tekrar1 += to_string(adet);
			tekrar1 += kelime[i];
			adet = 1;
		}
		denet = 1;
	}
	for (int i = 0; tekrar1[i] != '\0'; i += 2) {
		c = tekrar1[i + 1];
		deger = tekrar1[i] - '0';
		for (int j = i + 2; tekrar1[j] != '\0'; j += 2) {
			if (deger < tekrar1[j] - '0') {
				tekrar1[i] = tekrar1[j];
				tut = tekrar1[j];
				tekrar1[j] = deger + '0';
				tekrar1[i + 1] = tekrar1[j + 1];
				tekrar1[j + 1] = c;
				deger = tut - '0';
			}
		}
	}
	for (int i = 0; tekrar1[i] != '\0'; i += 2) {
		for (int j = 0; kesin[j] != '\0'; j++) {
			if (tekrar1[i + 1] == kesin[j]) {
				sayac += (tekrar1[i] - '0')*(adetler[j] - '0');
				denet = 0;
				break;
			}
		}
		if (denet) {
			tekrar2 += tekrar1[i];
			tekrar2 += tekrar1[i + 1];
		}
		denet = 1;
	}
	ipucu2 = ipucu - sayac;
	fazla = harf - ipucu2 - sayac;
	if (fazla == 0 && tekrar2.length() == 2) {
		for (int i = 0; tekrar2[i] != '\0'; i += 2) {
			var += tekrar2[i + 1];
			adetler += to_string(ipucu2 / (tekrar2[i] - '0'));
			adetli(kok, tekrar2[i + 1], ipucu2 / (tekrar2[i] - '0'));
		}
		tekrar2 = "";
	}
	for (int i = 0; tekrar2[i] != '\0'; i += 2) {
		if (tekrar2[i] - '0' > ipucu2) yok += tekrar2[i + 1];
		else olabilir += tekrar2[i + 1];
	}
	for (int i = 0; yok[i] != '\0'; i++) {
		sil(kok, yok[i]);
		kesiny += yok[i];
	}
	for (int i = 0; var[i] != '\0'; i++) {
		kesin += var[i];
	}
	if (olabilir.length() == 1) {
		for (int i = 0; tekrar2[i] != '\0'; i += 2) {
			if (tekrar2[i + 1] == olabilir[0]) {
				kesin += olabilir[0];
				adetler += to_string(ipucu2 / (tekrar2[i] - '0'));
				adetli(kok, tekrar2[i + 1], ipucu2 / (tekrar2[i] - '0'));
				olabilir = "";
				break;
			}
		}
	}
	if (olabilir[0] != '\0') {
		if (ipucu2 == 1) {
			birlikte_olamiyacak2(kok, olabilir);
		}
	}
}



