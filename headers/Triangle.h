#pragma once
#include "stdafx.h"
#include "Point3D.h"


class Triangle
{
public:
    Triangle();
    Triangle(int inV1, int inV2, int inV3);
    ~Triangle();

    const int v1() const;
    const int v2() const;
    const int v3() const;
   

private:
    int mV1;
    int mV2;
    int mV3;
    };