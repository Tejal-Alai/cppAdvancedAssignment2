#pragma once
#include <vector>
#include <string>
#include "..\header\triangle.h"
#include "..\header\point3d.h"

class Reader {
public:
    Reader(std::string filePath);
    ~Reader();

    void getTriangles(std::vector<Triangle>& triangles);

private:
    std::string mFilePath;
};


