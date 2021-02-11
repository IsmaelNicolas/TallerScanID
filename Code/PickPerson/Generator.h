#pragma once

#include "QrCode.hpp"
#include <iostream>

using qrcodegen::QrCode;
using namespace std;

class Generator
{

public:
	void makeQR(const char*);
private:
	void printQR(const QrCode&);

};

