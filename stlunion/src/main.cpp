#include <iostream>
#include <vector>
#include "..\header\reader.h"
#include "..\header\triangle.h"
#include "..\header\triangulation.h"
#include "..\header\writer.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader reader("cube1.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);


    // std::cout<<triangles.size()<<std::endl;

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
}