#include "antrian.h"
#include "stdio.h"

void Antrian::play() {
	if (!antrian_lagu.empty()){
		antrian_lagu[indeks_lagu_sekarang].play();
	}
	else{
		std::cout << "Antrian kosong.\n";
	}
}

void Antrian::tambahLagu(Lagu lagu_baru) {
	this->antrian_lagu.push_back(lagu_baru);
}

void Antrian::next() {
	if (!antrian_lagu.empty()){
		indeks_lagu_sekarang =(indeks_lagu_sekarang + 1) % antrian_lagu.size();
		play();
	}
	
}

void Antrian::prev() {
	if (!antrian_lagu.empty()) {
        indeks_lagu_sekarang = (indeks_lagu_sekarang - 1 + antrian_lagu.size()) % antrian_lagu.size();
        play();
    }
}
