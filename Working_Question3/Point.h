#ifndef WORKING_Q3_POINT_H
#define WORKING_Q3_POINT_H

#include <iostream>
#include <random>
#include <vector>
#include <map>

using namespace std;

struct Point {
    double x, y, z;
};

class PointCloud {
public:
    PointCloud(int n);

    Point initPoint();
    bool zGT5(Point p);
    void printPoints();
    void printMask();
    void printMap();

private:
    int numPoints;
    vector<Point> points;
    vector<int> mask;
    map<int, Point> mapPoints;
};


#endif //WORKING_Q3_POINT_H
