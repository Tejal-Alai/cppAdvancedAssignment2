#pragma once
#include <vector>
#include "..\header\triangle.h"
#include "..\header\bbox3d.h"

class Triangulation
{

public:
    Triangulation(std::vector<Triangle> triangles);
    ~Triangulation();

    std::vector<Triangle> getTriangles();

private:
    std::vector<Triangle> mTriangles;
    BBox3D mBBox3D;
};


