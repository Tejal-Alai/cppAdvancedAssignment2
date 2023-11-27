#include "..\header\triangulation.h"
#include "..\header\triangle.h"

Triangulation::Triangulation(std::vector<Triangle> triangles)
:mBBox3D(triangles)
{
    mTriangles=triangles;
}

Triangulation::~Triangulation()
{
}

std::vector<Triangle> Triangulation::getTriangles(){
    return mTriangles;
}