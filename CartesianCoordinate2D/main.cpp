//
//  main.cpp
//  CartesianCoordinate2D
//
//  Created by Aniket Sedhai on 6/22/24.
//

#include "CartesianCoordinate2D.h"

int main(void)
{
    CartesianCoordinate2D point_a;
        
    point_a.SetX(1.5);
    
    point_a.SetY(2.2);
    
    std::cout << "Cartesian coordinate of point A is: " << point_a << std::endl;
    
    //copy constructor
    CartesianCoordinate2D point_b(point_a);
        
    //copy assignment operator
    CartesianCoordinate2D point_c;
    
    //copying a to c
    point_c = point_a;
    
    std::cout << "Cartesian coordinate of point B is: " << point_b << std::endl;
    std::cout << "Cartesian coordinate of point C is: " << point_c << std::endl;
    
    //changing A's coordinate
    point_a.SetX(2.5);
    std::cout << "Updated A's coordinate to " << point_a << std::endl;
    
    std::cout << "Point A" << point_a << " is " << point_a.get_point_distance_from_origin() << " units away from the origin." << std::endl;
    
    std::cout << "Point B" << point_b << " is " << point_b.get_point_distance_from_origin() << " units away from the origin." << std::endl;

    std::cout << "Point C" << point_c << " is " << point_c.get_point_distance_from_origin() << " units away from the origin." << std::endl;
    
    //Comparing point A and B from the origin
    if (point_a > point_b)
        std::cout << "Point A is farther from origin than point B." << std::endl;
    else if (point_b > point_a)
        std::cout << "Point B is farther from origin than point A." << std::endl;
    else
        std::cout << "Point A and B are equally far from the origin." << std::endl;
    
    //Comparing point B and C from the origin
    if (point_c > point_b)
        std::cout << "Point C is farther from origin than point B." << std::endl;
    else if (point_b > point_c)
        std::cout << "Point B is farther from origin than point C." << std::endl;
    else
        std::cout << "Point B and C are equally far from the origin." << std::endl;
    
    //Changing the coordinates in B and C
    point_b.SetX(-3.5);
    point_c.SetX(-1.0);
    point_c.SetY(-2);
    
    std::cout << "Cartesian coordinate of point B is: " << point_b << std::endl;
    std::cout << "Cartesian coordinate of point C is: " << point_c << std::endl;
    
    
    //Creating a new point using substraction
    CartesianCoordinate2D point_d = point_c - point_b;
    
    //creating a fifth point
    CartesianCoordinate2D point_e(0.0, 2.2);
    
    std::cout << "Coordinate of point E is: " << point_e << std::endl;
    
    //using -= operator
    point_e -= point_b;
    std::cout << "Coordinate of point E after substracting point B is: " << point_e << std::endl;
    
    //printing quadrants for each point
    std::cout << "Point A" << point_a << " is in quadrant: " << point_a.get_quadrant() << std::endl;
    std::cout << "Point B" << point_b << " is in quadrant: " << point_b.get_quadrant() << std::endl;
    std::cout << "Point C" << point_c << " is in quadrant: " << point_c.get_quadrant() << std::endl;
    std::cout << "Point D" << point_d << " is in quadrant: " << point_d.get_quadrant() << std::endl;
    std::cout << "Point E" << point_e << " is in quadrant: " << point_e.get_quadrant() << std::endl;
    
    std::cout << "Point A's x-coordinate is: " << point_a.GetX() << std::endl;
    std::cout << "Point A's y-coordinate is: " << point_a.GetY() << std::endl;
    
    return 0;
}
