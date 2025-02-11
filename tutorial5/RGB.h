#ifndef RGB_H
#define RGB_H

#include "defs.h"

class RGB {
    private:
        int r;
        int g;
        int b;

    public:
        RGB(int red, int green, int blue);
        RGB();

        int getR() const;
        int getG() const;
        int getB() const;
        void setR(int red);
        void setG(int green);
        void setB(int blue);

        void print() const;

        static RGB WHITE();
        static RGB BLACK();
        static RGB RED();
        static RGB GREEN();
        static RGB BLUE();
};

#endif