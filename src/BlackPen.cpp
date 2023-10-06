#include "BlackPen.h"

#ifndef PI
#define PI           3.14159265358979323846  /* pi */
#endif

BlackPen::BlackPen()
{

}

void BlackPen::draw()
{
    // Create a "circle" face. More like a 20 sided polygon.

    Point center = {610, 188};
    double radius = 5;


    int precision = 5;
    Point circle[360 / precision];
    // double
    int counter = 0;
    for(int r = -45; r < 360 - 45; r += precision) // 15deg precision.
    {
        double rad = (PI * r) / 180.0;
        circle[counter] = {center.x + cos(rad) * radius, center.y + sin(rad) * radius};
        std::cout << "CIRCLE" << circle[counter].x << ' '  << circle[counter].y << '\n';
        counter++;
    }

    center = {619, 199};
    Point circle2[360 / precision];
    // double
    counter = 0;
    for(int r = -45; r < 360 - 45; r += precision) // 15deg precision.
    {
        double rad = (PI * r) / 180.0;
        circle2[counter] = {center.x + cos(rad) * radius, center.y + sin(rad) * radius};
        counter++;
    }

    AnchorFace top = AnchorFace(circle, 360 / precision);
    top.setColor(76, 69, 61);
    AnchorFace bottom = AnchorFace(circle2, 360 / precision);
    bottom.setColor(145,135,125);
    MultiPolygon pen = MultiPolygon(&top, &bottom);
    Face** walls = pen.getColorFaces();
    for(int x = 0; x < pen.getColorFacesNum(); x++)
    {
        float grad = Window::mapValue((float)x, 0.0f, (float)pen.getColorFacesNum(), 1.0f, 0.0f);
        float color[3];
        Window::mixColor(color, grad, 33,29,22,182,172,160);
        walls[x]->setColor((uint8_t)color[0],(uint8_t)color[1], (uint8_t)color[2]);
    }

    pen.draw();



    glFlush();
}