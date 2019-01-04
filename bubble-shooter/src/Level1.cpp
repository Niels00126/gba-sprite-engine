//
// Created by 11401165 on 21/12/2018.
//

#include "Level1.h"
#include "Level2.h"


#include <cstdlib>
#include <iostream>
#include <ctime>

void Level1::atStartGame() {

    ballen.push_back(createBall(BALLMIDDEL,RIGHT,UP,30,20));
    ballen.push_back(createBall(BALLKLEIN,LEFT,UP,40,100));
    ballen.push_back(createBall(BALLGROOT,LEFT,UP,130,60));

 }

void Level1::load() {
    backgroundPalette = std::unique_ptr<BackgroundPaletteManager>(new BackgroundPaletteManager(background_tiles_spongebobPal, sizeof(background_tiles_spongebobPal)));

    loadAlways();

    bg = std::unique_ptr<Background>(new Background(1, background_tiles_spongebobTiles, sizeof(background_tiles_spongebobTiles), map_spongebob_normal, sizeof(map_spongebob_normal)));
    bg2 = std::unique_ptr<Background>(new Background(1, background_tiles_spongebobTiles, sizeof(background_tiles_spongebobTiles), map_spongebob_blink, sizeof(map_spongebob_blink)));
    bg->setMap(map_spongebob_blink);
    bg.get()->useMapScreenBlock(16);
}

void Level1::tick(u16 keys) {

    tickAlways(keys);
    if(ballen.empty()) {
        if(!engine->isTransitioning()) {
            bullets.clear();
            TextStream::instance() << "entered: starting next scene";
            engine->transitionIntoScene(new Level2(engine,score), new FadeOutScene(2));
        }
    }
}