//
// Created by 11401165 on 29/11/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_SPRITES_FRONT_H
#define GBA_SPRITE_ENGINE_PROJECT_SPRITES_FRONT_H

const unsigned short man1632Tiles[256] __attribute__((aligned(4)))=
        {
                0x0000,0x0000,0x0000,0x0400,0x0000,0x0000,0x0000,0x0500,
                0x0000,0x0000,0x0000,0x0500,0x0000,0x0000,0x0000,0x0500,
                0x0000,0x0000,0x0000,0x0500,0x0000,0x0000,0x0000,0x0500,
                0x0000,0x0200,0x0202,0x0202,0x0200,0x0202,0x0202,0x0202,
                0x0004,0x0000,0x0000,0x0000,0x0005,0x0000,0x0000,0x0000,
                0x0005,0x0000,0x0000,0x0000,0x0005,0x0000,0x0000,0x0000,
                0x0005,0x0000,0x0000,0x0000,0x0005,0x0000,0x0000,0x0000,
                0x0202,0x0202,0x0002,0x0000,0x0202,0x0202,0x0202,0x0002,

                0x0202,0x0000,0x0000,0x0500,0x0002,0x0000,0x0000,0x0500,
                0x0002,0x0000,0x0000,0x0500,0x0000,0x0000,0x0000,0x0400,
                0x0000,0x0000,0x0000,0x0400,0x0000,0x0000,0x0000,0x0300,
                0x0000,0x0000,0x0300,0x0303,0x0000,0x0000,0x0303,0x0303,
                0x0005,0x0000,0x0000,0x0202,0x0005,0x0000,0x0000,0x0200,
                0x0005,0x0000,0x0000,0x0200,0x0004,0x0000,0x0000,0x0000,
                0x0004,0x0000,0x0000,0x0000,0x0003,0x0000,0x0000,0x0000,
                0x0303,0x0003,0x0000,0x0000,0x0303,0x0303,0x0000,0x0000,

                0x0000,0x0300,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,
                0x0000,0x0003,0x0000,0x0000,0x0000,0x0003,0x0100,0x0000,
                0x0000,0x0003,0x0000,0x0000,0x0000,0x0003,0x0000,0x0101,
                0x0000,0x0303,0x0303,0x0303,0x0000,0x0000,0x0000,0x0300,
                0x0303,0x0303,0x0003,0x0000,0x0303,0x0303,0x0303,0x0000,
                0x0000,0x0000,0x0300,0x0000,0x0000,0x0001,0x0300,0x0000,
                0x0000,0x0000,0x0300,0x0000,0x0101,0x0000,0x0300,0x0000,
                0x0303,0x0303,0x0303,0x0000,0x0003,0x0000,0x0000,0x0000,

                0x0000,0x0301,0x0303,0x0303,0x0000,0x0301,0x0303,0x0303,
                0x0000,0x0000,0x0000,0x0300,0x0000,0x0000,0x0000,0x0300,
                0x0000,0x0000,0x0000,0x0303,0x0000,0x0000,0x0300,0x0003,
                0x0000,0x0000,0x0303,0x0003,0x0000,0x0100,0x0101,0x0001,
                0x0303,0x0303,0x0031,0x0000,0x0303,0x0303,0x0031,0x0000,
                0x0003,0x0000,0x0000,0x0000,0x0003,0x0000,0x0000,0x0000,
                0x0303,0x0000,0x0000,0x0000,0x0300,0x0003,0x0000,0x0000,
                0x0300,0x0303,0x0000,0x0000,0x0100,0x0101,0x0001,0x0000,
        };



const unsigned short ball8Tiles[32] __attribute__((aligned(4)))=
        {
                0x0000,0x0101,0x0101,0x0000,0x0100,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
                0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0001,0x0000,0x0101,0x0101,0x0000,
        };




const unsigned short ball16Tiles[128] __attribute__((aligned(4)))=
        {
                0x0000,0x0000,0x0202,0x0202,0x0000,0x0202,0x0202,0x0202,
                0x0000,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0000,0x0000,0x0202,0x0202,0x0000,0x0000,
                0x0202,0x0202,0x0202,0x0000,0x0202,0x0202,0x0202,0x0000,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,

                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0000,0x0202,0x0202,0x0202,0x0000,0x0202,0x0202,0x0202,
                0x0000,0x0000,0x0202,0x0202,0x0000,0x0000,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,
                0x0202,0x0202,0x0202,0x0000,0x0202,0x0202,0x0202,0x0000,
                0x0202,0x0202,0x0000,0x0000,0x0202,0x0202,0x0000,0x0000,
        };






const unsigned short ball32Tiles[512] __attribute__((aligned(4)))=
        {
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0303,
                0x0000,0x0000,0x0000,0x0303,0x0000,0x0000,0x0303,0x0303,
                0x0000,0x0000,0x0303,0x0303,0x0000,0x0000,0x0303,0x0303,
                0x0000,0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0000,0x0000,0x0000,0x0000,0x0303,0x0000,0x0000,0x0000,
                0x0303,0x0000,0x0000,0x0000,0x0303,0x0303,0x0000,0x0000,
                0x0303,0x0303,0x0000,0x0000,0x0303,0x0303,0x0303,0x0000,
                0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,

                0x0000,0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,
                0x0000,0x0000,0x0303,0x0303,0x0000,0x0000,0x0303,0x0303,
                0x0000,0x0000,0x0000,0x0303,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,

                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0303,0x0000,
                0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,0x0000,
                0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0000,0x0000,
                0x0303,0x0303,0x0000,0x0000,0x0303,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };





const unsigned short ball32Pal[256] __attribute__((aligned(4)))=
        {
                0x0000,0x6507,0x107D,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };

const unsigned short bullet8Tiles[32] __attribute__((aligned(4)))=
        {
                0x0000,0x0606,0x0606,0x0000,0x0600,0x0506,0x0605,0x0006,
                0x0606,0x0505,0x0505,0x0606,0x0506,0x0505,0x0505,0x0605,
                0x0506,0x0505,0x0505,0x0605,0x0506,0x0505,0x0505,0x0605,
                0x0506,0x0505,0x0505,0x0605,0x0707,0x0707,0x0707,0x0707,
        };


const unsigned short man1616_v1Tiles[128] __attribute__((aligned(4)))=
        {
                0x0000,0x0300,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,
                0x0303,0x0303,0x0303,0x0303,0x0000,0x0101,0x0101,0x0101,
                0x0000,0x0001,0x0000,0x0000,0x0000,0x0001,0x0200,0x0000,
                0x0000,0x0001,0x0000,0x0000,0x0000,0x0001,0x0000,0x0202,
                0x0303,0x0303,0x0303,0x0000,0x0303,0x0303,0x0303,0x0000,
                0x0303,0x0303,0x0303,0x0000,0x0101,0x0101,0x0101,0x0000,
                0x0000,0x0000,0x0100,0x0000,0x0000,0x0002,0x0100,0x0000,
                0x0000,0x0000,0x0100,0x0000,0x0202,0x0000,0x0100,0x0000,

                0x0000,0x0101,0x0101,0x0101,0x0000,0x0000,0x0000,0x0100,
                0x0202,0x0102,0x0101,0x0101,0x0200,0x0102,0x0101,0x0101,
                0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0100,
                0x0000,0x0000,0x0000,0x0101,0x0000,0x0000,0x0202,0x0002,
                0x0101,0x0101,0x0101,0x0000,0x0001,0x0000,0x0000,0x0000,
                0x0101,0x0101,0x0201,0x0002,0x0101,0x0101,0x0201,0x0202,
                0x0001,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,0x0000,
                0x0101,0x0000,0x0000,0x0000,0x0200,0x0202,0x0000,0x0000,
        };



const unsigned short sharedPal[256] __attribute__((aligned(4)))=
        {              //groen  rood   blauw
                0x0000,0x2321,0x107D,0x6527,0x03DF,0x2D6B,0x29F7,0x07F8,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };

//}}BLOCK(ball32)


const unsigned short wallTiles[256] __attribute__((aligned(4)))=
        {
                0x0000,0x0000,0x0000,0x0000,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0000,0x0000,0x0000,0x0000,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,

                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,

                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,

                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0100,0x0101,0x0101,0x0101,
                0x0100,0x0101,0x0101,0x0101,0x0000,0x0000,0x0000,0x0000,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0101,0x0101,0x0101,0x0001,
                0x0101,0x0101,0x0101,0x0001,0x0000,0x0000,0x0000,0x0000,
        };

const unsigned short wallPal[256] __attribute__((aligned(4)))=
        {
                0x7AA0,0x07F8,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };


#endif //GBA_SPRITE_ENGINE_PROJECT_SPRITES_FRONT_H
