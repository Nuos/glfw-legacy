//========================================================================
// GLFW - An OpenGL framework
// File:        amigaos_joystick.c
// Platforms:   AmigaOS, MorphOS
// API version: 2.4
// Author:      Marcus Geelnard (marcus.geelnard at home.se)
// WWW:         http://glfw.sourceforge.net
//------------------------------------------------------------------------
// Copyright (c) 2002-2003 Marcus Geelnard
//
// GLFW is provided "as-is", without any express or implied warranty,
// without even the implied warranty of fitness for a particular purpose.
// In no event will the author be held liable for any damage araising from
// the use of GLFW.
//
// Permission is granted to anyone to use GLFW for any purpose, including
// commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. You must not claim that you wrote GLFW.
// 2. If you modify any parts of GLFW, it must be clearly stated which
//    modifications have been made, and that those modifications are not
//    the work of the author of GLFW.
// 3. If you use GLFW in a product, an acknowledgment in the product
//    documentation would be appreciated, but is not required.
// 4. This notice may not be removed or altered from any source
//    distribution of GLFW.
//
// Marcus Geelnard
// marcus.geelnard at home.se
//------------------------------------------------------------------------
// $Id: amigaos_joystick.c,v 1.2 2003-02-02 22:20:54 marcus256 Exp $
//========================================================================

#include "internal.h"


//************************************************************************
//****               Platform implementation functions                ****
//************************************************************************

//========================================================================
// _glfwPlatformGetJoystickParam() - Determine joystick capabilities
//========================================================================

int _glfwPlatformGetJoystickParam( int joy, int param )
{
    switch( param )
    {
    case GLFW_PRESENT:
        return GL_FALSE;

    case GLFW_AXES:
        return 0;

    case GLFW_BUTTONS:
        return 0;

    default:
        break;
    }

    return 0;
}


//========================================================================
// _glfwPlatformGetJoystickPos() - Get joystick axis positions
//========================================================================

int _glfwPlatformGetJoystickPos( int joy, float *pos, int numaxes )
{
    return 0;
}


//========================================================================
// _glfwPlatformGetJoystickButtons() - Get joystick button states
//========================================================================

int _glfwPlatformGetJoystickButtons( int joy, unsigned char *buttons,
    int numbuttons )
{
    return 0;
}
