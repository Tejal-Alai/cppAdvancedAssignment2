#pragma once
#include "..\header\reader.h"
#include <vector>

class Writer
{
public:
    Writer();
    ~Writer();

    void write(std::string filePath ,std::vector<Triangle>& triangles);

};