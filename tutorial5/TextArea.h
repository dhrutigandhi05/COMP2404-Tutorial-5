#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <X11/Xlib.h>
#include "RGB.h"
#include "defs.h"

using namespace std;

class TextArea {
    private:
        Rectangle dimensions;
        string text;
        string id;
        RGB fill;
        RGB border;

    public:
        TextArea(int x, int y, int width, int height, const string& id, const string& label);
        TextArea(const Rectangle& rectangle, const string& id, const string& label);
        TextArea();
        TextArea(const TextArea& copied);

        int getX() const;
        int getY() const;
        int getWidth() const;
        int getHeight() const;
        string getText() const;
        string getId() const;
        RGB getFill() const;
        RGB getBorder() const;
        Rectangle getDimensions() const;
        void setX(int x);
        void setY(int y);
        void setWidth(int width);
        void setHeight(int height);
        void setText(const string& text);
        void setId(const string& id);
        void setFill(const RGB& fill);
        void setBorder(const RGB& border);
        void setDimensions(const Rectangle& rectangle);

        void draw(Display *display, Window win, GC gc, int x, int y) const;
        bool overlaps(const TextArea& ta) const;
        void print() const;
};

#endif