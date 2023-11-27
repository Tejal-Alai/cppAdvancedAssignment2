#pragma once
 
class Point3D
{
public:
    Point3D(double inX, double inY, double inZ);
    ~Point3D();

    double x();
    double y();
    double z();

    void set_x(double x);
    void set_y(double y);
    void set_z(double z);

private:
    double mX;
    double mY;
    double mZ;
};