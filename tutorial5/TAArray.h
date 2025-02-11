#ifndef TAARRAY_H
#define TAARRAY_H

#include <string>
#include "TextArea.h"
#include "defs.h"

using namespace std;

class TAArray {
    private:
        TextArea** textAreas;
        int size;

    public:
        TAArray();
        ~TAArray();

        bool add(TextArea* ta);
        bool add(TextArea* ta, int index);

        int getSize() const;
        TextArea* get(int index) const;
        TextArea* remove(int index);
        TextArea* get(const string& id) const;
        TextArea* remove(const string& id);
};

#endif