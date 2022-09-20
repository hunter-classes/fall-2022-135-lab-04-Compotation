#include "taskfunctions.h"
#include <iostream>

std::string box(int width, int height) {
    std::string line(width, '*');
    line += "\n";
    std::string lines;
    for (int i = 0; i < height; i++) {
        lines += line;
    }
    return "Shape:\n" + lines;
}
