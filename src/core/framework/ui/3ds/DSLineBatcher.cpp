//
//  DSLineBatcher.cpp
//  gowengamedev-framework
//
//  Created by Stephen Gowen on 8/25/15.
//  Copyright (c) 2015 Gowen Game Dev. All rights reserved.
//

#define VERTICES_PER_LINE 2

#include "DSLineBatcher.h"
#include "macros.h"
#include "Line.h"
#include "Vector2D.h"

DSLineBatcher::DSLineBatcher() : LineBatcher()
{
    m_iNumLines = 0;
}

void DSLineBatcher::beginBatch()
{
//    OGLESManager->m_colorVertices.clear();
    m_iNumLines = 0;
}

void DSLineBatcher::endBatch()
{
    if (m_iNumLines > 0)
    {
//        OGLESManager->prepareForGeometryRendering();
//        
//        glDrawArrays(GL_LINES, 0, VERTICES_PER_LINE * m_iNumLines);
//        
//        OGLESManager->finishGeometryRendering();
    }
}

void DSLineBatcher::renderLine(float originX, float originY, float endX, float endY, Color &color)
{
//    OGLESManager->addVertexCoordinate(originX, originY, 0, color.red, color.green, color.blue, color.alpha);
//    OGLESManager->addVertexCoordinate(endX, endY, 0, color.red, color.green, color.blue, color.alpha);
    
    m_iNumLines++;
}