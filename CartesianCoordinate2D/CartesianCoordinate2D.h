//
//  CartesianCoordinate2D.h
//  CartesianCoordinate2D
//
//  Created by Aniket Sedhai on 6/22/24.
//

#ifndef CartesianCoordinate2D_h
#define CartesianCoordinate2D_h

#include <iostream>

class CartesianCoordinate2D
{
public:
    //Constructor
    CartesianCoordinate2D();
    
    //Copy constructor
    CartesianCoordinate2D(const CartesianCoordinate2D& rhs);
    
    CartesianCoordinate2D(double x, double y);
    
    double GetX(void) const;
    
    double GetY(void) const;
    
    void SetX(double x);
    
    void SetY(double y);
    
    double get_point_distance_from_origin(void) const;
    
    int get_quadrant(void) const;
    
    CartesianCoordinate2D& operator =(const CartesianCoordinate2D& rhs);
    
    CartesianCoordinate2D operator -(const CartesianCoordinate2D& rhs) const;
    
    CartesianCoordinate2D& operator -=(const CartesianCoordinate2D& rhs);
    
    friend std::ostream& operator <<(std::ostream& ostr, const CartesianCoordinate2D& rhs);
    
    bool operator >(const CartesianCoordinate2D& rhs) const;
    
private:
    double x;
    double y;
};

#endif /* CartesianCoordinate2D_h */
