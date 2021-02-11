#include "Generator.h"

void Generator::makeQR(const char* strings) {

	const QrCode::Ecc correctionLvl = QrCode::Ecc::MEDIUM;
	const QrCode qr = QrCode::encodeText(strings, correctionLvl);
			
}

void Generator::printQR(const QrCode& qr) {

	int borde = 3;

	for (int i = -borde; i < qr.getSize() + borde; i++) {
		for (int j = -borde; j < qr.getSize() + borde; j++) {
			int pixel = (qr.getModule(j, i)) ? 32 : 219;
			cout << (char)pixel << (char)pixel;
		}
		cout << endl;
	}
	cout << endl;

}