#include "..\header\point3d.h"

Point3D::Point3D(double inX, double inY, double inZ)
:mX(0),
mY(0),
mZ(0)
{
    mX = inX;
    mY = inY;
    mZ = inZ;
}

Point3D::~Point3D()
{
}

double Point3D::x()
{
    return mX;
}

double Point3D::y()
{
    return mY;
}

double Point3D::z()
{
    return mZ;
}

void Point3D :: set_x(double x){
     mX=x;
}

void Point3D :: set_y(double y){
    mY=y;
    
}

void Point3D :: set_z(double z){
    mZ=z;
}