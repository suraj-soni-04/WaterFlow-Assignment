# Waterflow_Generator

## Overview

This project aims to find the path of water flow on a given terrain represented by an STL file. The algorithm identifies the highest point on the terrain and traces the path along the steepest descent from that point, simulating the flow of water.

## Approach

### Identifying the Highest Point:
- The program scans the terrain data to find the point with the highest elevation in the Z-axis as the z-axis represents the height of the terrain.

### Path Finding Algorithm:
- The algorithm starts from the highest point and iteratively identifies the neighboring points with the steepest descent.
- It calculates the slope between each adjacent pair of points to determine the direction of water flow.
- It also considers that the next point should not be above the previous point.
- The path is traced until a point is reached where the elevation is lower than the previous point, indicating the end of the path.

### Data Structures Used:
- Point3d: Represents a point in three-dimensional space.
- Triangulation: Represents a triangle formed by three points.
- 
## How to Use

### Input:
Provide the STL file of the terrain.

### Execution:
Run the main program, which will execute the path-finding algorithm.

### Output:
The program will output the path of water flow as a series of points or coordinates.

### File Structure : 
This repository contains multiple C++ files for a water flow simulation project, including a path finding algorithm, utility classes, OpenGL visualization, and file reading functionality. Below is a brief summary of each file:

### findPath.cpp

- This file contains the implementation of a path-finding algorithm to simulate water flow on a terrain represented by a triangulated mesh.
- It defines a class `Findpath` with methods to find the next point in the water flow path and generate the complete path.
- Dependencies on `Triangulation` and `Point3D` classes are assumed.

### MathUtility.cpp

- Implements utility functions for mathematical calculations related to slope and finding the highest and lowest points in a triangulated mesh.
- Includes functions like `slope`, `findHighestPoint`, and `findLowestPoint`.

### OpenGLWindow.cpp

- Implements an OpenGL window for visualizing the terrain and water flow path.
- Handles initialization of OpenGL shaders, loading terrain data, and rendering the terrain and water flow path.
- Provides mouse and wheel event handlers for interaction with the visualization.

### Point3D.cpp

- Defines a class `Point3D` representing a point in three-dimensional space.
- Includes methods for getting and setting coordinates and operator overloading for comparison.

### Reader.cpp

- Implements a file reader class `Reader` to read triangulated mesh data from an STL file.
- Parses the STL file to extract vertex and triangle information and populates the `Triangulation` class.

### Triangle.cpp

- Defines a class `Triangle` representing a triangle formed by three vertices.
- Includes methods to access vertex indices.

### Triangulation.cpp

- Defines a class `Triangulation` representing a collection of triangles and unique points.
- Provides methods to access and manipulate the triangle and point data.

### Visualizer.cpp

- Implements a Qt-based visualizer `Visualizer` for displaying the OpenGL window and setting up UI elements like menus and toolbars.
- Uses an instance of `OpenGLWindow` as the central widget for visualization.

## Dependencies

This project requires a compatible environment for running C++ code.
Ensure that all necessary dependencies are installed and properly configured.
