#include <X11/Xlib.h>
#include <string>
#include <iostream>
#include <iomanip>

#include "TextArea.h"

using namespace std;

TextArea::TextArea(int x, int y, int width, int height, const string& id, const string& label) {
    this->dimensions = {x, y, width, height};
    this->id = id;
    this->text = label;
    this->fill = RGB::WHITE(); 
    this->border = RGB::BLACK(); 
}

TextArea::TextArea(const Rectangle& rectangle, const string& id, const string& label) {
    this->dimensions = rectangle;
    this->id = id;
    this->text = label;
    this->fill = RGB::WHITE(); 
    this->border = RGB::BLACK(); 
}

TextArea::TextArea() {
    this->dimensions = {0, 0, 0, 0};
    this->id = "default id";
    this->text = "";
    this->fill = RGB::WHITE();
    this->border = RGB::BLACK();
}

TextArea::TextArea(const TextArea& copied) {
    this->dimensions = copied.dimensions;
    this->id = copied.id;
    this->text = "DUPLICATE";
    this->fill = copied.fill;
    this->border = copied.border;
}

int TextArea::getX() const {
    return dimensions.x;
}

int TextArea::getY() const {
    return dimensions.y;
}

int TextArea::getWidth() const {
    return dimensions.width;
}

int TextArea::getHeight() const {
    return dimensions.height;
}

string TextArea::getText() const {
    return text;
}

string TextArea::getId() const {
    return id;
}

RGB TextArea::getFill() const {
    return fill;
}

RGB TextArea::getBorder() const {
    return border;
}

Rectangle TextArea::getDimensions() const {
    return dimensions;
}

void TextArea::setX(int x) {
    dimensions.x = x;
}

void TextArea::setY(int y) {
    dimensions.y = y;
}

void TextArea::setWidth(int width) {
    dimensions.width = width;
}

void TextArea::setHeight(int height) {
    dimensions.height = height;
}

void TextArea::setText(const string& text) {
    this->text = text;
}

void TextArea::setId(const string& id) {
    this->id = id;
}

void TextArea::setFill(const RGB& fill) {
    this->fill = fill;
}

void TextArea::setBorder(const RGB& border) {
    this->border = border;
}

void TextArea::setDimensions(const Rectangle& rectangle) {
    dimensions = rectangle;
}

void TextArea::draw(Display *display, Window win, GC gc, int x, int y) const {
    cout<<"Placeholder (not implementing for the tutorial)"<<endl;
}

bool TextArea::overlaps(const TextArea& ta) const{
    return this->dimensions.overlaps(ta.getDimensions());
}

void TextArea::print() const{
    cout<<"TextArea id:        "<<id<<endl;
    cout<<"Preferred location: "<<dimensions.x<<", "<<dimensions.y<<endl;
    cout<<"Size:               "<<dimensions.width<<", "<<dimensions.height<<endl;
    cout<<"Text:               "<<text<<endl;
}