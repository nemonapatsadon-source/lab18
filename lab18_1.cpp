#include<iostream>
#include<algorithm> // ต้อง include เพื่อใช้ max และ min
using namespace std;

struct Rect {
    double x, y, w, h;
};

double overlap(Rect r1, Rect r2) {

    double x_overlap = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x);
    double y_overlap = min(r1.y, r2.y) - max(r1.y - r1.h, r2.y - r2.h);

    if (x_overlap <= 0 || y_overlap <= 0) {
        return 0;
    }

    return x_overlap * y_overlap;
}

