//
// Created by 11401165 on 21/12/2018.
//

#include "Level2.h"
#include "Level1.h"


void Level2::load() {
    //backgroundPalette = std::unique_ptr<BackgroundPaletteManager>(new BackgroundPaletteManager(background_tiles_spongebobPal, sizeof(background_tiles_spongebobPal)));
    backgroundPalette = std::unique_ptr<BackgroundPaletteManager>(new BackgroundPaletteManager(bg_palette, sizeof(bg_palette)));
    load_always();

    //bg = std::unique_ptr<Background>(new Background(1, background_tiles_spongebobTiles, sizeof(background_tiles_spongebobTiles), map_spongebob, sizeof(map_spongebob)));
    bg = std::unique_ptr<Background>(new Background(1, background_data, sizeof(background_data), map, sizeof(map)));
    bg.get()->useMapScreenBlock(16);


}

void Level2::tick(u16 keys) {

    /*if(ballen.empty()) {
        if(!engine->isTransitioning()) {
            TextStream::instance() << "entered: starting next scene";
            engine->transitionIntoScene(new Level2(engine), new FadeOutScene(2));
        }
    }*/


    tick_always(keys);



    if(Game < StartGame){

        ballen.push_back(createBall(BALLMIDDEL,1,-1,30,60));
        ballen.push_back(createBall(BALLGROOT,1,-1,50,90));
        ballen.push_back(createBall(BALLGROOT,1,-1,70,100));
        TextStream::instance().setText(std::string("Score: ")+ std::to_string(score), 1, 4);
        TextStream::instance().setText(std::string("Aantal ballen: ")+ std::to_string(ballen.size()), 6, 0);
        TextStream::instance().setText(std::string("Aantal bullets: ")+ std::to_string(bullets.size()), 7, 0);
        Game++;
    }

    if(ballen.empty()) {
        if(!engine->isTransitioning()) {
            bullets.clear();
            TextStream::instance() << "entered: starting next scene";
            engine->transitionIntoScene(new Level1(engine), new FadeOutScene(2));
        }
    }


}