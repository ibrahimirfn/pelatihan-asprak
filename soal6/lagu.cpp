#include "lagu.h"
#include "stdio.h"
#include <sstream>
#include <iomanip>

Lagu::Lagu(std::string judul, std::string penyanyi, std::string album, int durasi_menit, int durasi_detik) {
	this->judul = judul;
	this->penyanyi = penyanyi;
	this->album = album;
	// buatkan algoritma untuk menggabungkan durasi_menit dan durasi_detik
	// misal durasi_menit = 3 dan durasi_detik = 39, maka durasi = "03:39"
	std::ostringstream durasi_stream;
	durasi_stream << std::setw(2) << std::setfill('0') << durasi_menit << ":" << std::setw(2) << std::setfill('0') << durasi_detik;
    this->durasi = durasi_stream.str();
}

void Lagu::play() {
	std::cout << "Sedang memutar lagu: " << this->judul << "(" << this->album << ")" <<"\n"
						<< "oleh: " << this->penyanyi << "\n"
						<< "durasi: " << this->durasi << "\n";
}
