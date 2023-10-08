/**
 * @file stickyNotes.h
 * @author Benjamin Carter, Josh Canode.
 * @brief HeaderFile for the stickyNotes class.
 * @version 0.1
 * @date 2023-10-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef stickyNotes_H
#define stickyNotes_H

#include "DisplayObject.h"
#include "Window.h"
#include <iostream>
#include "Polygon.h"
#include "MultiPolygon.h"

class stickyNotes: public DisplayObject
{
public:
    stickyNotes();
    void draw();
};  

#endif