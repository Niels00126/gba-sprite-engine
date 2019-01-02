//
// Created by 11401165 on 29/11/2018. TEST TEST
//
#include <libgba-sprite-engine/sprites/sprite_builder.h>
#include <libgba-sprite-engine/background/text_stream.h>
#include <libgba-sprite-engine/effects/fade_out_scene.h>
#include <libgba-sprite-engine/gba_engine.h>
#include <algorithm>
#include <sstream>

#include "SceneLevel1.h"


#define MAXBULLETS 10
#define BULLET_COOLDOWN_START 10
#define ERASE_NOTHING  -1




void SceneLevel1:: bullet_delete(){

    int i = 0;
    int delete_buller_number = -1;

    int bullet_erase = bullet_offScreen();

    if(  bullet_erase != ERASE_NOTHING ){
        bulletCooldown +=5;
        bullets.erase(bullets.begin()+ bullet_erase);
        TextStream::instance().setText(std::string("Aantal bullets: ")+ std::to_string(bullets.size()), 7, 0);
    }
    return;

}

int SceneLevel1:: bullet_offScreen(){

    int bul_for = 0;
    for(auto &b : bullets) {

        if(b.get()->isOffScreen() || b->getY() == 0){
            return bul_for;
        }
        bul_for++;
    }
    return ERASE_NOTHING;
}

void SceneLevel1::ball_hit_person(){
    int i = 0;
    for(auto &b : ballen) {

        if(b.get()->getSprite()->collidesWith(*Person.get())){
            dead();
        }
        i++;
    }
}

void SceneLevel1:: dead(){
    TextStream::instance().setText(std::string("You are dead!"), 5, 10);

    while(1){}

}

int SceneLevel1:: bullet_collides_ball(){


    for(auto &bul : bullets){
            int bal_for = 0;
            for(auto &bal : ballen){

                if( bul.get()->collidesWith(*bal->getSprite())){

                    score++;
                    TextStream::instance().setText(std::string("Score: ")+ std::to_string(score), 1, 4);

                    if( bal->getNumber() !=  BALLKLEIN){
                        ballen.push_back(createBall( (bal->getNumber()-1),LEFT,UP,bal->getSprite()->getX(),bal->getSprite()->getY()));
                        ballen.push_back(createBall( (bal->getNumber()-1),RIGHT,UP,bal->getSprite()->getX(),bal->getSprite()->getY()));
                    }
                    bul->moveTo(-100,-100);
                    return bal_for;

                }
                bal_for++;
            }


    }

return ERASE_NOTHING;

}

void SceneLevel1:: check_bullet_hit_ball(){

    int ball_erase = bullet_collides_ball();

    if( ball_erase != ERASE_NOTHING){
        ballen.erase(ballen.begin()+ ball_erase);

    }


}

std::vector<Sprite *> SceneLevel1::sprites() {
    std::vector<Sprite*> sprites;

    for(auto& b : ballen) {
        sprites.push_back(b->getSprite());
    }
    for(auto& b : bullets) {
        sprites.push_back(b.get());
    }


    sprites.push_back(BallSmall.get());
    sprites.push_back(BallBig.get());
    sprites.push_back(BallMedium.get());
    sprites.push_back(Bullet.get());
    sprites.push_back(Person.get());
    return sprites;

}

std::vector<Background *> SceneLevel1::backgrounds() {
    return {
            bg.get()
    };
}


std::unique_ptr<Ball> SceneLevel1::createBall(int number, int dx, int dy,int posX, int posY) {
    if( number == BALLKLEIN){
        return std::unique_ptr<Ball>(new Ball(spriteBuilder->withLocation(posX,posY).buildWithDataOf(*BallSmall.get()) , BALLKLEIN,dx,dy ));
    }else if(number == BALLMIDDEL){
        return std::unique_ptr<Ball>(new Ball(spriteBuilder->withLocation(posX,posY).buildWithDataOf(*BallMedium.get()) , BALLMIDDEL,dx,dy ));
    }
    else if(number == BALLGROOT){
        return std::unique_ptr<Ball>(new Ball(spriteBuilder->withLocation(posX,posY).buildWithDataOf(*BallBig.get()) , BALLGROOT,dx,dy ));
    }
    else{
        return std::unique_ptr<Ball>(new Ball(spriteBuilder->withLocation(posX,posY).buildWithDataOf(*BallBig.get()) , 0,dx,dy ));
    }

}

std::unique_ptr<Sprite> SceneLevel1::createBullet(){
    return  spriteBuilder->withLocation((Person.get()->getX() + (Person.get()->getWidth())/2 - (Bullet.get()->getWidth()/2)) , (GBA_SCREEN_HEIGHT-Person.get()->getHeight()-Bullet.get()->getHeight())).withVelocity(0,-5).buildWithDataOf(*Bullet.get());
}

void SceneLevel1::load_always() {
    foregroundPalette = std::unique_ptr<ForegroundPaletteManager>(new ForegroundPaletteManager(sharedPal,sizeof(sharedPal)));
    //backgroundPalette = std:: unique_ptr<BackgroundPaletteManager>(new BackgroundPaletteManager());

    spriteBuilder = std::unique_ptr<SpriteBuilder<Sprite>>(new SpriteBuilder<Sprite>);
    SpriteBuilder<Sprite> builder;

    BallBig = spriteBuilder
            ->withData(ball32Tiles, sizeof(ball32Tiles))
            .withSize(SIZE_32_32)
            .withLocation(-10, -10)
            .buildPtr();

    BallMedium = spriteBuilder
            ->withData(ball16Tiles, sizeof(ball16Tiles))
            .withSize(SIZE_16_16)
            .withLocation(-10, -10)
            .buildPtr();

    BallSmall = spriteBuilder
            ->withData(ball8Tiles, sizeof(ball8Tiles))
            .withSize(SIZE_8_8)
            .withLocation(-10, -10)
            .buildPtr();

    Bullet = spriteBuilder
            ->withData(bullet8Tiles, sizeof(bullet8Tiles))
            .withSize(SIZE_8_8)
            .withLocation(-10, -10)
            .buildPtr();

    //->withData(man1632Tiles, sizeof(man1632Tiles)) man1616_v1Tiles
    Person = spriteBuilder
            ->withData(man1616_v1Tiles, sizeof(man1616_v1Tiles))
            .withSize(SIZE_16_16)
            .withLocation(50, GBA_SCREEN_HEIGHT-16)
            .buildPtr();

    //bg = std::unique_ptr<Background>(new Background(1, background_data, sizeof(background_data), map, sizeof(map)));


}



void SceneLevel1:: tick_always(u16 keys){
    TextStream::instance().setText(std::string("Aantal ballen: ")+ std::to_string(ballen.size()), 6, 0);
    if((keys & KEY_A)) {
        //ballen.push_back(createBall(BALLGROOT,1,-1,70,100));
        ballen.clear();
    }

    bool allowedToShoot = false;

    if(bulletCooldown > 0) {
        bulletCooldown--;
        TextStream::instance().setText(std::string("Bullet cooldown: ")+ std::to_string(bulletCooldown), 3, 6);
    } else if(bulletCooldown == 0) {
        allowedToShoot = true;
    }

    if( keys & KEY_UP && bullets.size()< MAXBULLETS & allowedToShoot) {
        bulletCooldown = BULLET_COOLDOWN_START;
        bullets.push_back(createBullet());
        TextStream::instance().setText(std::string("Aantal bullets: ")+ std::to_string(bullets.size()), 7, 0);
    }


    //bullet_offScreen();
    bullet_delete();
    check_bullet_hit_ball();
    ball_hit_person();
    for(auto &b : ballen) {
        b->tick();
    }

}

/*void SceneLevel1::tick(u16 keys) {

    /*if(ballen.empty()) {
        if(!engine->isTransitioning()) {
            TextStream::instance() << "entered: starting next scene";
            engine->transitionIntoScene(new SceneLevel2(engine), new FadeOutScene(2));
        }
    }*/
/*tick_always(keys);
if(Game < StartGame){

    ballen.push_back(createBall(BALLKLEIN,1,-1,30,60));
    ballen.push_back(createBall(BALLMIDDEL,1,-1,50,90));
    ballen.push_back(createBall(BALLGROOT,1,-1,70,100));
    Game++;
}
}
*/