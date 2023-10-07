#include "GreenPen.h"

#ifndef PI
#define PI           3.14159265358979323846  /* pi */
#endif

GreenPen::GreenPen()
{

}

void GreenPen::draw()
{
    // Create a "circle" face. More like a 20 sided polygon.

    Point center = {615, 328};
    double radiusX = 2;
    double radiusY = 5;

    int precision = 5;
    Point circle[360 / precision];
    // double
    int counter = 0;
    for(int r = 0; r < 360; r += precision) // 15deg precision.
    {
        double rad = (PI * r) / 180.0;
        circle[counter] = {
            center.x + radiusX * cos(rad),
            center.y + radiusY * sin(rad)
        };
        // 
        std::cout << "Ellipse" << circle[counter].x << ' '  << circle[counter].y << '\n';
        counter++;
    }
    radiusX = 2;
    radiusY = 5;
    center = {500, 325};
    Point circle2[360 / precision];
    // double
    counter = 0;
    for(int r = 0; r < 360; r += precision) // 15deg precision.
    {
        double rad = (PI * r) / 180.0;
        //circle2[counter] = {center.x + cos(rad) * radius, center.y + sin(rad) * radius};
        circle2[counter] = {
            center.x + radiusX * cos(rad),
            center.y + radiusY * sin(rad)
        };
        counter++;
    }

    AnchorFace top = AnchorFace(circle, 360 / precision);
    top.setColor(103, 163, 132);
    AnchorFace bottom = AnchorFace(circle2, 360 / precision);
    bottom.setColor(103, 163, 132);
    MultiPolygon pen = MultiPolygon(&top, &bottom);
    Face** walls = pen.getColorFaces();
    for(int x = 0; x < pen.getColorFacesNum(); x++)
    {
        float grad = Window::mapValue((float)x, 0.0f, (float)pen.getColorFacesNum(), 1.0f, 0.0f);
        float color[3];
        Window::mixColor(color, grad, 103, 163, 132,103, 163, 132);
        walls[x]->setColor((uint8_t)color[0],(uint8_t)color[1], (uint8_t)color[2]);
    }
    
    
    pen.draw();
    




    glFlush();
}


