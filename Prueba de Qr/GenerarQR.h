
#include <iostream>
#include "QrCode.cpp"

using namespace std;
using qrcodegen::QrCode;

class GeneraQR
{
public:
    GeneraQR();
    void crear_QR(const char*);
protected:
private:
    void imprimir_QR(const QrCode&);
};
