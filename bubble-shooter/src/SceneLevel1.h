//
// Created by 11401165 on 29/11/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_SCENELEVEL1_H
#define GBA_SPRITE_ENGINE_PROJECT_SCENELEVEL1_H

#include <libgba-sprite-engine/gba_engine.h>
#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include <libgba-sprite-engine/sprites/affine_sprite.h> // niet perse nodig // background
#include <libgba-sprite-engine/background/background.h> // background
#include <libgba-sprite-engine/effects/fade_out_scene.h>
#include <libgba-sprite-engine/background/text_stream.h>
#include <vector>
#include "Ball.h"

#define BALLKLEIN		 0
#define BALLMIDDEL		 1
#define BALLGROOT		 2

#define LEFT -1
#define RIGHT 1
#define UP -1
#define Down 1

#define StartGame 1
#include "sprites_front.h"
#include "background.h"
#include "Ball.h"



class SceneLevel1: public Scene {


public:
    int Game = 0;
    std::unique_ptr<SpriteBuilder<Sprite>> spriteBuilder;
    std::unique_ptr<Ball> createBall(int number, int dx, int dy,int posX, int posY);
    std::unique_ptr<Sprite> createBullet();
    void shoot();
    void bullet_offScreen();
    void check_bullet_hit_ball();
    void personHit();
    void ball_hit_person();
    void dead();
    void tick_always(u16 keys);
    void load_always();
    int score = 0;
    std:: unique_ptr<Sprite> BallBig;
    std:: unique_ptr<Sprite> BallMedium;
    std:: unique_ptr<Sprite> BallSmall;
    std:: unique_ptr<Sprite> Person;
    std:: unique_ptr<Sprite> Bullet;
    u32 bulletCooldown;

    std::unique_ptr<Background> bg; // background

   std::vector<std::unique_ptr<Ball>> ballen;
   std::vector<std::unique_ptr<Sprite>> bullets;

    std::vector<Sprite *> sprites() override;
    std::vector<Background *> backgrounds() override;// background


    SceneLevel1(std::shared_ptr<GBAEngine> engine) : Scene(engine) {}
    //virtual void load() override;
    //virtual void tick(u16 keys) override;

    //virtual void load();
    //virtual void tick(u16 keys);

    //friend class Level1;
    //friend class Level2;
};


#endif //GBA_SPRITE_ENGINE_PROJECT_SCENELEVEL1_H