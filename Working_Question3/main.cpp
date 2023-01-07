#include "Point.h"

int main() {
    PointCloud cloud(20);

    cloud.printPoints();
    cloud.printMask();
    cloud.printMap();

    return 0;
}