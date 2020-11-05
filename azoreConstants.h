/****************************************************************************
 *
 * AZORE constants
 *
 * Proprietary software product of Pointwise, Inc.
 * Copyright (c) 1995-2020 Pointwise, Inc.
 * All rights reserved.
 *
 ***************************************************************************/

#ifndef _AZORECONSTANTS_H_
#define _AZORECONSTANTS_H_

enum SectionId {
    AZORE_CELLS = 12,
    AZORE_FACES = 13,
    AZORE_NODES = 10,
    AZORE_ZONE = 45,             // region where a BC is defined
    AZORE_COMMENT = 0,
    AZORE_HEADER = 1,
    AZORE_DIMENSION = 2,
    AZORE_PERIODIC_SHADOW = 18,
    AZORE_INTERIOR = 2,          // interior face
};

enum CellType {
    AZORE_CELL_TRI = 1,
    AZORE_CELL_QUAD = 3,
    AZORE_CELL_TET = 2,
    AZORE_CELL_WEDGE = 6,
    AZORE_CELL_HEX = 4,
    AZORE_CELL_PYR = 5,
    AZORE_CELL_MIXED = 0,
    AZORE_CELL_OTHER = 7,
};

enum FaceType {
    AZORE_FACE_BAR = 2,
    AZORE_FACE_TRI = 3,
    AZORE_FACE_QUAD = 4,
    AZORE_FACE_MIXED = 0,
    AZORE_FACE_OTHER = 5,
};

#endif

/****************************************************************************
*
* DISCLAIMER:
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, POINTWISE DISCLAIMS
* ALL WARRANTIES, EITHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED
* TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
* PURPOSE, WITH REGARD TO THIS SCRIPT. TO THE MAXIMUM EXTENT PERMITTED
* BY APPLICABLE LAW, IN NO EVENT SHALL POINTWISE BE LIABLE TO ANY PARTY
* FOR ANY SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES
* WHATSOEVER (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE
* USE OF OR INABILITY TO USE THIS SCRIPT EVEN IF POINTWISE HAS BEEN
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGES AND REGARDLESS OF THE
* FAULT OR NEGLIGENCE OF POINTWISE.
*
***************************************************************************/
