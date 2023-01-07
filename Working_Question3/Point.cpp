#include "Point.h"

PointCloud::PointCloud(int n) : numPoints(n) {
    points.resize(numPoints);
    for (int i = 0; i < points.size(); i++) {
        points[i] = initPoint();
    }

    mask.resize(numPoints);

    for (int i = 0; i < mask.size(); i++) {
        mask[i] = zGT5(points[i]);
    }

    for (int i = 0; i < mask.size(); i++) {
        if (mask[i] == 1) {
            mapPoints[i] = points[i];
        }
    }
}

Point PointCloud::initPoint() {
    Point p;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 10);

    p.x = dis(gen);
    p.y = dis(gen);
    p.z = dis(gen);

    return p;
}

bool PointCloud::zGT5(Point p) {
    return p.z > 5;
}

void PointCloud::printPoints() {
    cout << "Point vector:" << endl;
    for (int i = 0; i < points.size(); i++) {
        cout << "Point " << i << ": (" << points[i].x << ", " << points[i].y << ", " << points[i].z << ")" << endl;
    }
}

void PointCloud::printMask() {
    cout << endl << "Mask vector:" << endl;
    for (int i = 0; i < mask.size(); i++) {
        cout << mask[i] << " ";
    }
    cout << endl;
}

void PointCloud::printMap() {
    cout << endl << "Map:" << endl;
    for (map<int, Point>::iterator it = mapPoints.begin(); it != mapPoints.end(); it++) {
        cout << "Key: " << it->first << ", Point: (" << it->second.x << ", " << it->second.y << ", " << it->second.z << ")" << endl;
    }
}
