#pragma once
#include <vector>
#include <iostream>
#include "..\header\point3d.h"
#include "..\header\triangle.h"
#include "..\header\triangulation.h"

class BBox3D
{
public:
    BBox3D(std::vector<Triangle> triangles);
    ~BBox3D();


private:
    void calculateBBox(std::vector<Triangle> triangles);
    void compareAndUpdate(Point3D refP, Point3D& min, Point3D& max);

private:
    Point3D mMin;
    Point3D mMax;
    Point3D mCenter;
};


