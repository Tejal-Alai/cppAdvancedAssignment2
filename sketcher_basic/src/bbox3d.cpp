#include "..\header\bbox3d.h"
#include "..\header\triangle.h"
#include <cfloat>

BBox3D::BBox3D(std::vector<Triangle> triangles)
    : mMin(0, 0, 0),
      mMax(0, 0, 0),
      mCenter(0, 0, 0)
{
    calculateBBox(triangles);
}

BBox3D::~BBox3D()
{
}

void BBox3D::calculateBBox(std::vector<Triangle> triangles)
{

   mMax = Point3D(DBL_MIN,DBL_MIN,DBL_MIN);
   mMin = Point3D(DBL_MAX,DBL_MAX,DBL_MAX);

    for (Triangle triangle : triangles)
    {
        Point3D p1 = triangle.p1();
        Point3D p2 = triangle.p2();
        Point3D p3 = triangle.p3();

      compareAndUpdate(p1, mMin, mMax);
      compareAndUpdate(p2, mMin, mMax);
      compareAndUpdate(p3, mMin, mMax);

    }
       mCenter = Point3D((mMin.x()+mMax.x())/2, (mMin.y()+mMax.y())/2, (mMin.z()+mMax.z())/2);
   std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
   std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
   std::cout<<mCenter.x()<<" "<<mCenter.y()<<" "<<mCenter.z()<<std::endl;
}
void BBox3D::compareAndUpdate(Point3D pointToCompare, Point3D& min, Point3D& max)
{
      if(pointToCompare.x()>max.x())
          max.set_x(pointToCompare.x());

      if(pointToCompare.y()>max.y())
          max.set_y(pointToCompare.y());

      if(pointToCompare.z()>max.z())
          max.set_z(pointToCompare.z());

      if(pointToCompare.x()<min.x())
          min.set_x(pointToCompare.x());

      if(pointToCompare.y()<min.y())
          min.set_y(pointToCompare.y());

      if(pointToCompare.z()<min.z())
          min.set_z(pointToCompare.z());
}


