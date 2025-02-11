#include <iostream>
#include <iomanip>
#include "RGB.h"

using namespace std;

RGB::RGB(int red, int green, int blue) {
    setR(red);
    setG(green);
    setB(blue);
}

RGB::RGB() {
    this->r = 0;
    this->g = 0;
    this->b = 0;
}


int RGB::getR() const {
    return r;
}

int RGB::getG() const {
    return g;
}

int RGB::getB() const {
    return b;
}

void RGB::setR(int red) {
    if (red < 0 || red > 255) {
        cerr<<"Red value is out of range"<<endl;
        r = 0;
    } else {
        r = red;
    }
}

void RGB::setG(int green) {
    if (green < 0 || green > 255) {
        cerr<<"Green value is out of range"<<endl;
        g = 0;
    } else {
        g = green;
    }
}

void RGB::setB(int blue) {
    if (blue < 0 || blue > 255) {
        cerr<<"Blue value is out of range"<<endl;
        b = 0;
    } else {
        b = blue;
    }
}

void RGB::print() const {
    cout<<"RGB values ("<<r<<", "<<g<<", "<<b<<")"<<endl;
}

RGB RGB::WHITE() {
    return RGB(255, 255, 255);
}

RGB RGB::BLACK() {
    return RGB(0, 0, 0);
}

RGB RGB::RED() {
    return RGB(255, 0, 0);
}

RGB RGB::GREEN() {
    return RGB(0, 255, 0);
}

RGB RGB::BLUE() {
    return RGB(0, 0, 255);
}