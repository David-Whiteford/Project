#ifndef CUBE_H
#define CUBE_H

#include "libs/glew/glew.h"

// Model vertices
/*
		  (-1.0f, 1.0f, -1.0f)          (1.0f, 1.0f, -1.0f)
				  [7]                          [6]
				  #-----------------------------#
				 /|                            /|
				/ |                           / |
	  (-1.0f, 1.0f, 1.0f)           (1.0f, 1.0f, 1.0f)
		  [3] /                         [2] /	|
			 #-----------------------------#    |
			 |    |                        |    |
			 |    |                        |    |
			 |   [4]                       |   [5]
		  (-1.0f, -1.0f, -1.0f)         (1.0f, -1.0f, -1.0f)
			 |    #-----------------------------#
			 |   /                         |   /
			 |  /                          |  /
			 | /                           | /
			 |/                            |/
			 #-----------------------------#
			[0]                           [1]
	(-1.0f, -1.0f, 1.0f)         (1.0f, -1.0f, 1.0f)
*/

/// <summary>
/// Used for declaring arrays
/// </summary>
const int VERTICES_AMOUNT = 24;
const int INDICES_AMOUNT = 12;
const int COLOURS_AMOUNT = 24;

/// <summary>
/// Building vertex points
/// </summary>
static const GLfloat vertices[] =
{
	// Front face
	-1.00f, -1.00f,  1.00f,	// [0]	// ( 0)
	 1.00f, -1.00f,  1.00f,	// [1]	// ( 1)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 2)
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 3)

	// Top face
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 4)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 5)
	 1.00f,  1.00f, -1.00f,	// [6]	// ( 6)
	-1.00f,  1.00f, -1.00f,	// [7]	// ( 7)

	// Back face
	 1.00f, -1.00f, -1.00f,	// [5]	// ( 8)
	-1.00f, -1.00f, -1.00f, // [4]	// ( 9)
	-1.00f,  1.00f, -1.00f,	// [7]	// (10)
	 1.00f,  1.00f, -1.00f,	// [6]	// (11)

	// Bottom face
	-1.00f, -1.00f, -1.00f, // [4]	// (12)
	 1.00f, -1.00f, -1.00f, // [5]	// (13)
	 1.00f, -1.00f,  1.00f, // [1]	// (14)
	-1.00f, -1.00f,  1.00f, // [0]	// (15)

	// Left face
	-1.00f, -1.00f, -1.00f, // [4]	// (16)
	-1.00f, -1.00f,  1.00f, // [0]	// (17)
	-1.00f,  1.00f,  1.00f, // [3]	// (18)
	-1.00f,  1.00f, -1.00f, // [7]	// (19)

	// Right face
	 1.00f, -1.00f,  1.00f, // [1]	// (20)
	 1.00f, -1.00f, -1.00f, // [5]	// (21)
	 1.00f,  1.00f, -1.00f, // [6]	// (22)
	 1.00f,  1.00f,  1.00f, // [2]	// (23)
};

/// <summary>
/// Building colours
/// </summary>
static const GLfloat colours[] =
{
	// Front face
	0.894f, 0.286f, 0.682f, 1.0f, // [0] // (0)
	0.894f, 0.286f, 0.682f, 1.0f, // [1] // (1)
	0.894f, 0.286f, 0.682f, 1.0f, // [2] // (2)
	0.894f, 0.286f, 0.682f, 1.0f, // [3] // (3)

	// Top face
	1.0f, 0.623f, 0.866f, 1.0f, // [3]	// (4)
	1.0f, 0.623f, 0.866f, 1.0f, // [2]	// (5)
	1.0f, 0.623f, 0.866f, 1.0f, // [6]	// (6)
	1.0f, 0.623f, 0.866f, 1.0f, // [7]	// (7)

	// Back face
	1.0f, 0.623f, 0.866f, 1.0f, // [5]	// (8)
	1.0f, 0.623f, 0.866f, 1.0f, // [4]	// (9)
	1.0f, 0.623f, 0.866f, 1.0f, // [7]	// (10)
	1.0f, 0.623f, 0.866f, 1.0f, // [6]	// (11)

	// Bottom face
	0.894f, 0.286f, 0.682f, 1.0f, // [4] // (12)
	0.894f, 0.286f, 0.682f, 1.0f, // [5] // (13)
	0.894f, 0.286f, 0.682f, 1.0f, // [1] // (14)
	0.894f, 0.286f, 0.682f, 1.0f, // [0] // (15)

	// Left face
	1.0f, 0.443f, 0.807f, 1.0f, // [4]	// (16)
	1.0f, 0.443f, 0.807f, 1.0f, // [0]	// (17)
	1.0f, 0.443f, 0.807f, 1.0f, // [3]	// (18)
	1.0f, 0.443f, 0.807f, 1.0f, // [7]	// (19)

	// Right face
	1.0f, 0.443f, 0.807f, 1.0f, // [1]	// (20)
	1.0f, 0.443f, 0.807f, 1.0f, // [5]	// (21)
	1.0f, 0.443f, 0.807f, 1.0f, // [6]	// (22)
	1.0f, 0.443f, 0.807f, 1.0f, // [2]	// (23)
};

/// <summary>
/// This is the order in which to draw the building's vertex points
/// </summary>
static const GLuint indices[] =
{
	// Front face
	0, 1, 2,
	2, 3, 0,

	// Top face
	4, 5, 6,
	6, 7, 4,

	// Back face
	8, 9, 10,
	10, 11, 8,

	// Bottom face
	12, 13, 14,
	14, 15, 12,

	// Left face
	16, 17, 18,
	18, 19, 16,

	// Right face
	20, 21, 22,
	22, 23, 20
};

#endif // !CUBE_H