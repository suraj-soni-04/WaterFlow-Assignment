#include "stdafx.h"
#include "Triangulation.h"
#include<map>
#include<vector>
#include<iostream>


Triangulation::Triangulation()
{

}
Triangulation::~Triangulation()
{

}

vector<Triangle>& Triangulation::triangles()
{
    return mTriangles;
}

vector<Point3D>& Triangulation::uniquePoints()
{
    return mUniquePoints;
}
