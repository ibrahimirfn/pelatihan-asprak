#include "lagu.h"
#include "stdio.h"

Lagu::Lagu(std::string judul, std::string penyanyi, std::string album, int durasi_menit, int durasi_detik) {
	this->penyanyi = penyanyi;
	this->album = album;
	// buatkan algoritma untuk menggabungkan durasi_menit dan durasi_detik
	// misal durasi_menit = 3 dan durasi_detik = 39, maka durasi = "03:39"
	this->durasi = "03.39";
}

void Lagu::play() {
	std::cout << "Sedang memutar lagu: " << this->judul << "(" << this->album << ")" <<"\n"
						<< "oleh: " << this->penyanyi << "\n"
						<< "durasi: " << this->durasi << "\n";
}
