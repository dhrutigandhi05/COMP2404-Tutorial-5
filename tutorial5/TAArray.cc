#include <iostream>
#include <string>

#include "TAArray.h"

using namespace std;

TAArray::TAArray() {
    textAreas = new TextArea*[MAX_COMPONENTS];
    size = 0;
}

TAArray::~TAArray() {
    for (int i=0; i < size; i++) {
        delete textAreas[i];
    }

    delete[] textAreas;
}

bool TAArray::add(TextArea* ta) {
    if (size >= MAX_COMPONENTS) {
        return false;
    }

    textAreas[size] = ta;
    size++;
    return true;
}

bool TAArray::add(TextArea* ta, int index) {
    if (index < 0 || index > size || size >= MAX_COMPONENTS) {
        return false;
    }

    for (int i = size; i > index; i--) {
        textAreas[i] = textAreas[i - 1];
    }

    textAreas[index] = ta;
    size++;
    return true;
}

int TAArray::getSize() const {
    return size;
}

TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= size) {
        return nullptr;
    }

    return textAreas[index];
}

TextArea* TAArray::remove(int index) {
    if (index < 0 || index >= size) {
        return nullptr;
    }

    TextArea* removed = textAreas[index];

    for (int i = index; i < size - 1; i++) {
        textAreas[i] = textAreas[i + 1];
    }

    textAreas[size - 1] = nullptr;
    size--;
    return removed;
}

TextArea* TAArray::get(const string& id) const {
    for (int i=0; i < size; i++) {
        if (textAreas[i]->getId() == id) {
            return textAreas[i];
        }
    }

    return nullptr;
}

TextArea* TAArray::remove(const string& id) {
    for (int i = 0; i < size; i++) {
        if (textAreas[i]->getId() == id) {
            return remove(i);
        }
    }

    return nullptr;
}